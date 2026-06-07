#include<bits/stdc++.h>
using namespace std;
long long prime[1000000];
void kt(){
	for(int i = 1 ; i <= 1000000 ; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000 ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	int n; cin >> n;
	kt();
	while(n--){
		long long a; cin >> a;
		long can = sqrt(a);
		int dem = 0;
		if(can*can != a || prime[can] == 0){
			cout << "NO" << endl;
		}else if(can * can == a && prime[can])
		{
			cout << "YES" << endl;
		}
//		int dem = 0;
//		long can = sqrt(a);
//		if(can * can != a && prime[a] == 0){
//			cout << "NO" << endl;
//		}else if(check(a)){
//			cout << "NO" << endl;
//		}else
//		    cout << "YES" << endl;
	}
	return 0;
}
