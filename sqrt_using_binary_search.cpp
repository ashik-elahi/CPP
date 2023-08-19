#include <bits/stdc++.h>
using namespace std;

#define eps 1e-6    //precision

int main()
{
    double x = 3;
    double lo = 1, hi = x, mid;
    while (hi - lo > eps){
        mid = (lo + hi) / 2;
        if (mid * mid < x)
            lo = mid;
        else
            hi = mid;
    }
    cout << mid << endl;
    
    return 0;
}
