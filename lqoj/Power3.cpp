#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	long long cnt = round(cbrt(n));
	if(cnt * cnt * cnt == n){
		return true;
	}else{
	return false;
		}
}
int main(){
	int n; cin >> n;
	while(n--){
		long long x; cin >> x;
		if(check(x))
		   cout << "YES" << endl;
		else
		   cout << "NO" << endl;
	}
	return 0;
}
