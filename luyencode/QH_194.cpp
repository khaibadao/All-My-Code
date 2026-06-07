#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

long countDigits(long n) {
    long digits = 0;
    long length = 1;
    long long start = 1;

    while (start <= n) {
        long long end = start * 10 - 1;
        if (end > n) end = n;
        digits += (end - start + 1) * length;
        start *= 10;
        ++length;
    }

    return digits;
}

int main()
{
    freopen("CHARNUM.INP", "r", stdin);
	freopen("CHARNUM.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long n; cin >> n;
	cout << countDigits(n);
	return 0;
}

