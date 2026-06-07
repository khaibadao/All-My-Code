#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long x, y; cin >> x >> y;
	long long sum = 0;
	for(int i = 1 ; i <= x; ++i){
		while(x%i == 0 && y%i != 0){
			x /= i;
			sum += i;
		}
	}
	if(x != 1) sum += x;
	cout << sum;
	return 0;
}
