#include<bits/stdc++.h>
using namespace std;
int n; int a[n + 1];
void sinh(){
	int i = n - 1;
	while( i >= 1 && a[i] > a[i + 1]){
		i--;
	}
	if(i == 0) ok = 0;
	else
	{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while(l < r){
			swap(a[l], a[r]);
			++l, r--;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	while()
}
