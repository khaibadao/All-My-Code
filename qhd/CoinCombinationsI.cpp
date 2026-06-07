#include<bits/stdc++.h>
#define MOD 1000001
using namespace std;

int n, S;
int a[MOD];
int res = 0;
void ql(long long sum){
	if(sum > S) return;
	if(sum == S){
		++res;
		return;
	}
	for(int i = 0; i < n ; ++i){
		ql(sum + a[i]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> S;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	ql((long long)0);
	cout << res;
	return 0;
}
