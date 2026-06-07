#include<bits/stdc++.h>
using namespace std;
int check(char a[]){
	int l = 0 , r = strlen(a) - 1;
	while(l < r){
		if(a[l] != a[r]){
			return 0;
		}
	l++;
	r--;
	}
	return 1;
}
int main()
{
	int t; cin >> t;
	while(t--){
		char a[1000000];
		cin >> a;
		if(check(a)){
			cout << "YES" << endl;
		}else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
