#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

int main() {
	freopen("GROUP3.INP", "r", stdin);
	freopen("GROUP3.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <long> a(n);
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
	}
	long long sum = 0;
	int count = 1;
	queue <long> qe;
	for(int i = 0 ; i < 3 ; ++i){
		qe.push(a[i]);
		sum += a[i];
	}
	long long res = sum;
	for(int i = 3 ; i < n ; ++i){
		long long tmp = sum - qe.front();
		qe.pop();
		tmp += a[i];
		qe.push(a[i]);
		if(res == tmp) ++count;
		else{
			if(tmp > res){
				res = tmp;
				count = 1;
			}
		}
		sum = tmp;
	}
	cout << res << ' ' << count;
    return 0;
}
