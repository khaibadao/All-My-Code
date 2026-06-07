#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("splarr.inp", "r", stdin);
	freopen("splarr.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int count = 0;
    int a[n + 1];
    string s = "";
    vector <int> v;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	if(a[i] == 1) v.push_back(i);
	}
	if(!Siz(v)) cout << '0';
	else
	{
		long long cnt = 1;
		for(int i = 1 ; i < Siz(v); ++i){
			cnt *= (v[i] - v[i - 1]);
		}
		cout << cnt;
	}
    return 0;
}

