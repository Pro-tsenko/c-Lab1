#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

struct vect {
    double* _vals;
    int _n;
};

const vect inverseV(const vect& v);
void inverse(vect& v);
void inverse(vect* v);

int main()
{
    srand((int)time(0));
    int n;
    vector<int>v;
    cout << "n="; 
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        v.push_back(rand() % 10);
        cout << v.at(i) << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v.at(i) << " ";
    cout << endl;

    system("pause");
    return 0;
}

