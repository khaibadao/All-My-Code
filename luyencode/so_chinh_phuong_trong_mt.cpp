#include<bits/stdc++.h>
int scp[100001];
void sang(){
	for(int i = 0 ; i <= 100000 ; ++i) scp[i] = 0;
	for(int i = 1 ; i*i <= 100000 ; ++i){
		scp[i*i] = 1;
	}
}
using namespace std;
int main()
{
//	sang();
	int n, m; cin >> n >> m;
	int a[n][m];
	set <int> st;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cin >> a[i][j];
			int x = sqrt(a[i][j]);
			if(x*x == a[i][j]){
				st.insert(a[i][j]);
			}
		}
	}
	if(!st.size()) cout << "NOT FOUND";
	else
	{
		for(auto it : st) cout << it << ' ';
	}
	return 0;
}
