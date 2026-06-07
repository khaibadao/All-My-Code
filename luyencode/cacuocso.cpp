#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	if(abs(n)== 0) cout << "INF";
	else
	{
		for(int i = abs(n); i >= 1 ; i--){
	    	if(abs(n)%i == 0){
    			cout << i << " ";
    		}
    	}
	}
	return 0;
}
