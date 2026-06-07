#include <bits/stdc++.h>
#define Siz(s) s.size()

using namespace std;

int main() {
//	freopen("SumOfPrimes.inp", "r", stdin);
//	freopen("SumOfPrimes.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n; cin >> n;
    priority_queue <long> pee;
    while(n--){
    	char x; cin >> x;
    	if(x == '+' && Siz(pee) < 15000){
    		long so; cin >> so;
    		pee.push(so);
		}else
		{
			long ans = pee.top();
			pee.pop();
			while(!pee.empty() && ans == pee.top()){
				pee.pop();
			}
		}
	}
	cout << Siz(pee) << ' ';
	while(!pee.empty()){
		cout << pee.top() << ' ';
		pee.pop();
	}
    return 0;
}
