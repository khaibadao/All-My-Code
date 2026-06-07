#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

vector < pair <int, int>> paa;
bool check = false;

bool check_dx(int l, int r, string s){
	while(l <= r){
		if(s[l] == s[r]){
			++l, --r;
		}else return false;
	}
	return true;
}

void dx(string s){
	for(int i = 0 ; i < Siz(s) - 1; ++i){
		for(int j = i + 1; j < Siz(s) ; ++j){
			if(check_dx(i, j, s)){
				pair<int, int> k = make_pair(i, j);
				paa.push_back(k);
			}
		}
	}
}

void doo(int i, int j, int k, string s){
	int ktt = i , ktp = Siz(s) - j - 1;
	(ktt + ktp != k) ? check = false : check = true;
}

void coutt(int i, int j, string s){
	for(int z = i ; z <= j ; ++z) cout << s[z];
}

int main() {
//	freopen("EraseChar.Inp", "r", stdin);
//	freopen("EraseChar.Out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, k; cin >> n >> k;
	string a; cin >> a;
	dx(a);
	for(int i = 0; i < Siz(paa) ; ++i){
		check = false;
		doo(paa[i].first, paa[i].second, k, a);
		if(check){
			return coutt(paa[i].first, paa[i].second, a), 0;
		}
	}
	cout << "No";
	return 0;
}

