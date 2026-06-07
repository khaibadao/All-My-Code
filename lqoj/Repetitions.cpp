#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int cnt = 1;
    int ans = 1;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == s[i + 1]){
            cnt++;
        }else
        {
            ans = max(cnt, ans);
            cnt = 1;
        }
    }
    cout << ans;
    return 0;
}
