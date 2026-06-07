#include<bits/stdc++.h>
using namespace std;
int dao_nguoi(int n){
	int kq = 0;
	while(n > 0){
		int temp = n %  10;
		kq = kq * 10 + temp;
		n /= 10;
	}
	return kq;
}
int main(){
	int dem = 0;
	int a, b; cin >> a >> b;
	for(int i = a ; i <= b ; i++){
		int fake = dao_nguoi(i);
	    if(__gcd(fake, i) == 1){
	   		dem++;
	    } 
    }
	cout << dem;
	return 0;
}
