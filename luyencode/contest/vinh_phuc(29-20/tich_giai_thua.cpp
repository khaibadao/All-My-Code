#include<bits/stdc++.h>
using namespace std;
int check(long long n){
	for(long long i = 2 ; i <= sqrt(n); ++i){
		if(n%i == 0) return 0;
	}
	return 1;
}
int checkTO(long long n){
	int checkT = 0;
	if(n%2 != 0) return 0;
//	cout << n << "()" << ' ';
//4
//31987392
//24524300
//2453000000
//24334142
    int ary = 0;
	while(n > 1 && checkT == 0){
		
		for(int i = 2 ; i <= 1000000 ; ++i){
	     	if(n%i == 0){
	     		n /= i;
	     		cout << i << ' ';
			 } 
     		else{
     			if(check(n) && n%2 != 0 || n%5 == 0 && n%2 != 0){
     				checkT = 1;
     		    	break;
				}else break;
			}
    	}
    	cout << endl;
//    	cout << 1 << '\n';
	}
//	cout << n << " " << ary << '\n';
	if(n == 1 || n == 2) return 1;
	return 0;
}
int main(){
//	freopen("PROFACT.inp", "r", stdin);
//	freopen("PROFACT.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		long long x; cin >> x;
		int t = check(x);
		checkTO(x); 
//		cout << '\n';
//		if(checkTO(x)) cout << "YES" << '\n';
//		else cout << "NO" << '\n';
	}
	return 0;
}
