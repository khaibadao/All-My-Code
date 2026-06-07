#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = 1000000007;
    cin >> n;
    int res = 1;
    for(int i = 1 ; i <= n ; i++){
        res = (res * 2) % m;
    }
    cout << res;
    return 0;
}
