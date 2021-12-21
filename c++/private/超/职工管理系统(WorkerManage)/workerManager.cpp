#include "workerManager.h"

WorkerManager::WorkerManager()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in); //读文件

    // 1、文件不存在
    if (!ifs.is_open())
    {
        //读不到文件
        // cout << "文件不存在" << endl;

        //初始化属性
        this->worker_number = 0;
        //初始化数组指针
        this->worker_array = NULL;
        //初始化文件是否为空
        this->worker_file_is_empty = true;

        ifs.close();
        return;
    }

    // 2、文件存在，数据为空
    char ch;
    ifs >> ch;

    if (ifs.eof())
    {
        //文件为空
        // cout << "文件为空" << endl;

        //初始化属性
        this->worker_number = 0;
        //初始化数组指针
        this->worker_array = NULL;
        //初始化文件是否为空
        this->worker_file_is_empty = true;

        ifs.close();
        return;
    }

    // 3、文件存在，数据不为空
    int num = this->getEmployeeNumber();
    // cout << "职工人数为：" << num << endl;

    this->worker_number = num;

    //开辟空间
    this->worker_array = new Worker *[this->worker_number];

    //将文件中的数据存到数组中
    this->initEmployee();
}

//显示菜单
void WorkerManager::ShowMenu()
{
    cout << "******************************************" << endl;
    cout << "********  欢迎使用职工管理系統！ *********" << endl;
    cout << "************  0.退出管理程序  ************" << endl;
    cout << "************  1.增加职工信息  ************" << endl;
    cout << "************  2.显示职工信息  ************" << endl;
    cout << "************  3.删除畜职职工  ************" << endl;
    cout << "************  4.修改职工信息  ************" << endl;
    cout << "************  5.查找职工信息  ************" << endl;
    cout << "************  6.按照编号排序  ************" << endl;
    cout << "************  7.清空所有文档  ************" << endl;
    cout << "******************************************" << endl;
    cout << endl;
}

//退出系统
void WorkerManager::ExitSystyem()
{
    cout << "欢迎下次使用" << endl;
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    exit(0);
}

//添加职工
void WorkerManager::AddEmployee()
{
    cout << "请输入添加职工数量：" << endl;
    int add_number = 0; //保存用户的输入数量
    cin >> add_number;

    if (add_number > 0)
    {
        //计算添加新空间大小
        int new_size = this->worker_number + add_number; //新空间 = 原来人数 + 新增人数

        //开辟新空间
        Worker **new_space = new Worker *[new_size];

        //将原来的数据拷贝到新空间
        if (this->worker_number != 0)
        {
            for (int i = 0; i < worker_number; i++)
            {
                new_space[i] = this->worker_array[i];
            }
        }

        //添加新数据
        for (int i = 0; i < add_number; i++)
        {
            int id;
            string name;
            int d_select;

            do
            {
                cout << "请输入第 " << i + 1 << " 个新职工编号：";
                cin >> id;

                if (IdExist(id))
                {
                    cout << "您输入的职工号已存在请重新输入" << endl;
                }

            } while (IdExist(id));

            cout << "请输入第 " << i + 1 << " 个新职工姓名：";
            cin >> name;

            cout << "请选择该职工的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> d_select;

            Worker *worker = NULL;

            switch (d_select)
            {
            case 1:
                worker = new Employee(id, name, 1);
                break;
            case 2:
                worker = new Manager(id, name, 2);
                break;
            case 3:
                worker = new Boss(id, name, 3);
                break;
            default:
                break;
            }

            //讲创建职工指责，保存到数组中
            new_space[this->worker_number + i] = worker;
        }

        //释放原有的空间
        delete[] this->worker_array;

        //更改新空间的指向
        this->worker_array = new_space;

        //更新新的空间人数
        this->worker_number = new_size;

        //文件不为空
        this->worker_file_is_empty = false;

        //成功添加后，保存到文件中
        this->save();

        //提示添加成功
        cout << "成功添加" << add_number << "名新职工!" << endl;
    }
    else
    {
        cout << "输入数据有误" << endl;
    }

    //按任意键继续和清屏
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//保存文件
void WorkerManager::save()
{
    ofstream ofs;
    ofs.open(FILENAME, ios::out); //用输出的方式打开文件（写文件）

    //将每个职工数据写入文件
    for (int i = 0; i < this->worker_number; i++)
    {
        ofs << this->worker_array[i]->worker_ID << " "
            << this->worker_array[i]->worker_Name << " "
            << this->worker_array[i]->worker_DeptId << endl;
    }

    ofs.close();
}

//统计文件中的人数
int WorkerManager::getEmployeeNumber()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in); //打开读文件

    int id;
    string name;
    int d_id;

    int num = 0;

    while (ifs >> id && ifs >> name && ifs >> d_id)
    {
        //记录人数
        num++;
    }

    return num;
}

