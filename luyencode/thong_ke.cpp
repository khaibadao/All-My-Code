#include<bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 100000
//		7 2
//1 3 1 2 3 4 4
//1 1 3 5 5 3 3
//2 1
using namespace std;
int main()
{
	freopen("THONGKE.INP", "r", stdin);
	freopen("THONGKE.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int t; cin >> t;
	vector <int> a(n), b(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
	}
	for(int i = 0; i < n ; ++i){
		cin >> b[i];
	}
	stack <int> st1, st2;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	long long res = 1;
	for(int i = 0 ; i < n - 1 ; ++i){
		if(a[i] == a[i + 1]) ++res;
		else{
         	st1.push(res);
			res = 1;
		}
	}
	st1.push(res);
	res = 1;
	for(int i = 0 ; i < n - 1 ; ++i){
		if(b[i] == b[i + 1]) ++res;
		else{
			st2.push(res);
			res = 1;
		}
	}
	st2.push(res);
	vector <int> pat, pas;
	while(!st1.empty()){
		pat.push_back(st1.top());
		st1.pop();
	}
	while(!st2.empty()){
		pas.push_back(st2.top());
		st2.pop();
	}
	sort(pat.begin(), pat.end());
	sort(pas.begin(), pas.end());
	while(t--){
		int k; cin >> k;
		auto it = lower_bound(pat.begin(), pat.end(), k);
		int x = distance(it, pat.end());
		auto at = lower_bound(pas.begin(), pas.end(), k);
		int y = distance(at, pas.end());
		cout << x << ' ' << y << '\n';
	}
	return 0;
}
