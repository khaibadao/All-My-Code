#include<bits/stdc++.h>
using namespace std;
int vl(int n)
{
    if(n == 1) return 1;
    return n * vl(n - 1);
}
int main()
{
    float x, n; cin >> x >> n;
    double sum = 0.0;
    for(int i = 1; i <= n ; ++i){
        sum += (pow(x, i) / vl(i));
    }
    cout << fixed << setprecision(2) << sum;
    return 0;
}
