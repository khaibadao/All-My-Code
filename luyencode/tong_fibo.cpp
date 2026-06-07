#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

vector <long long> fi(90);
void sang()
{
	fi[0] = 1;
	fi[1] = 1;
	for(int i = 2 ; i < 91 ; ++i){
		fi[i] = fi[i - 1] + fi[i - 2];
	}
}
int main() {
//	freopen("fibonaci.inp", "r", stdin);
//	freopen("fibonaci.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sang();
    long n; cin >> n;
    auto it = lower_bound(fi.begin(), fi.end(), n);
    int res = distance(fi.begin(), it);
    int count = 0;
    for(int i = res - 1 ; i >= 1 ; i--){
    	while(n >= fi[i] && n > 0){
    		n -= fi[i];
    		cout << fi[i] << '\n';
		}
	}
    return 0;
}

