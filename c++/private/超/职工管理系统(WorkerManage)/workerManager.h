#pragma once

#include <iostream>
using namespace std;

#include "worker.h"

#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
    WorkerManager();

    //显示菜单
    void ShowMenu();

    //退出系统
    void ExitSystyem();

    //添加职工
    void AddEmployee();

    //保存文件
    void save();

    //统计文件中的人数
    int getEmployeeNumber();

    //初始化员工
    void initEmployee();

    //展示职工信息
    void showEmplopyee();

    //判断职工是否存在
    int employeeIsExist(int);

    //删除职工
    void deleteEmployee();

    //修改职工
    void modificateEmployee();

    //查找职工
    void findEmployee();

    //排序职工
    void sortEmployee();

    //清空文件
    void cleanFile();

    //职工ID已存在
    bool IdExist(int);

    //记录职工人数
    int worker_number;

    //文件是否为空
    bool worker_file_is_empty = false;

    //职工数组的指针
    Worker **worker_array;

    ~WorkerManager();
};