#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    double a, b, i, e, ap, bp;
    cout << "Input a and b: " << endl;
    cin >> a >> b;
    cout << "Input accuracy: " << endl;
    cin >> e;
    while (abs(a - b) >= e) {
        ap = a; 
        bp = b;
        a = sqrt(ap * bp);
       
        cout << a << '\n';
        b = (ap + bp) / 2;
       
        cout << b << '\n';

    }
    cout << a << " " << b;
    return 0;
}

