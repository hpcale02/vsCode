#include <iostream>
using namespace std;

#include "workerManager.h"

int main()
{

    WorkerManager wm;

    int choice = 0;

    while (1)
    {
        wm.ShowMenu();

        cout << "请输入您的选择：" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0: //退出系统
            wm.ExitSystyem();
            break;
        case 1: //增加职工
            wm.AddEmployee();
            break;
        case 2: //显示职工
            wm.showEmplopyee();
            break;
        case 3: //删除职工
            wm.deleteEmployee();
            break;
        case 4: //修改职工
            wm.modificateEmployee();
            break;
        case 5: //查找职工
            wm.findEmployee();
            break;
        case 6: //排序职工
            wm.sortEmployee();
            break;
        case 7: //清空文档
            wm.cleanFile();
            break;
        default:
            system("clear");
            break;
        }
    }

    system("read -n 1 -s -p \"按任意键继续。。。\"");
    return 0;
}