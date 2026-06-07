#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

unordered_map <char, bool> maa;
void sang()
{
	maa['2'] = true;
	maa['3'] = true;
	maa['5'] = true;
	maa['7'] = true;
}
int main() {
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    string s; cin >> s;
    for(char x : s){
    	if(maa[x] == true){
    		cout << x << ' ';
    		maa[x] = false;
		}
	}
    return 0;
}

