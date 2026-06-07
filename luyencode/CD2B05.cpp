#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

void doo(){
	string s; cin >> s;
	long long sum = 0;
	for(char x : s) sum += x - '0';
	if(sum%9 == 0 || sum == 9) cout << "YES" << en;
	else cout << "NO" << en;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		doo();
	}
	return 0;
}

