#include<bits/stdc++.h>
using namespace std;
long long tong(int n){
	long long sum = 0;
	for(int i = 1 ; i <= sqrt(n); ++i){
		if(n%i == 0){
			if(i != n/i){
				sum += i + n/i;
			}else sum += i;
		}
	}
	return sum - n;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, r; cin >> l >> r;
	int dem = 0;
	for(int i = l ; i <= r ; ++i){
		long long ans = tong(i);
		if(ans > i) ++dem;
//		if(so >)
	}
	cout << dem;
	return 0;
}
