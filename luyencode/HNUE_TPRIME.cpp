#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int prime[1000001];
vector <long long> a;

void sang()
{
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(long i = 2 ; i <= 1000 ; ++i){
		if(prime[i]){
			for(long j = i*i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
	for(int i = 2 ; i <= 1000000 ; ++i){
		if(prime[i]) a.push_back((long long)i*i);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    long long n; cin >> n;
    auto it = upper_bound(a.begin(), a.end(), (long long)n);
    cout << distance(a.begin(), it);
    return 0;
}

