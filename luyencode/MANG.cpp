#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <int> a(n);
    int res = 0;
    int ans = INT_MIN;
    int le = 0, chan = 0, sum = 0;
    for(int i = 0 ; i < n ; ++i){
    	cin >> a[i];
    	(a[i] % 2 != 0) ? ++le : ++chan;
    	if(i + 1 > res && a[i] > 0){
    		res = i + 1;
    		ans = a[i];
		}
    	sum += a[i];
	}
	cout << sum << ' ' << chan << ' ' << ans;
    return 0;
}

