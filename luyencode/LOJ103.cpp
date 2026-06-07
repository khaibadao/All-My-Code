#include <bits/stdc++.h>
// #define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005
#define pb push_back
#define mang 1000001


using namespace std;

typedef unordered_map<long long, long long> unmap;

const int base = 41;
// const long MOD = 1000000007;
const long long MOD = 1000000007;


long long hashA[mang], POW[mang];

long long get(int i, int j){
	return (hashA[j] - hashA[i - 1] * POW[j - i  + 1] + MOD * MOD)%MOD;
}

int main() {
	//freopen("", "r", stdin); 
	//freopen("", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string a, b;
	cin >> a >> b;

	int lena = Siz(a), lenb = Siz(b);

	a = '%' + a;
	b = '#' + b;
	
	POW[0] = 1;
	for(int i = 1 ; i <= lena ; ++i){
		POW[i] = (POW[i - 1]*base)%MOD;
	}
	long long hashB = 0;
	for(int i = 1 ; i <= lenb ; ++i){
		hashB = (hashB*base + (b[i] - 'a' + 1))%MOD;
	}
	for(int i = 1 ; i <= lena ; ++i){
		hashA[i] = (hashA[i - 1]*base + (a[i] - 'a' + 1))%MOD;
	}

	int ans = 0;
	for(int i = 1 ; i <= lena - lenb + 1; ++i){
		if(get(i, i + lenb - 1) == hashB) ++ans;
	}
	cout << ans;
	return 0;
}