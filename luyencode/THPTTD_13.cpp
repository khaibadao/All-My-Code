#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int prime[10000001];
void sang()
{
	for(int i = 0 ; i <= 10000000 ; ++i) prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2; i <= sqrt(10000000) ; ++i){
		if(prime[i]){
			for(int j = i*i ; j <= 10000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main() {
	freopen("BAUOC.INP", "r", stdin);
	freopen("BAUOC.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    long long n; cin >> n;
    long long res = 0;
    long pri = 2;
    long count = 0;
    while(res <= n){
    	if(prime[pri]){
    		++count;
    		res = pri*pri;
		}
		++pri;
	}
	cout << count - 1;
    return 0;
}

