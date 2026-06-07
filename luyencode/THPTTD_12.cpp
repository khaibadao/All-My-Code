#include<bits/stdc++.h>
using namespace std;

vector <long long> fi(51);
vector <long long> v;
bool check(long long n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; ++i){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
void sang(){
	fi[0] = 1;
	fi[1] = 1;
	for(int i = 2 ; i < 50 ; ++i){
		fi[i] = fi[i - 1] + fi[i - 2];
	}
	for(int i = 2 ; i < 50 ; ++i){
		if(check(fi[i])) v.push_back(fi[i]);
	}
}
int main()
{
//	freopen("fibo.inp", "r", stdin);
//	freopen("fibo.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long n, m; cin >> n >> m;
	sang();
	auto it = lower_bound(v.begin(), v.end(), n);
	auto at = upper_bound(v.begin(), v.end(), m);
	cout << distance(it, at);
	return 0;
}
