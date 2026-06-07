#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
//	freopen("PICTURE.INP", "r", stdin);
//	freopen("PICTURE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s; cin >> s;
	int n = Siz(s);
	long a[n][n];
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < n ; ++j){
			(i == j) ? a[i][j] = 1 : a[i][j] = 0;
		}
	}
	for(int len = 2 ; len <= n; ++len){
		for(int i = 0 ; i < n - len + 1 ; ++i){
			int j = i + len - 1;
			a[i][j] = max(a[i + 1][j], a[i][j - 1]);
			if(s[i] == s[j]){
				if(len == 2) a[i][j] = 2;
				else a[i][j] = a[i + 1][j - 1] + 2;
			} 
		}
	}
	cout << a[0][n - 1];
	return 0;
}

