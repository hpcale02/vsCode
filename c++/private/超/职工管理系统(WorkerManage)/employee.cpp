#include "employee.h"

Employee::Employee(int id, string name, int d_id)
{
    this->worker_ID = id;
    this->worker_Name = name;
    this->worker_DeptId = d_id;
}

//显示个人信息
void Employee::showInfo()
{
    cout << "职工编号：" << this->worker_ID
         << "\t职工姓名：" << this->worker_Name
         << "\t职工岗位：" << this->getDeptName()
         << "\t岗位指责：完成经理交给的任务" << endl;
}

//获取岗位名称
string Employee::getDeptName()
{
    return string("员工");
}

Employee::~Employee()
{
}