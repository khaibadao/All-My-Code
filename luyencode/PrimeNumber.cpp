#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
 
bool nt(int n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5; i*i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	(nt(n)) ? cout << "YES" : cout << "NO";
	return 0;
}
