#include<bits/stdc++.h>
using namespace std;
bool check(long n){
	if(n <= 1) return false;
	if(n <= 3) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
int main(){
	freopen("BEAUTY.INP", "r", stdin);
	freopen("BEAUTY.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int so = 0;
	long long count = 10;
	while(so < n){
		int res = count;
		long sum = 0;
		while(res > 0){
			int tmp = (res%10);
			sum += tmp*tmp;
			res /= 10;
		}
		if(check(sum)){
			++so;
		}
		++count;
	}
	cout << count - 1;
	return 0;
}
