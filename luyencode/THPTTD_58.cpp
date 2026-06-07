#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
void dao_nguoc(string &s){
	int l = 0, r =  Siz(s) - 1;
	while(l < r){
		char tmp = s[l];
		s[l] = s[r];
		s[r] = tmp;
		++l, --r;
	}
}
bool check(string s){
	dao_nguoc(s);
	long long n = stoll(s);
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
int main() {
	freopen("timso.inp", "r", stdin);
	freopen("timso.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector<vector<string>> a(n, vector<string>(m));
    int count = 0;
    for(int i = 0 ; i < n ; ++i){
    	for(int j = 0 ; j < m ; ++j){
    		cin >> a[i][j];
    		if(check(a[i][j])) ++count;
		}
	}
	cout << count;
    return 0;
}
