#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[0] == 1){
			if(a[i] == 1){
				dem += 1;
			}else
			{
				dem -= 1;
			}
		}
		else
		{
			if(a[i] == 2){
				dem += 1;
			}else
			{
				dem -= 1;
			}
		}
	}
	cout << dem << endl;
	return 0;
}
