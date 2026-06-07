#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

vector <long long> gt(20);
unordered_map <long long, int> ma;
void sang(){
	gt[0] = 1;
	for(int i = 1 ; i <= 19 ; ++i){
		gt[i] = i * gt[i - 1];
		++ma[gt[i]];
	}
}
int main() {
//	freopen("countdiv.inp", "r", stdin);
//	freopen("countdiv.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    sang();
    while(t--){
    	long long n; cin >> n;
    	auto it = lower_bound(gt.begin(), gt.end(), n);
    	int res = distance(gt.begin(), it);
    	bool check = false;
    	for(int i = 1 ; i < res - 1; ++i){
    		for(int j = i + 1 ; j < res ; ++j){
    			for(int z = j + 1; z <= res; ++z){
    				if(gt[i] + gt[j] + gt[z] == n){
    					check = true;
					}
				}if(check) break;
			}
			if(check) break;
		}
		cout << check << '\n';
	}
    return 0;
}

