/**************************************************
OJudge  : https://onlinejudge.org
PROBLEM : UVA 458 - The Decoder
ANSWER  : Accepted
LANGUAGE: C++
AUTHOR  : https://github.com/fak654/
***************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    while(cin >> line){
        int len = line.length();
        string temp = "";
        for(int i = 0; i < len; i++) {
            temp += line[i] - 7;
        }
        cout << temp << endl;
    }
    return 0;
}
