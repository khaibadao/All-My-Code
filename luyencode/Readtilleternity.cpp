#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	while(cin >> n){
		if(!n) break;
		cout << (long long)n*n*n*n*n << '\n';
	}
	return 0;
}
