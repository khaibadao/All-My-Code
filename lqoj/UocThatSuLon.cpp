#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	for(long i = 2 ; i <= sqrt(n) ; i++){
		if(n%i == 0)
		   return false;
	}
	return true;
}
int main()
{
	long long n; cin >> n;
	if(n%2 == 0){
    	cout << n/2;
    	return 0;
    }
   	if(check(n)){
        cout << 1;
        return 0;
    }
    int cnt = 0;
	for(int i = n - 1 ; i >= 2 ; i--){
		while(n%i == 0){
			n /= i;
			if(i > cnt)
		    	cnt = i;
        }
    }
    cout << cnt;
	return 0;
}
