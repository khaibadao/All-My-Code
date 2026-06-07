#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int n, k;
long res = 0;
void doo(int sum){
	if(sum > n) return;
	if(sum == n){
		++res;
		return;
	}
	for(int i = 1 ; i <= k ; ++i){
		sum += i;
		doo(sum);
		sum -= i;
	}
}

int main() {
//	freopen("PICTURE.INP", "r", stdin);
//	freopen("PICTURE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	doo(0);
	cout << res;
	return 0;
}

