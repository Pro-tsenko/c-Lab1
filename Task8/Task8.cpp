#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string s;
    ifstream in1("input1.txt");

    map<string, int> D;

    while (in1 >> s)
        D[s]++;
    in1.close();

    map <string, int>::iterator it;
    ofstream res("output.txt");
    for (it = D.begin(); it != D.end(); it++)
        res << it->first << ": " << it->second << endl;
    return 0;
}