#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

void x_ly(int n){
	int count = 1;
	queue <int> qe;
	for(int i = 2 ; i <= sqrt(n); ++i){
		if(n%i == 0){
		int res = 0;
			while(n%i == 0){
				qe.push(i);
				++res;
//				cout << n << '\n';
				n /= i;
			}
			count *= (res + 1);
		}
	}
	if(n != 1){
		qe.push(n);
		count *= 2;
	}
	cout << count << ' ';
	while(!qe.empty()){
		if(Siz(qe) > 1) cout << qe.front() << '*';
		else cout << qe.front();
		qe.pop();
	}
	cout << '\n';
}
int main() {
//	freopen("nto.inp", "r", stdin);
//	freopen("nto.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	if(n == 1) cout << 1 << ' ' << 0 << '\n';
    	else x_ly(n);
	}
    return 0;
}

