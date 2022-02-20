#include <iostream>
#include <ctime>
bool repeat(int, int*);//прототип функции определяющей повторения
using namespace std;

int main()
{
    srand(time(NULL));

    //определяем массив
    int n = 4;
  
    int* a = new int[n];

    //инициализируем массив
    for (int i = 0; i < n; i++)
        do
        {
            M[i] = 1 + rand() % 10;//случайные в диапазоне от 1 до 1000
        } while (repeat(i, M));

        //вывод массива
        for (int i = 0; i < n; i++)
            cout << M[i] << " ";

        return 0;
       
}

//при повторении - true
bool repeat(int k, int* M)
{
    for (int i = 0; i < k; i++)
        if (M[k] == M[i])
            return true;
    return false;
}
