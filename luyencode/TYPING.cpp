#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Mod 1000000007
using namespace std;

unsigned long long gt(int r){
	long long res = 1;
	for(int i = 2 ; i <= r ; ++i) res *= i;
	return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    int n = Siz(s);
    unordered_map <char, int> maa;
    for(char x : s) ++maa[x];
    long long so_muoi = 1;
    long long so = 1;
    for(int i = 2 ; i <= n ; ++i){
    	(so *= i) %= Mod;
	}
	for(const auto &it : maa){
		(so_muoi *= gt(it.second)) %= Mod;
	}
	cout << (long long)so/so_muoi;
    return 0;
}

