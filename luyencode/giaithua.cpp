#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	long long t = 1;
	for(int i = 1 ; i <= n ; i++){
		t *= i;
	}
	cout << t;
	return 0;
}
