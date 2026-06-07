#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	int x; cin >> x;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int dem = 0;
	bool check = true;
	for(int i = 1 ; i <= n ; i++){
		while(a[i] < a[n]){
			a[i] += x;
			dem++;
			if(a[i] == a[n]){
				break;
			}else if(a[i] > a[n])
			{
				check = false;
				break;
			}
		}
		if(check == false){
			cout << -1;
			return 0;
		}
	}
	cout << dem;
	return 0;
}
