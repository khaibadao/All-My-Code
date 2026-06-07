#include<bits/stdc++.h>
#define Siz(s) s.size()
#define haha 1000001
using namespace std;

int main(){
//	freopen("change.inp", "r", stdin);
//	freopen("change.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	long cnt = 0;
	long long res = n;
	while(res != 1){
		(res%2 == 0) ? res /= 2 : res = res * 3 + 1;
		++cnt;
	}
	cout << cnt;
	return 0;
}
