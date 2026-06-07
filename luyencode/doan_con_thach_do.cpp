#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n + 1];
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	long S; cin >> S;
	queue <int> qe;
	long sum = 0;
	int count = -1;
	for(int i = 0 ; i < n ; ++i){
		if(qe.empty()){
			qe.push(i);
			sum += a[i]; 
		}
		else
		{
			if(sum < S){
				sum += a[i];
				qe.push(i);
			}
			if(sum > S){
				while(!qe.empty() && sum > S){
					sum -= a[qe.front()];
			    	qe.pop();
				}
			}
			if(sum == S){
				int Siz = qe.size();
				count = max(count, Siz);
				sum -= a[qe.front()];
				qe.pop();
			}
		}
	}
	cout << count;
	return 0;
}
