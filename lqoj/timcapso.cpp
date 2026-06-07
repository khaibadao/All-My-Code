#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long x; cin >> x;
	long a[n + 1] = {0};
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	long long sum = 0;
	int dem = 0;
	for(int i = 1 ; i <= n ; i++){
		for(int j = i + 1 ; j <= n ; j++){
			sum = a[i];
			sum += a[j];
			if(sum == x){
				cout << i << " " << j;
				return 0;
			}else
			{
				dem += 1;
			}
		}
	}
	if(dem){
		cout <<  "No solution";
	}
	return 0;
}
