#include <iostream>
#include <cassert>
int w;
void vyraz(int x, int y, int z) 
{
    w = max(z, max(x, y));
    assert(w = (z > ((x > y) ? x : y) ? z : ((x > y) ? x : y));
    cout << w;
}


int main() {
    vyraz(5, 2, 554);
    /*check(5, 2, 554);
    check(76,-3,44);
    check(100,343,5)

    */

}







/*
int main() {
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "Enter z: ";
    std::cin >> z;
    if (x > y) {
        a = x;
    }
    else {
        a = y;
    }
    std::cout << "integer a is: " << a << '\n';
    if (z > a) {
        w = z;
    }
    else {
        w = a;
    }
    std::cout << w;
}
*/