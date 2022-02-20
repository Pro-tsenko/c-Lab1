#include <iostream>
#include <cmath> 
#include <iomanip> 
using namespace std;

int main() {
    int x, y, min1;
    cin >> x >> y;

    min1 = min(x, y); 


    cout << fixed << setprecision(2) << min1;
    return 0;
}