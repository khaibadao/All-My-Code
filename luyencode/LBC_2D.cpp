#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int n, k; 
string s = "";

bool check(string s) {
    int res = 0;
    bool at = false;
    for (char x : s) {
        if (x == '1') {
            ++res;
        }
        else
        {
        	if(res == k){
        		res = 0;
        		at = true;
        		continue;
			}else if(res > k) return false;
			else res = 0;
		}
    }
    if(res == k) at = true;
    if(at) return true;
    return false;
}

void ql(string s, int len){
	if(len == n){
		if(check(s)) cout << s << '\n';
		return;
	}
	for(int j = 0 ; j <= 1 ; ++j){
		string pr = s + (to_string(j));
		ql(pr, len + 1);
	}
}
int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	ql("", 0);
	return 0;
}
