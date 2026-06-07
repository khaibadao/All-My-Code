#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t = 2;
	while(t--){
		long long sum = 0;
		long long n, k; cin >> n >> k;
	    for(long long i = 1 ; i <= n ; ++i){
		    sum += i;
    	    if(sum%k == 0){
    	    	cout << sum << '\n';
    	    	break;
			} 
     	}
	}
	return 0;
}
