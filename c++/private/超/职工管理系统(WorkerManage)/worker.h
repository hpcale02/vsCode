#pragma once
#include <iostream>
#include <string>
using namespace std;

//职业抽象基类
class Worker
{
public:
    //显示个人信息
    virtual void showInfo() = 0;

    //获取岗位名称
    virtual string getDeptName() = 0;

    int worker_ID;      //职工编号
    string worker_Name; //职工姓名
    int worker_DeptId;  //职工部门编号
};