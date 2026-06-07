#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k; cin >> n >> k;
	cout << (n + (n/k)) + (n%k);
	return 0;
}
