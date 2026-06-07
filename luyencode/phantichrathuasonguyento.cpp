#include<bits/stdc++.h>
using namespace std;
void pt(long long n){
	long long n1 = n;
	int dem = 0;
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n%i == 0){
			dem++;		
			while(n%i == 0){
				n /= i;
			}	
		}
	}
	if(n != 1){
		dem++;
    }
    cout << dem << endl;
    for(int i = 2 ; i <= sqrt(n1); i++){
    	if(n1%i == 0){
    		int cnt = 0;
    		while(n1%i == 0){
    			cnt++;
    			n1 /= i;
			}
			cout << i << " " << cnt << endl;
		}
	}
	if(n1 != 1){
		cout << n1 << " " << 1;
	}
}
int main()
{
	long long n; cin >> n;
	pt(n);
	return 0;
}
