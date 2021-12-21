#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//员工类
class Employee : public Worker
{
public:
    Employee(int, string, int);

    //显示个人信息
    virtual void showInfo();

    //获取岗位名称
    virtual string getDeptName();

    ~Employee();

private:
};
