#include "manager.h"

Manager::Manager(int id, string name, int d_id)
{
    this->worker_ID = id;
    this->worker_Name = name;
    this->worker_DeptId = d_id;
}

//显示个人信息
void Manager::showInfo()
{
    cout << "职工编号：" << this->worker_ID
         << "\t职工姓名：" << this->worker_Name
         << "\t职工岗位：" << this->getDeptName()
         << "\t岗位指责：完成老板交给的任务，并下发任给员工" << endl;
}

//获取岗位名称
string Manager::getDeptName()
{
    return string("经理");
}

Manager::~Manager()
{
}