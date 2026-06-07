#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(cin >> n){
		if(n == 0) break;
		else
		{
			int a[n + 1];
			stack <int> st;
			for(int i = 0 ; i < n ; ++i) cin >> a[i];
			vector <int> pa(0);
			int pha = 1;
			for(int i = 0 ; i < n ; ++i){
				if(st.empty()) st.push(i);
				else
				{
//					cout << a[st.top()] << '\n';
					if(a[st.top()] <= a[i]){
						cout << "no" << '\n';
						break;
						pha = 0;
					}else
					{
						if(a[st.top()] == a[i] + 1){
							st.push(i);
						}else pa.push_back(a[i]);
					}
				}
			}
			if(!pha) break;
			else
			{
				cout << 1 << '\n';
				int check = pa[pa.size() - 1];
	//			check pa[i]
				for(int i = 0 ; i < pa.size() - 1 ; ++i){
					if(pa[i] == pa[i + 1] - 1){
						cout << "no" << ' ';
						pha = 0;
						break;
					}
				}
				if(pha){
					if(a[st.top()] - 1 == check){
						cout << "yes" << '\n';
					}else cout << "no" << '\n';
				}
			}
		}
	}
	return 0;
}
