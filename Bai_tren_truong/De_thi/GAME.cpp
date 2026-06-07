#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int prime[3000];
void sang()
{
	for(int i = 0 ; i <= 2000; ++i){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2 ; i <= sqrt(3000); ++i){
		if(prime[i]){
			for(int j = i * i ; j <= 3000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}

bool check(int a, int b, int c, int d){
	for(int i = a ; i <= b ; ++i){
		bool kt = false;
		for(int j = c ; j <= d ; ++j){
			if(!prime[i + j]){
				kt = true;
			}
		}
		if(kt) return true; // tam thang
	}
	return false; // cam thang
}

int main() {
	freopen("GAME.INP", "r", stdin);
	freopen("GAME.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	sang();
	int t; cin >> t;
	while(t--){
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		(check(a, b, c, d)) ? cout << "Tam" << en : cout << "Cam" << en;
	}
	return 0;
}

