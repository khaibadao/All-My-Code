#include <bits/stdc++.h>
#define haha 1000001
using namespace std;

int n, S;
long long res = 0;

long w[haha], v[haha];

void ql(long long sumA, long long sumB, int pos){
	if(sumA > S) return;
	res = max(res, sumB);
	for(int i = pos; i < n ; ++i){
		sumA += w[i];
		sumB += v[i];
		ql(sumA, sumB, i + 1);
		sumA -= w[i];
		sumB -= v[i];
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> S;
    for(int i = 0 ; i < n ; ++i){
    	cin >> w[i] >> v[i];
	}
	ql(0, 0, 0);
	cout << res;
    return 0;
}
