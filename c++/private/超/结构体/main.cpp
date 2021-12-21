#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
    string name;
    int score;
};

struct teacher
{
    string name;
    student stu[5];
};

void setDate(teacher th[], int len);
void printDate(teacher th[], int len);

int main()
{
    srand((unsigned int)time(NULL));
    teacher tea[3];
    int lenTea = sizeof(tea) / sizeof(tea[0]);

    setDate(tea, lenTea);
    printDate(tea, lenTea);

    return 0;
}

void setDate(teacher th[], int len)
{
    string abcde = "ABCDE";

    for (int i = 0; i < len; i++)
    {
        //给老师名字赋值
        th[i].name = "theacher_";
        th[i].name += abcde[i];

        //给学生赋值
        for (int j = 0; j < 5; j++)
        {
            int scoreStu = rand() % 61 + 40;
            th[i].stu[j].name = "student_";
            th[i].stu[j].name += abcde[j];

            th[i].stu[j].score = scoreStu;
        }
    }
}

void printDate(teacher th[], int len)
{
    for (int i = 0; i < len; i++)
    {
        //打印老师的数据
        cout << "老师：" << th[i].name << endl;

        for (int j = 0; j < 5; j++)
        {
            //打印学生的数据
            cout << "\t学生：" << th[i].stu[j].name << "\t\t分数：" << th[i].stu[j].score << endl;
        }
    }
}