#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int cnt = 0;
		long long sum = 0;
		for(int i = s.size() - 1; i >= 0; i--){
			sum += (long long)pow(2, cnt) * (s[i] - '0');
			++cnt;
		}
		cout << sum << endl;
	}
	return 0;
}