//初始化员工
void WorkerManager::initEmployee()
{
    ifstream ifs;
    ifs.open(FILENAME, ios::in);

    int id;
    string name;
    int d_id;

    int index = 0;

    while (ifs >> id && ifs >> name && ifs >> d_id)
    {
        Worker *worker = NULL;

        if (d_id == 1)
        {
            worker = new Employee(id, name, d_id);
        }
        else if (d_id == 2)
        {
            worker = new Manager(id, name, d_id);
        }
        else
        {
            worker = new Boss(id, name, d_id);
        }

        this->worker_array[index] = worker;
        index++;
    }

    //关闭文件
    ifs.close();
}

//展示职工信息
void WorkerManager::showEmplopyee()
{
    //判断文件是否为空
    if (this->worker_file_is_empty)
    {
        cout << "文件不存在或者为空！" << endl;
    }
    else
    {
        for (int i = 0; i < worker_number; i++)
        {
            //利用堕胎调用程序接口
            this->worker_array[i]->showInfo();
        }
    }

    //按任意键继续和清屏
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//判断职工是否存在
int WorkerManager::employeeIsExist(int id)
{
    int index = -1;

    for (int i = 0; i < this->worker_number; i++)
    {
        if (this->worker_array[i]->worker_ID == id)
        {
            index = i;
            break;
        }
    }

    return index;
}

//删除职工
void WorkerManager::deleteEmployee()
{
    //文件不存在
    if (this->worker_file_is_empty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        //按照职工编号删除
        cout << "请输入想要删除职工编号：";
        int id = 0;
        cin >> id;

        int index = this->employeeIsExist(id);

        if (index != -1) //职工存在，删除index位置的职工
        {
            //数据前移
            for (int i = index; i < this->worker_number; i++)
            {
                this->worker_array[i] = this->worker_array[i + 1];
            }

            //更新人员
            this->worker_number--;

            //数据同步到文件
            this->save();

            cout << "删除成功！" << endl;
        }
        else
        {
            cout << "删除失败，未找到职工！" << endl;
        }
    }

    //按任意键继续和清屏
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//修改职工
void WorkerManager::modificateEmployee()
{
    //判断文件是否为空
    if (this->worker_file_is_empty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        cout << "请输入修改职工的编号：";
        int id;
        cin >> id;

        int ret = this->employeeIsExist(id);

        if (ret != -1) //找到职工编号
        {
            // delete this->worker_array[ret];

            int new_id = 0;
            string new_name = "";
            int new_select = 0;

            cout << "查到：" << id << "号职工，请输入新的职工号：";
            cin >> new_id;

            cout << "请输入新的姓名：";
            cin >> new_name;

            cout << "请输入新的岗位：" << endl;
            cout << "1、普通职工" << endl;
            cout << "2、经理" << endl;
            cout << "3、老板" << endl;
            cin >> new_select;

            Worker *worker = NULL;

            switch (new_select)
            {
            case 1:
                worker = new Employee(new_id, new_name, new_select);
                break;
            case 2:
                worker = new Manager(new_id, new_name, new_select);
                break;
            case 3:
                worker = new Boss(new_id, new_name, new_select);
                break;
            default:
                break;
            }

            //更新数据到数组
            this->worker_array[ret] = worker;

            //数据保存到文件
            this->save();

            cout << "修改成功！" << endl;
        }
        else //查无此人
        {
            cout << "修改失败，查无此人！" << endl;
        }
    }

    //按任意键继续和清屏
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//查找职工
void WorkerManager::findEmployee()
{
    //文件是否为空
    if (this->worker_file_is_empty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        cout << "请输入查找方式：" << endl;
        cout << "1、按职工号查找" << endl;
        cout << "2、按姓名查找" << endl;

        int select = 0;
        cin >> select;

        if (select == 1) //按职工号查找
        {
            cout << "请输入查找的职工编号：" << endl;
            int id;
            cin >> id;

            int ret = employeeIsExist(id);

            if (ret != -1) //找到职工
            {
                cout << "查找成功！职工信息如下：" << endl;
                this->worker_array[ret]->showInfo();
            }
            else //没找到职工
            {
                cout << "查找失败，查无此人！" << endl;
            }
        }
        else if (select == 2) //按姓名查找
        {
            string name;
            cout << "请输入查找的姓名：";
            cin >> name;

            //是否查到的标志
            bool flag = false;

            for (int i = 0; i < worker_number; i++)
            {
                if (this->worker_array[i]->worker_Name == name)
                {
                    cout << "查找成功，职工编号为："
                         << this->worker_array[i]->worker_ID << endl;
                    cout << "职工信息如下：" << endl;

                    this->worker_array[i]->showInfo();

                    flag = true;
                }
            }

            //查无此人
            if (flag == false)
            {
                cout << "查找失败，查无此人！" << endl;
            }
        }
        else //输入有误
        {
            cout << "输入有误！" << endl;
        }
    }

    //按任意键继续和清屏
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//排序职工
void WorkerManager::sortEmployee()
{
    //文件不存在
    if (this->worker_file_is_empty)
    {
        cout << "文件不存在或者记录为空！" << endl;
    }
    else
    {
        cout << "请选择排序方式：" << endl;
        cout << "1、按照职工进行升序" << endl;
        cout << "2、按照职工进行降序" << endl;

        int select = 0;
        cin >> select;

        for (int i = 0; i < this->worker_number; i++)
        {
            int min_or_max = i;

            for (int j = i + 1; j < this->worker_number; j++)
            {
                if (select == 1) //升序
                {
                    if (this->worker_array[j]->worker_ID < this->worker_array[min_or_max]->worker_ID)
                    {
                        min_or_max = j;
                    }
                }
                else if (select == 2) //降序
                {
                    if (this->worker_array[j]->worker_ID > this->worker_array[min_or_max]->worker_ID)
                    {
                        min_or_max = j;
                    }
                }
                else //错误输入
                {
                    cout << "输入有误！" << endl;

                    //按任意键继续和清屏
                    system("read -n 1 -s -p \"按任意键继续。。。\"");
                    system("clear");
                    return;
                }
            }

            //判断一开始认定的最小/最大值不等于现有的最小/最大值进行交换
            if (i != min_or_max)
            {
                Worker *temp = this->worker_array[i];
                this->worker_array[i] = this->worker_array[min_or_max];
                this->worker_array[min_or_max] = temp;
            }
        }

        cout << "排序成功！排序后的结果为：" << endl;

        for (int i = 0; i < worker_number; i++)
        {
            this->worker_array[i]->showInfo();
        }

        //同步文件
        this->save();
    }

    //按任意键继续和清屏
    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//清空文件
void WorkerManager::cleanFile()
{
    cout << "是否确认情况文件？" << endl;
    cout << "1、确认" << endl;
    cout << "2、返回" << endl;

    int select = 0;
    cin >> select;

    if (select == 1)
    {
        ofstream ofs(FILENAME, ios::trunc);
        ofs.close();

        if (this->worker_array != NULL)
        {
            //释放数组数据
            // for (int i = 0; i < this->worker_number; i++)
            // {
            //     if (this->worker_array[i] != NULL)
            //     {
            //         delete this->worker_array[i];
            //     }
            // }

            //清空人数
            this->worker_number = 0;

            //释放数组空间
            delete[] this->worker_array;
            this->worker_array = NULL;

            //文件为空
            worker_file_is_empty = true;

            cout << "清空成功！" << endl;
        }

        //按任意键继续和清屏
        system("read -n 1 -s -p \"按任意键继续。。。\"");
        system("clear");
    }
    else
    {
        //按任意键继续和清屏
        system("read -n 1 -s -p \"按任意键继续。。。\"");
        system("clear");

        return;
    }
}

//职工ID已存在
bool WorkerManager::IdExist(int id)
{
    bool flag = false;

    for (int i = 0; i < this->worker_number; i++)
    {
        if (id == this->worker_array[i]->worker_ID)
        {
            flag = true;
        }
    }

    return flag;
}

WorkerManager::~WorkerManager()
{
    if (this->worker_array != NULL)
    {
        // for (int i = 0; i < this->worker_number; i++)
        // {
        //     if (this->worker_array[i] != NULL)
        //     {
        //         delete this->worker_array[i];
        //     }
        // }

        delete[] this->worker_array;
        this->worker_array = NULL;
    }
}