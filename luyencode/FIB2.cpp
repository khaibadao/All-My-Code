#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

string fi[51];
void sang(){
	fi[0] = "a";
	fi[1] = "b";
//	ba -> bab -> babba -> babbabab -> babbababbabba -> babba bab babba babba bab
	for(int i = 2 ; i < 50 ; ++i){
		string so = fi[i - 1] + fi[i - 2];
		fi[i] = so;
		if (Siz(fi[i]) > 18) break;
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sang();
    int t; cin >> t;
    while(t--){
    	long long n, k; cin >> n >> k;
    	string so = fi[n];
    	int cnt = 1;
    	for(long long i = 0 ; i < k ; ++i){
    		if(so[i] == 'a') ++cnt;
		}
		cout << cnt - 1 << '\n';
	}
    return 0;
}

