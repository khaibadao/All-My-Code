#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

bool check(int n){
	int cnt = 0;
	for(int i = 1 ; i <= sqrt(n); ++i){
		if(n%i == 0){
			if(i != n/i) cnt += 2;
			else ++cnt;
		}
	}
	if(cnt == 9) return true;
	return false;
}

vector <int> a;
void doo()
{
	for(int i = 3; i <= 1000000 ; ++i){
		if(i%3 == 0 && check(i)){
			a.push_back(i);
		}
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    doo();
    int t; cin >> t;
    while(t--){
    	int l, r; cin >> l >> r;
    	auto it = lower_bound(a.begin(), a.end(), l);
    	auto at = upper_bound(a.begin(), a.end(), r);
    	cout << distance(it, at) << en;
	}
    return 0;
}

