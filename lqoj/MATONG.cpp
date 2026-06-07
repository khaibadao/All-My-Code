#include<bits/stdc++.h>
using namespace std;
int uoc(int n){
	int gia_tri = (int)sqrt(n);
	int sum = 0;
	for(int i = 1; i <= gia_tri; i++){
		if(n%i == 0){
			sum += 2;
		}
	}
	return sum;
}
int main(){
	int n; cin >> n;
	int a[n + 1];
	cout << endl;
	for(int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	long long cnt = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] != 0){
	    	int uoc_so = uoc(a[i]);
		    cnt += a[i] * uoc_so;
    	}else
        	cnt += 0;
    }
	cout << sum << endl;
	return 0;
}
