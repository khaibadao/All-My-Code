#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int a[4] = {0, 0 , 0, 0};
void tinh()
{
	cout << ((a[0] - 1) * a[0]/2) + (a[1]*a[2]);
}
int main(){
//	freopen("fgarden.inp", "r", stdin);
//	freopen("fgarden.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	for(int i = 0 ; i < n ; ++i){
		int x; cin >> x;
		++a[x%3];
	}
	tinh();
	return 0;
}
