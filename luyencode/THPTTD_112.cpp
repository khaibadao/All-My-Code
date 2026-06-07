#include <bits/stdc++.h>
#define en '\n'
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("average.inp", "r", stdin);
	freopen("average.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <long> a(n + 1);
    vector < pair <long long, int>> paa;
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    for(int i = 1 ; i <= n ; ++i){
    	int tmp = 0;
    	long long tong = 0;
    	double sum = 0;
    	for(int j = i ; j <= n ; ++j){
    		tong += a[j];
    	    double tmp2 = (double)tong / (j - i + 1);
    		++tmp;
    		if(tmp2 >= sum){
    			sum = tmp2;
			}else{
				--tmp;
				break;
			}
		}
		paa.push_back({sum, tmp});
	}
	sort(paa.begin(), paa.end());
	cout << paa[Siz(paa) - 1].second;
    return 0;
}

