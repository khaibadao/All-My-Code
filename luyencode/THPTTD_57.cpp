#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	freopen("xaudx.inp", "r", stdin);
	freopen("xaudx.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s; cin >> s;
	int res = 1;
	for(int i = 0 ; i < Siz(s) ; ++i){
        int l = i, r = i;
        int cnt = 0;
        while(l >= 0 && r < Siz(s)){
            if(s[r] == s[l])
            {
                ++cnt;
                --l, ++r;
            }else
            {
                res = max(res, cnt*2 - 1);
                break;
            }
            res = max(res, cnt*2 - 1);
        }
	}
	for(int i = 0 ; i < Siz(s); ++i){
        int l = i, r = i + 1;
        int cnt = 0;
        while(l >= 0 && r < Siz(s)){
            if(s[r] == s[l])
            {
                ++cnt;
                --l, ++r;
            }else
            {
                res = max(res, cnt*2);
                break;
            }
            res = max(res, cnt*2);
        }
	}
	cout << res;
	return 0;
}
