#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

bool check(long n){
	if(n < 2) return false;
	if(n < 4) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i * i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return false;
	}
	return true;
}
vector <long long> fi(50);
void sang()
{
	fi[0] = 1;
	fi[1] = 1;
	for(int i = 2 ; i <= 50  ; ++i){
		fi[i] = fi[i - 1] + fi[i - 2];
	}
}
int main() {
	freopen("fibo.inp", "r", stdin);
	freopen("fibo.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sang();
    long n, m; cin >> n >> m;
    auto it = lower_bound(fi.begin(), fi.end(), n);
    int res = it - fi.begin();
    int count = 0;
    for(int i = res ; i <= 50 ; ++i){
    	if(fi[i] <= m && check(fi[i])){
    		++count;
		}
    	else if(fi[i] > m) break;
	}
	cout << count;
    return 0;
}
