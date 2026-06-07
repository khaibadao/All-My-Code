#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n; cin >> n;
	long long sum = 1;
	for(long i = 0 ; i <= n ; i++){
	    sum += i;
		if(sum >= n){
			cout << i;
			break;
		}	
	}
	return 0;
}
