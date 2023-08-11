#include <bits/stdc++.h>
using namespace std;

void generate(vector<int> &subset, int i, vector<int> &set){
    if (set.size() == i){
        for (auto el : subset)
            cout << el << ' ';
        cout << endl;
        return;
    }
    generate(subset, i + 1, set);
    subset.push_back(set[i]);
    generate(subset, i + 1, set);
    subset.pop_back();
}

int main(){
    vector<int> set = {1, 2, 3};
    vector<int> subset;
    generate(subset, 0, set);
    return 0;
}
