#include<bits/stdc++.h>
using namespace std;
long long prime[1000001];
void st(){
	for(int i = 0 ; i <= 1000000 ; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= 1000 ; i++){
		if(prime[i]){
			for(int j = i * i ; j <= 1000000 ; j += i){                
				prime[j] = 0;
			}
		}
	}
}
int main(){
	st();
	int cnt = 0;
	long a, b;
	cin >> a >> b;
	long B = b, A = a;
	while(b >= a){
		long long sum = 0;
		while(B > 0){
			long gia_tri = B % 10;
			sum += gia_tri * gia_tri;
			B /= 10;
			cout << sum << " ";
		}
//		if(prime[sum]){
//		  cnt++;
//		  cout << sum << " ";
//    	}
		b--;
		B = b;
	}
	cout << cnt;
    return 0;
}
// bai nay can phai kiem tra 2 van de do la tong cac chu so 
// co phai la so nguyen to hay ko
// thu 2 la kt tong binh phuong cac so do co phai la so nguyen to
// hay ko
// met lol
