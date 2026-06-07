#include<bits/stdc++.h>
#define Siz(x) x.size()

int check(int n){
	int ans = 1;
	if(n == 3) return ans;
	for(int i = 3 ; i <= sqrt(n) ; i += 2){
		if(n%i == 0) return n/i;
	}
	if(n != 1) return n; 
	return ans;
}

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int truy_van; cin >> truy_van;
	while(truy_van--){
		int n; cin >> n;
		int ans = check(n);
		cout << ans << '\n';
	}
	return 0;
}
