#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

int main() {
	freopen("INSUL.INP", "r", stdin);
	freopen("INSUL.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	vector <int> a(n);
	long long sum = 0;
	for(int &x : a){
		cin >> x;
		sum += x;
	}
	sort(a.begin(), a.end());
	vector <int> b;
	for(int i = 0 ; i < n/2 ; ++i){
		b.push_back(a[i]);
		b.push_back(a[n - (i + 1)]);
	}
	for(int i = 1 ; i < Siz(b) ; ++i){
		sum += max(0, b[i] - b[i - 1]);
	}
	cout << sum;
	return 0;
}

