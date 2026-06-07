#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cow = n/4;
        int chicken = (n%4)/2;
        cout << cow + chicken << '\n';
    }
    return 0;
}

