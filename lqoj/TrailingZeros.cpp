#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n; cin >> n;
    int cnt = 0;
    for(long i = 5 ; i <= n ; i *= 5){
    	cnt += n/i;
	}
	cout << cnt;
    return 0;
}

