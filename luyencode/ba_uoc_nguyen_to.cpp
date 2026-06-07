#include<bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;
int prime[1000001];
vector <int> v;
void sang()
{
    for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
    prime[1] = prime[0] = 0;
    for(int i = 2 ; i <= 1000 ; ++i){
        if(prime[i])
        {
            for(int j = i * i ; j <= 1000000 ; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    for(int i = 2 ; i <= 1000000 ; ++i) if(prime[i]) v.push_back(i);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sang();
	int t; cin >> t;
	sort(v.begin(), v.end());
	while(t--){
        
    }
	return 0;
}
