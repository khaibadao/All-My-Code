#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	freopen("MATMA.INP", "r", stdin);
//	freopen("MATMA.OUT", "w", stdout);
	string s; cin >> s;
	char a[s.size() + 1];
	long long sum = 0;
	for(int i = 0 ; i < s.size() ; ++i){
		sum += s[i] - '0';
		a[i] = s[i];
	}
	sort(a, a + s.size(), greater <char> ());
	if(a[s.size() - 1] != '0'){
		cout << -1;
		return 0;
	}else if(sum%3 == 0){
		sort(a, a + s.size(), greater <char> ());
		for(int i = 0 ; i < s.size() ; ++i) cout << a[i];
	}
	else cout << -1;
//	sort(a, a + s.size(), greater <char> ());
//	long long sum = 0;
////	cout << a[s.size() - 1] << '\n';
//	else{
//		for(int i = 0 ; i < s.size() ; ++i) sum += a[i] - '0';
//		if(sum%3 == 0){
//			for(int i = 0 ; i < s.size() ; ++i) cout << a[i];
//		}else cout << -1;
//	}
	return 0;
}
