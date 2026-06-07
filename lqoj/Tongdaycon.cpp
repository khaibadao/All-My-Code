#include<bits/stdc++.h>
using namespace std;
int main()
{
	long x, k, vi_tri;
	cin >> x >> k >> vi_tri;
	int prefix[vi_tri + 1] = {0};
	vector<int> d(0);
	d.push_back(1);
	long long c = 0;
    for(int i = 0 ; i < vi_tri ; i++){
    	c += k;
    	while(c >= 100){
    		c %= 100;
		}
		d.push_back(c + x);
	}
	for(int i = 0 ; i < vi_tri ; i++){
		prefix[i] = prefix[i - 1] + d[i];
		cout << prefix[i] << endl;
	}
//	cout << prefix[vi_tri - 1];
	return 0;
}
