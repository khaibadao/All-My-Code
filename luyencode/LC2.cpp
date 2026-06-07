#include <bits/stdc++.h>
#define Siz(s) s.size()
using namespace std;

vector <long long> fi(51);
void sang()
{
	fi[0] = 1;
	fi[1] = 1;
	for(int i = 2 ; i <= 50  ; ++i){
		fi[i] = fi[i - 1] + fi[i - 2];
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    fi.resize(51);
    sang();
    int n; cin >> n;
    int ans = n;
    bool check = true;
    auto it = lower_bound(fi.begin(), fi.end(), n);
	int res = distance(fi.begin(), it);
	long so = n;
	while(res--){
		stack <long> st;
		for(int i = res ; i >= 1 ; i--){
			if(fi[i] <= n){
				n -= fi[i];
				st.push(fi[i]);
			}
		}
		if(n == 0)
		{
			cout << Siz(st) << '\n';
			while(!st.empty()){
				cout << st.top() << ' ';
				st.pop();
			}
			break;
		}else n = so;
	}
    return 0;
}
