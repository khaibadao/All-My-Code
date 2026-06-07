#include <bits/stdc++.h>
using namespace std;

int n, S;
vector<long long> a(n);
long long res = 0;

void ql(long long sum, int pos) {
    if(sum > S) return;
    res = max(res, sum);
    for(int i = pos ; i < n ; ++i){
    	sum += a[i];
    	ql(sum, i + 1);
    	sum -= a[i];
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> S;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ql(0, 0);
    cout << res << endl;
    return 0;
}

