#include<bits/stdc++.h>
using namespace std;
int n, a[1001];
bool check;
void sinh()
{
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) check = false;
	else a[i] = 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	memset(a, 0, sizeof(a));
	cin >> n;
	check = true;
	while(check){
		for(int i = 1 ; i <= n ; ++i) cout << a[i];
		cout << '\n';
		sinh();
	}
	return 0;
}
