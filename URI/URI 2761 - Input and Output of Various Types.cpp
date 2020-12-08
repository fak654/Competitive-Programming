/**************************************************
OJudge  : urionlinejudge.com
PROBLEM : 2761 - Input and Output of Various Types
ANSWER  : Accepted
LANGUAGE: C++
***************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    float d;
    char c;
    string s;

    cin >> i >> d >> c;
    getchar();
    getline(cin, s);

    cout << i << fixed << setprecision(6) << d << c << s << endl;
    cout << i << "\t" << fixed << setprecision(6) << d << "\t" << c << "\t" << s << endl;
    cout << right << setw(10) << i << right << setw(10) << fixed << setprecision(6) << d  << right << setw(10) << c  << right << setw(10) << s << endl;

    return 0;
}
