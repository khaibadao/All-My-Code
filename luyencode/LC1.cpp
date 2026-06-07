#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n; cin >> n;
    stack <int> st;
    if(n%2 == 0){
    	cout << 1 << ' ' << 3 << ' ' <<  n - 1 - 3;
	}else
	{
		if(n == 5) cout << "0 2 3";
		else
		{
			cout << 2 << ' ' << 4 << ' ';
			cout << n - 2 - 4;
		}
	}
//    neu so chan tru 1
//    neu so le tru 2

    return 0;
}
