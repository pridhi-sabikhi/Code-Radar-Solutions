#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b; cin >> a >> b;
    char ch; cin >> ch;
    if(ch == '+') cout << a + b << endl;
    if(ch == '-') cout << a - b << endl;
    if(ch == '*') cout << a*b << endl;
    else cout << a/b << endl;
    return 0;

}