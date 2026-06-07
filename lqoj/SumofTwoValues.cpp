#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    long S; cin >> S;
    vector <long> a(n + 1);
    unordered_map <long, int> maa;
    for(int i = 1; i <= n ; ++i){
        cin >> a[i];
        if(maa[S - a[i]] && maa[S - a[i]] != i){
            return cout << maa[S - a[i]] << ' ' << i, 0;
        }
        maa[a[i]] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}
