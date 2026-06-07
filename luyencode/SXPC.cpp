#include<bits/stdc++.h>
using namespace std;

long l = 1, r = 1;
void tach(long long n)
{
    for(int i = sqrt(n) ; i >= 1 ; i--){
        if(n%i == 0){
            r = n/i;
            l = i;
            break;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bigint n; cin >> n;
	return 0;
}
