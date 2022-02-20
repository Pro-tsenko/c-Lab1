
#include <cassert>
#include <iostream>
using namespace std;
int i = 0;

//double f(double x, double* p) { return p < a ? 0 : *p + x * f(x, p - 1); }


bool repeat(int, int*);//прототип функции определяющей повторения


int main()
{
    srand(time(NULL));

    //определяем массив
    int n;
    cin >> n;
    int* M = new int[n];

    //инициализируем массив
    for (int i = 0; i < n; i++)
        do
        {
            M[i] = 1 + rand() % 1000;//случайные в диапазоне от 1 до 1000
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
/*void fillArray(double* coeff, size_t size);
double Horner(double* coeff, size_t size, double x);
double sum(double* coeff, size_t size, int sign = 1);
void fillArray(double* coeff, size_t size)
{
	return;
}
double sum(double* coeff, size_t size, int sign)
{
	return 0;
}
double Horner(double* coeff, size_t size, double x)
{
	double result = 0;
	assert(((x == 1) || (x == -1)) ? (result == sum(coeff, size, x)) : true);
	return result;
}
*/