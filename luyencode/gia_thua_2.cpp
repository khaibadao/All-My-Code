#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
void sang()
{
	a[0] = 0;
	a[1] = 1;
	for(int i = 2 ; i <= 1000 ; ++i){
		a[i] = a[i - 1] * i;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int truy_van; cin >> truy_van;
	while(truy_van--){
		int n; cin >> n;
		cout << a[n] << '\n';
	}
	return 0;
}
