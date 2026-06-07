#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int bs(int a){
	return abs(a);
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n; cin >> n;
    int a[n][3];
    for(int i = 0 ; i < n ; ++i){
    	for(int j = 0 ; j < 3 ; ++j){
    		cin >> a[i][j];
		}
	}
	for(int i = 0 ; i < n ; ++i){
		long long res = INT_MAX;
		int b1 = bs(a[i][0] - a[i][0]) + bs(a[i][1] - a[i][0]) + bs(a[i][2] - a[i][0]);
		int b2 = bs(a[i][0] - a[i][1]) + bs(a[i][1] - a[i][1]) + bs(a[i][2] - a[i][1]);
		int b3 = bs(a[i][0] - a[i][2]) + bs(a[i][1] - a[i][2]) + bs(a[i][2] - a[i][2]);
		res = min(b1, min(b2, b3));
		cout << res << '\n';
//		a[i][2]
	}
    return 0;
}

