#include<bits/stdc++.h>
using namespace std;

void so_lon(int n){
	if(n%2 == 0){
		while(n -= 2) cout << 1;
	}else
	{
		cout << 7;
		n -= 2;
		while(n -= 2) cout << 1;
	}
}

int n, x[1001];
long long res = INT_MAX;

void so_be(){
	for(int i = 1 ; i <= n ; ++i){
		xau += x[i] + '0';
	}
	long long ans = stoll(xau);
	res = min(res, ans);
}

void Try(int i){
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	return 0;
}
