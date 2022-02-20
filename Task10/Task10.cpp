/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n, x1, x2, y1, y2, x, y;
    double sum = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    x1 = x;
    y1 = y;
    for (int i = 0; i < (n - 1); i++) {
        cout << "Enter xn: ";
        cin >> x2;
        cout << "Enter yn: ";
        cin >> y2;

        sum = sum + (x1 + x2) * (y2 - y1);
        x1 = x2;
        y1 = y2;
    }
    sum = sum + (x + x2) * (y - y2);
    cout << fixed << setprecision(3) << abs(sum) / 2 << endl;
    return 0;
}
*/

#include <iostream>
#include <cassert>

using namespace std;

void plosha(int x1, int y1, int x2, int y2, int x3,int y3, int x4,int y4, int x5, int y5) {
    double sum = 0;
  
    sum = y1*(x5 - x2) + y2*(x1 - x3) + y3*(x2 - x4) + y4*(x3 - x5) + y5*(x4 - x1);
    cout << sum/2;
}
int main() {
    plosha(13, -92, 44, 0, -800, 30, 27, 2, 1, 2);
    return 0;
   // assert(x1 = 0 && y1 > 0 && x2 > 0 && y2 > 0 && x3 > 0 && y3 > 0 && x4 > 0 && y4 > 0 && x5 > 0 && y5 > 0);
   
        }

        