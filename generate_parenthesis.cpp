#include <bits/stdc++.h>
using namespace std;

vector<string> valid;
void generate(string &str, int open, int close){
    if (open == 0 && close == 0){
        valid.push_back(str);
        return;
    }
    if (open > 0){
        str.push_back('(');
        generate(str, open - 1, close);
        str.pop_back();
    }
    if (close > 0 && open < close){
        str.push_back(')');
        generate(str, open, close - 1);
        str.pop_back();
    }
}

int main(){
    int n = 3;
    string str;
    generate(str, n, n);
    for (string str : valid)
        cout << str << endl;
        
    return 0;
}
