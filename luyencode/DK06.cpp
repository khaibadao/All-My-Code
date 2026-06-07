#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b; cin >> a >> b;
    if(a == 0 && b == 0) return cout << "WOW", 0;
    else if(a == 0) return cout << "NO", 0;
    else return cout << fixed << setprecision(2) << (float)(b*-1)/a, 0;
    return 0;
}
