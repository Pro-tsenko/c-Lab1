#include <iostream>
#include <cassert>

using namespace std;

unsigned int f(unsigned int num) {
    int arr[6], answer(0);
    for (int i = 0;i < 6;++i) {
        arr[i] = num % 16;
        num /= 16;
    }
    for (int i = 0;i < 5;i += 2) swap(arr[i], arr[i + 1]);
    for (int i = 0;i < 6;++i) {
        answer += arr[i] * pow(16, i);
    }
    return answer;
}
unsigned int f2(unsigned int num) {
    return (num >> 4 & 0x0f0f0f0f) | (num << 4 & 0xf0f0f0f0);
}

int main()
{
    cout << f(123545)<<'\n';
    cout << f2(123545);

    cout << endl;
    return 0;
    //assert(f(123545) == f2(123545));
}
