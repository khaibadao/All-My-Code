#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, c; cin >> a >> b >> c;
	long long ans = a;
	for(int i = 0 ; i < b ; ++i){
		(a *= ans) %= c;
	}
	cout << ans;
	return 0;
}
