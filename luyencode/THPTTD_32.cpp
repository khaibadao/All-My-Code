#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
vector <int> v(1000001);
void sang() {
    for (int i = 1; i <= 1000000; ++i) v[i] = 1; 
    for (int i = 2; i <= 1000000; ++i) {
        for (int j = i; j <= 1000000; j += i) {
            ++v[j];  
        }
    }
}
int main() {
	freopen("GCDAB.INP", "r", stdin);
	freopen("GCDAB.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    int n; cin >> n;
    long long res = 0;
    while(n){
    	res += v[n];
    	--n;
    }
    cout << res;
    return 0;
}

