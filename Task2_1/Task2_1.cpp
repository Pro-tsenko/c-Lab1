#include <iostream>;
using namespace std;
//a не дорівнює b
int a = 213;
int b = 212;
int t;
int  min(int a, int b) {
    int c = a - b;
    while (c) {
         t = c % 2;
         c /= 2;
         } 
        return t;
    }

void per(int a, int b) {
    cout << "Perevirka:" << '\n';
    int c = a - b;
    if (c > 0) {
        cout << "a > b" << '\n';
    }
    else if (c < 0) {
        cout << "a < b" << '\n';
    }
    else {
        cout << "Equal" << '\n';
    }
}
    


void main()
{
     min(a, b);
    if (t != 1) {
        cout << "a < b" << '\n';
    }
    else {
        cout << "a > b" << '\n';
    }
   //Перевірка a,b
   per(a, b);
   //Перевірка a>b
   per(245, 32);
   //Перевірка a<b
   per(-4, 455);
}
