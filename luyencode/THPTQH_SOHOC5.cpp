#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;


int main() {
	freopen("sdb.inp", "r", stdin);
	freopen("sdb.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> so = {36, 225, 441, 1089, 1521, 2601, 3249, 4761, 6561, 7569, 
                           8649, 12321, 15129, 16641, 19881, 25281, 31329, 33489, 
                           40401, 45369, 47961, 56169, 62001, 71289, 84681, 91809, 
                           95481, 103041, 106929, 114921, 145161, 154449, 168921, 
                           173889, 199809, 205209, 221841, 239121, 251001, 269361, 
                           288369, 294849, 328329, 335241, 349281, 356409, 400689, 
                           447561, 463761, 471969, 488601, 514089, 522729, 567009, 
                           594441, 622521, 651249, 660969, 690561, 710649, 720801, 
                           772641, 848241, 870489, 881721, 904401, 986049};
    int t; cin >> t;
    while(t--){
    	int a, b; cin >> a >> b;
    	auto it = lower_bound(so.begin(), so.end(), a);
    	auto at = upper_bound(so.begin(), so.end(), b);
    	cout << distance(it, at) << '\n';
	}
    return 0;
}
