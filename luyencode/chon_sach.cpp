#include<bits/stdc++.h>
using namespace std;
//void 
int main(){
    freopen("ChonSach.inp", "r", stdin);
	freopen("ChonSach.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long n; cin >> n;
	vector < pair <long, long>> pa(0);
	long ans = 0;
	for(int i = 0 ; i < n ; ++i){
		long x, y; cin >> x >> y;
		pa.push_back({x, y});
	}
	sort(pa.begin(), pa.end());
	int p = pa.size();
	long fir = pa[0].first, sec = pa[0].second;
	vector <pair <long, long>> v(0);
	v.push_back({pa[0].first, pa[0].second});
	int check = 0;
	for(int i = 1 ; i < p; ++i){
		if(pa[i].first > fir){
			if(pa[i].second > sec) v.push_back({pa[i].first, pa[i].second});
	    	fir = pa[i].first;
		    sec = pa[i].second;
		    check = 0;
		}else if(pa[i].first == fir && check == 0){
			fir = pa[i].first;
			sec = min(sec, pa[i].second)s;
			v.push_back({pa[i].first, pa[i].second});
			check = 1;
		}
	}
	cout << v.size();
	return 0;
}
