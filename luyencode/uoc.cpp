#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long long res = 1;
    long long so = 2;
    long long count = n;
    while(n != 1){
    	long ans = so;
    	while(n%so == 0){
    		ans = so;
    		n /= so;
		}
		res *= so;
		++so;
	}
//	cout << n << ' ';
	if(res < count) cout << "YES";
	else cout << "NO";
    return 0;
}

