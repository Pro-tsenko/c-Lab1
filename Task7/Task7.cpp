#include <iostream>
#include <string>
using namespace std;

template <typename T>
void sort(T*) {
}


struct Pair {
    char _c;
    int _count;
};

bool operator< (const Pair& x, const Pair& z) {
    return x._count < z._count;
};

int main()
{
    char* s, s1= "my string some text";
    //cout << "String:\n";
    //getline(cin, s);
    unsigned long long conts[CHARCOUNT];
    Pair conts[CHARCOUNT];
    for (int i = 0; i < CHARCOUNT; i++) conts[i]._c = char(i);
    for (int i = 0; i < CHARCOUNT; i++) conts[i]._count = 0;
    for (int i = 0; i < n-1; i++) conts[s[k]]._count += 1;
   
   unsigned long long map[CHARCOUNT];
    for (int i = 0; i < CHARCOUNT; i++) map[i] = conts[n - 1]._c;

    sort(conts, "desc");

    
    
    
    /*
    s1 = s;
    int n = s.size(), n1 = n, count;
        for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i] == s[j])
            {
                for (int k = j; k < n - 1; k++)
                    s[k] = s[k + 1];
                n--;
                j--;
            }
        for (int i = 0; i < n; i++)
    {        count = 0;
        for (int j = 0; j < n1; j++)
            if (s[i] == s1[j]) count++;
        cout << s[i] << " - " << count << "\n";
    }
      system("pause");
    return 0;*/
}
