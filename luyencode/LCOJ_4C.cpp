#include <bits/stdc++.h>
#define Siz(s) s.size()
#define Max_value 1000000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    vector< vector <int>> a(n, vector<int>(m));
    for(int i = 0 ; i < n ; ++i){
    	for(int j = 0 ; j < m ; ++j){
    		cin >> a[i][j];
		}
	}
//	cout << i << ' ' << j << '\n';
	int count = 0;
	for(int i = 0 ; i < n ; ++i){
		long long sum = 0;
    	for(int j = 0 ; j < m ; ++j){
    		long long sum = 0;
    		if(i > 0 && i < n - 1 && j > 0 && j < m - 1){
//    			cout << i << ' ' << j << "(concac)" << '\n';
    			sum += a[i + 1][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1];
//    			cout << i + 1 << ' ' << j + 1 << ' ' << sum << "(bomay)" << '\n';
    			if(sum/4 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << ' ' << "reammm" << '\n';
					++count;
				}
			}else
			{
	    		if(i == 0 && j == 0){
	    			sum += a[i + 1][j] + a[i][j + 1];
	         		if(sum/2 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
			     		++count;
			    	}
				}else if(i == n - 1 && j == 0){
					sum += a[i - 1][j] + a[i][j + 1];
			    	if(sum/2 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
				    	++count;
			    	}  
				}else if(i == 0 && j == m - 1){
					sum += a[i][j - 1] + a[i + 1][j];
			    	if(sum/2 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
			    		++count;
			    	}
				}else if(i == n - 1 && j == m - 1){
					sum += a[i - 1][j] + a[i][j - 1];
	     			if(sum/2 < a[i][j]){
//    	  			cout << i + 1 << ' ' << j + 1 << '\n';
		    			++count;
			    	}
				}else if(i == 0 && j > 0 && j < m - 1){
					sum += a[i][j - 1] + a[i + 1][j] + a[i][j + 1];
		    		if(sum/3 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
		    			++count;
			    	}
				}else if(i == n - 1 && j > 0 && j < m - 1){
					sum += a[i][j - 1] + a[i - 1][j] + a[i][j + 1];
	     			if(sum/3 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
	     				++count;
			    	}
				}else if(j == 0 && i > 0 && i < n - 1){
	  				sum += a[i + 1][j] + a[i - 1][j] + a[i][j + 1];
	    			if(sum/3 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
		    			++count;
			    	}
				}else if(j == m - 1 && i > 0 && i < n - 1){
					sum += a[i + 1][j] + a[i - 1][j] + a[i][j - 1];
	     			if(sum/3 < a[i][j]){
//    				cout << i + 1 << ' ' << j + 1 << '\n';
		    			++count;
			    	}
				}
			}
		}
	}
	cout << count << '\n';
    return 0;
}

