#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	long long sum = 0;
	int t = 6;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(t--){
		int p, s; cin >> p >> s;
		sum += p - (s - 1)*(p/10);
	}
	if(sum) cout << sum;
	else cout << 0;
	return 0;
}
