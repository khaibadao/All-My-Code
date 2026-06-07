#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

string tmp = "";
// mot xau tmp : ki tu cuoi len dau va xoa ki tu cuoi di
void doo(string s, long long k){
	string tmp = s;
	while(Siz(s) < k){
		tmp = tmp[Siz(s)] + tmp;
		tmp.pop_back();
		s += tmp;
	}
	cout << tmp[k];
}

int main() {
//	freopen("ucln.inp", "r", stdin);
//	freopen("ucln.out", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long k; cin >> k;
	stirng s; cin >> s;
	doo(s, k);
	return 0;
}

