//trovare il valore minimo di un vector
//hpc 30.04.2021

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int recursiveMinimum(vector<int> &, int, int, int);

int main()
{
    vector<int> arr(10);

    srand(time(0));

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = rand() % 1000;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "il minimo = " << arr[recursiveMinimum(arr, 0, arr.size(), 0)] << endl;
    return 0;
}

int recursiveMinimum(vector<int> &num, int start, int end, int min)
{
    if (start == end)
    {
        return min;
    }
    else
    {
        if (num[start] < num[min])
        {
            min = start;
        }
        return recursiveMinimum(num, start + 1, end, min);
    }
}