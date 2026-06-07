#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c; cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0) return cout << "WOW", 0;
    else if(a == 0){
    	if(b == 0) return cout << "NO", 0;
        else return cout << fixed << setprecision(2) << (float)(c*-1)/b, 0;
	}
    else
    {
    	int delta = b*b - 4*a*c;
		if(delta > 0){
	    	double x1 = (double)-1 * ((b + sqrt(delta))/(2*a));
	    	double x2 = (double)-1 * ((b - sqrt(delta))/(2*a));
	    	if(x1 == x2) return cout <<  fixed << setprecision(2) << x1, 0;
	    	cout <<  fixed << setprecision(2) << min(x1, x2) << ' ';
	    	cout <<  fixed << setprecision(2) << max(x1, x2);
		}else if(delta == 0) return cout << fixed << setprecision(2) << (double)-1*b/(2*a), 0;
		else return cout << "NO", 0;
	}
    return 0;
}
