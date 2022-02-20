#include <iostream>

using namespace std;

/*int main()
{
    int a = 11, temp;
    int b = 55;
    int* p;
    cout << a << "    " << b << "\n";
    temp = a;
    p = &b;
    a = *p;
    p = &temp;
    b = *p;
    cout << a << "   " << b << "\n";

    system("pause");
    return 0;
}*/

void showBits(unsigned int x, int n = 32) {
    if (n == 0) {
        cout << endl;
        return;
    }
    showBits(x / 2, --n);
    cout << x % 2;

}
int main() {
    int x = 5;
    float y = 1.2;
    int* p = &x;
    cout << p<<'\n';
    float* pd = &y;
    cout << pd<< '\n';
    int* tmp = 0; 
    tmp = p;
    p = (int*) pd;
    pd = (float*) tmp;
    *tmp = *p;
    *p = (int)*pd;
    cout << p << '\n';
    *pd = *tmp;
    cout << pd << '\n'; 
    showBits(x);

}