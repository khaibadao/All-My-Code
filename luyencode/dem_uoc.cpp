#include<bits/stdc++.h>
using namespace std;
void tach(int a){
	int ans = 0;
	for(int i = 1 ; i <= sqrt(a) ; ++i){
		if(a%i == 0){
			if(i != a/i) ans += 2;
			else ++ans;
		}
	}
	cout << ans;
}
int main(){
	int a; cin >> a;
	tach(abs(a));
	return 0;
}
