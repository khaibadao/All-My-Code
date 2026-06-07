#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;
	vector <long long> fi(81);
	fi[0] = fi[1] = 1;
	for(int i = 2 ; i <= n ; ++i) fi[i] = fi[i - 1] + fi[i - 2];
	cout << fi[n - 1];
	return 0;
}
