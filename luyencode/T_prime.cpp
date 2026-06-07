#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	if(n < 1) return false;
	if(n <= 3) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(long long i = 5 ; i*i <= n; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
int main()
{
	freopen("tprime.inp", "r", stdin);
	freopen("tprime.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	long long a[n];
	int ans = 0;
	set <long long> st;
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		if(a[i] != 1) st.insert(a[i]);
	}
	for(auto it : st){
    	long long so = sqrt(it);
		if(check(so) && so*so == it){
			++ans;
		}
	}
	cout << ans;
	return 0;
}
