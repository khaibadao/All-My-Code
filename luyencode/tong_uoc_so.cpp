#include<bits/stdc++.h>
using namespace std;
void ANS(int n){
	long long sum = 0;
	for(int i = 1 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			if(i != n/i){
				sum += i + n/i;
			}else sum += i;
		}
	}
	cout << sum << '\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int res; cin >> res;
		ANS(res);
	}
	return 0;
}
