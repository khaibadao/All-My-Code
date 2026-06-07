#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int prime[1000001];
void sang()
{
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= 1000; ++i){
    	if(prime[i]){
    		for(int j = i*i ; j <= 1000000 ; j += i){
    			prime[j] = 0;
    		}
    	}
    }
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	sang();
	int n; cin >> n;
	(prime[n]) ? cout << "YES" : cout << "NO";
	return 0;
}
