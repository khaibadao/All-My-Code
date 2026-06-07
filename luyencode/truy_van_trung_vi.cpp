#include<bits/stdc++.h>
#define Siz(n) n.size()

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n, m; cin >> n >> m;
	vector <long> a(0);
	a.push_back(0);
	for(int i = 0 ; i < n ; ++i){
		int x; cin >> x;
		a.push_back(x);
	}
	queue <long> qe;
	while(Siz(qe) != m){
		long t = a.size()/2;
		qe.push(a[t]);
		a.erase(a.begin() + t);
	}
	while(!qe.empty()){
		cout << qe.front() << ' ';
		qe.pop(); 
	}
	return 0;
}
