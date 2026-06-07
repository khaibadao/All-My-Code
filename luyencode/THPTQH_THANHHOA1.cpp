#include<bits/stdc++.h>
#define Siz(s) s.size()
#define MAX 100100
using namespace std;

int main(){
//	freopen("BAI1.INP", "r", stdin);
//	freopen("BAI1.OUT", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int m, n, k, a, b, c;
	cin >> m >> n >> k >> a >> b >> c;
	
//	m - a : Joffrey Stannis
//	n - b : Robb
//	k - c : Stannis
    
    long J = m*a, R = n*b, S = k*c;
    long ans = 1;
    ans = max(J, max(R, S));
    if(ans == J) cout << "Joffrey Stannis" << ' ';
	if(ans == R) cout << "Robb" << ' ';
	if(ans == S) cout << "Stannis";
	return 0;
}
