#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

vector <int> mu = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b; cin >> a >> b;
    int cnt = -1;
    int ans = 0;
    long long res = (long long)pow(2, mu[++cnt]) - 1;
    while(res < a) res = (long long)pow(2, mu[++cnt]) - 1;
    while(res <= b){
    	res = (long long)pow(2, mu[++cnt]) - 1;
    	++ans;
	}
	if(res == b) ++ans;
	cout << ans;
    return 0;
}
