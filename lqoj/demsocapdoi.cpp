#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int x; cin >> x;
	long a[n + 1];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1; j < n ; j++){
			if(x - a[i] == a[j])
			   dem++;
		}
	}
	cout << dem << endl;
	return 0;
}
