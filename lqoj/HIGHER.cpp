#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		long long x = a, y = b;
		int dem = 0;
		while(x <= y){
			dem++;
			x *= 3; 
			y*= 2;
		}
		cout << dem << endl;
	}
	return 0; 
}
