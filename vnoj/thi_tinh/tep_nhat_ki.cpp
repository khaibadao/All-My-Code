#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n; cin >> n;
	cin.ignore();
	string s; getline(cin, s);
	long long k; cin >> k;
	vector <long long> v;
	string xau = "";
	int check = 1;
	int size = s.size();
	for(int i = 0 ; i < size ; ++i){
		if('0' <= s[i] && s[i] <= '9' && s[i]) xau += s[i];
		else if(s[i] == '-' && '0' <= s[i + 1] && s[i + 1] <= '9') check = -1;
		else if(xau.size())
		{
			long long sum = stoll(xau);
			v.push_back(sum*check);
			check = 1;
			xau = "";
		}
	}
	if(xau.size()){
		long long sum = stoll(xau);
		v.push_back(sum*check); 
	}
	map <long long, int> mp;
	for(int i = 0 ; i < v.size() ; ++i) ++mp[v[i]];
	int cap = 0;
	long long x;
    for(int i = 0; i < v.size() ; ++i){
    	if(v[i]) x = k - v[i];
    	else x = k + v[i];
        if(x != v[i]){
            cap += mp[x];   
        }else cap += mp[x] - 1;
        --mp[v[i]];
    }
    cout << cap;
	return 0;
}
