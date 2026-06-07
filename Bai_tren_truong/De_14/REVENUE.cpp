#include <bits/stdc++.h>
#define MOD 1000000007
#define Mod7 1000000006
#define en '\n'
#define Siz(s) s.size()
#define wel 1005

using namespace std;

void doo(long long x, long long y, long long n){
	long long sum = 0;
	long long tuan = n/7, du = n%7;
	long long tien_le = tuan*2*y, tien_thuong = tuan*5*x;
	sum += tien_le + tien_thuong;
	if(du){
		sum += y;
		--du;
		sum += du*x;
	}
	cout << sum;
}

int main() {
	freopen("REVENUE.INP", "r", stdin);
	freopen("REVENUE.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long x, y, n;
	cin >> x >> y >> n;
	doo(x, y, n);
	return 0;
}

