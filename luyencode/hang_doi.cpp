#include<bits/stdc++.h>
#define Md 1000000
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	queue <long> qe;
	while(t--){
		int truy_van; cin >> truy_van;
		if(truy_van == 1){
			long so; cin >> so;
			qe.push(so);
		}else if(truy_van == 2){
			if(!qe.empty()) qe.pop();
		}else if(truy_van == 3){
			if(qe.empty()) cout << "Empty!" << '\n';
			else cout << qe.front() << '\n';
		}
	}
	return 0;
}
