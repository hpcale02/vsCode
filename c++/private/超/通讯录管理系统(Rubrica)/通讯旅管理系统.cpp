#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
#define MAX 1000

//联系人结构体
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_PhoneNumber;
    string m_Address;
};

//通讯旅结构体
struct Addressbooks
{
    Person personArr[MAX];
    //通讯旅当前人数
    int m_Size;
};

//打印主页
void showMenu()
{
    cout << "*****************************" << endl;
    cout << "*****    1、添加联系人    *****" << endl;
    cout << "*****    2、显示联系人    *****" << endl;
    cout << "*****    3、删除联系人    *****" << endl;
    cout << "*****    4、查找联系人    *****" << endl;
    cout << "*****    5、修改联系人    *****" << endl;
    cout << "*****    6、清空联系人    *****" << endl;
    cout << "*****    0、退出通讯录    *****" << endl;
    cout << "*****************************" << endl;
}

//1、添加联系人
void addPerson(Addressbooks *abs)
{
    //通讯旅是否已满
    if (abs->m_Size == MAX)
    {
        cout << "通讯旅已满，无法添加!" << endl;
    }
    else
    {
        //姓名
        string name;
        cout << "输入联系人姓名：";
        cin >> name;
        abs->personArr[abs->m_Size].m_Name = name;

        //性别
        int sex;
        cout << "输入联系人性别\n"
             << "1 -- 男\n"
             << "2 -- 女"
             << endl;
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArr[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入性别有误！请重新输入!" << endl;
        }

        //年龄
        int age;
        cout << "输入联系人年龄：" << endl;
        cin >> age;
        abs->personArr[abs->m_Size].m_Age = age;

        //电话号码
        string phone;
        cout << "输入联系人电话号码：" << endl;
        cin >> phone;
        abs->personArr[abs->m_Size].m_PhoneNumber = phone;

        //地址
        string add;
        cout << "输入联系人地址：" << endl;
        cin >> add;
        abs->personArr[abs->m_Size].m_Address = add;

        abs->m_Size++;

        cout << "添加成功！" << endl;
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//2、显示联系人
void showPerson(const Addressbooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "目前通讯录为空，请添加联系人" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            string sex = abs->personArr[i].m_Sex == 1 ? "男" : "女";
            cout << i + 1 << "、姓名：" << abs->personArr[i].m_Name
                 << "\t性别：" << sex
                 << "\t年龄：" << abs->personArr[i].m_Age
                 << "\t电话号码：" << abs->personArr[i].m_PhoneNumber
                 << "\t地址：" << abs->personArr[i].m_Address
                 << endl;
        }
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//查找的联系人是否存在
int isExist(Addressbooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
        if (abs->personArr[i].m_Name == name)
            return i;

    return -1;
}

//3、删除联系人
void deletePerson(Addressbooks *abs)
{
    string name;
    cout << "输入想删除的联系人：" << endl;
    cin >> name;

    int position = isExist(abs, name);

    if (position == -1)
    {
        cout << "通讯录中查无此人！" << endl;
    }
    else
    {
        for (int i = position; i < abs->m_Size; i++)
        {
            abs->personArr[i] = abs->personArr[i + 1];
        }

        abs->m_Size--;

        cout << "删除成功！" << endl;
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//4、查找联系人
void findPeople(Addressbooks *abs)
{
    string name;
    cout << "输入想查找的联系人：" << endl;
    cin >> name;

    int result = isExist(abs, name);

    if (result != -1)
    {
        cout << "姓名：" << abs->personArr[result].m_Name
             << "\t性别：" << abs->personArr[result].m_Sex
             << "\t年龄：" << abs->personArr[result].m_Age
             << "\t电话号码：" << abs->personArr[result].m_PhoneNumber
             << "\t地址：" << abs->personArr[result].m_Address
             << endl;
    }
    else
    {
        cout << "通讯录中查无此人！" << endl;
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//5、修改联系人
void modificatePeople(Addressbooks *abs)
{
    string name;
    cout << "输入想修改的联系人：" << endl;
    cin >> name;

    int result = isExist(abs, name);

    if (result != -1)
    {
        //姓名
        cout << "输入修改后的联系人名称：" << endl;
        string mod_Name;
        cin >> mod_Name;
        abs->personArr[result].m_Name = mod_Name;

        //性别
        int sex;
        cout << "输入修改后的联系人性别\n"
             << "1 -- 男\n"
             << "2 -- 女"
             << endl;
        while (1)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArr[result].m_Sex = sex;
                break;
            }
            cout << "输入性别有误！请重新输入!" << endl;
        }

        //年龄
        int age;
        cout << "输入修改后的联系人年龄：" << endl;
        cin >> age;
        abs->personArr[result].m_Age = age;

        //电话号码
        string phone;
        cout << "输入修改后的联系人电话号码：" << endl;
        cin >> phone;
        abs->personArr[result].m_PhoneNumber = phone;

        //地址
        string add;
        cout << "输入修改后的联系人地址：" << endl;
        cin >> add;
        abs->personArr[result].m_Address = add;

        cout << "修改成功！" << endl;
    }
    else
    {
        cout << "通讯录中查无此人！" << endl;
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

//6、清空联系人
void clearPeople(Addressbooks *abs)
{
    cout << "是否要清空所有联系人?" << endl;
    cout << "1 -- 是" << endl;
    cout << "2 -- 否" << endl;

    int decision;
    while (1)
    {
        cin >> decision;
        if (decision == 1)
        {
            abs->m_Size = 0;
            cout << "通讯录已清空！" << endl;
            break;
        }
        else if (decision == 2)
        {
            break;
        }

        cout << "输入性别有误！请重新输入!" << endl;
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    system("clear");
}

int main()
{
    Addressbooks abs;
    abs.m_Size = 0;

    int select = 0;

    while (1)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
        case 1: //1、添加联系人
            addPerson(&abs);
            break;
        case 2: //2、显示联系人
            showPerson(&abs);
            break;
        case 3: //3、删除联系人
            deletePerson(&abs);
            break;
        case 4: //4、查找联系人
            findPeople(&abs);
            break;
        case 5: //5、修改联系人
            modificatePeople(&abs);
            break;
        case 6: //6、清空联系人
            clearPeople(&abs);
            break;
        case 0: //0、退出通讯录
            cout << "欢迎下次使用!" << endl;
            return 0;
            break;
        default:
            cout << "！！！号码识别错误！！！" << endl;
            system("read -n 1 -s -p \"按任意键继续。。。\"");
            system("clear");
            break;
        }
    }

    return 0;
}