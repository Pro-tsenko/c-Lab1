#include <iostream>
#include <cassert>
#include <cmath>
int w;

void vyraz(int x, int y, int z)
{
    int ww = x;
    if (y > ww) {
         ww = y;
    }
     if (z > ww) {
        ww = z;
    }
    else {
        std::cout << "ERROR" << '\n';
    }
    std::cout << ww << '\n';
   
   
    
   // assert(x != y != z);//   (z > ((x > y) ? x : y) ? z : ((x > y) ? x : y));
}

void check(int x, int y, int z)
{
    w = std::max(z, std::max(x, y));
    std::cout << w << '\n';
    w == (z > ((x > y) ? x : y) ? z : ((x > y) ? x : y));
    std::cout << w << '\n';
}

int main() {
    vyraz(2, 3, 554);
    check(5, 2, 554);
    check(76, -3, 44);
    check(0, -3, -5);

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