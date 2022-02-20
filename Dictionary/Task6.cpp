#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

struct myString {
    char* _s;
    int _n;
};

struct Dictionary {
    myString* _words;
    int _n;
};
void msort(Dictionary& d) {

};

const Dictionary createDictionary(char*) {
    Dictionary dict;
    dict._n = 100;
    dict

};
const void addTexttoDic(Dictionary&, char*) {


};


    int main()
{
    string s;
    ifstream in1("input.txt");

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