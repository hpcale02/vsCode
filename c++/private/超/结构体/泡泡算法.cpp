#include <iostream>
#include <string>
using namespace std;

struct Hero
{
    string name;
    int age;
    string sex;
};

void bubbleSort(Hero hero[], int len);
void printHero(Hero hero[], int len);

int main()
{
    Hero heroArr[5] =
        {{"刘备", 23, "男"},
         {"关羽", 22, "男"},
         {"张飞", 20, "男"},
         {"赵云", 21, "男"},
         {"貂蝉", 19, "女"}};

    int len = sizeof(heroArr) / sizeof(heroArr[0]);

    //冒泡排序
    bubbleSort(heroArr, len);

    //打印结构体Hero
    printHero(heroArr, len);

    return 0;
}

void bubbleSort(Hero hero[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (hero[j].age > hero[j + 1].age)
            {
                Hero temp = hero[j];
                hero[j] = hero[j + 1];
                hero[j + 1] = temp;
            }
        }
    }
}

void printHero(Hero hero[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << hero[i].name
             << "\t年龄：" << hero[i].age
             << "\t性别：" << hero[i].sex
             << endl;
    }
}