#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; bool check = false;
	queue <int> qe;
	while(cin >> n){
		if(n == 0) break;
		else
		{
			if(n < 0){
				qe.push(n);
				check = true;
			}
		}
	}
	if(!check) cout << "NOT FOUND";
	else
	{
		while(!qe.empty()){
			cout << qe.front() << ' ';
			qe.pop();
		}
	}
	return 0;
}
