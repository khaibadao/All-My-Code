#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

bool check_0(int n){
	string s = to_string(n);
	for(char x : s) if(x == '0') return true;
	return false;
}

int doo(int &a){
	if(a > 0){
		string s = to_string(a);
		vector <char> kt(Siz(s));
		int cnt = -1;
		for(char x : s){
			kt[++cnt] = x;
		}
		sort(kt.begin(), kt.end(), greater <char> ());
		string ans = "";
		for(char x : kt){
			ans += x;
		}
		int so = stoi(ans);
//		cout << ans;
		return so;
	}
	else
	{
		if(check_0(a)){
			string s = to_string(a);
			vector <char> kt(Siz(s));
			int cnt = -1;
			for(int i = 0 ; i < Siz(s) ; ++i){
				kt[++cnt] = s[i];
			}
			sort(kt.begin(), kt.end());
			string tmp = "";
			char dau;
			bool bla = false;
			for(char x : kt){
				if(x == '0' || bla == true) tmp += x;
				else if(x != '-')
				{
					dau = x;
					bla = true;
				}
			}
			tmp = dau + tmp;
//			cout << dau << ' ';
//			cout << '-' << tmp << " (1)" << en;
			int so = stoi(tmp);
			return so*-1;
//			-00123;
		}else
		{
			string s = to_string(a);
			vector <char> kt(Siz(s));
			int cnt = -1;
			for(int i = 0 ; i < Siz(s) ; ++i){
				kt[++cnt] = s[i];
			}
			sort(kt.begin(), kt.end());
			string tmp = "";
			for(char x : kt){
				if(x != '-') tmp += x;
			}
//			cout << tmp << en;
			int so = stoi(tmp);
			return so*-1;
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector <int> a(n);
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
//	int res; cin >> res;
//	doo(res);
	vector <int> b;
	for(int i = 0 ; i < n ; ++i){
		int tmp = doo(a[i]);
		b.push_back(tmp);
	}
	sort(b.begin(), b.end(), greater <int>());
	for(int x : b) cout << x << ' ';
	return 0;
}

