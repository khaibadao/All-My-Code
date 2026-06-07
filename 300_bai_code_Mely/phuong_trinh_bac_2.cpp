#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c;
    cin >> a >> b >> c;
    if(b%2 == 0){
    	b /= 2;
	    long long delta = (long long)b*b - a*c;
	    if(a == 0) cout << " Phuong trinh co nghiem";
	    else if(delta < 0) cout << "Phuong trinh vo nghiem";
	    else if(delta == 0) cout << " Phuong trinh co nghiem";
	    else cout << "Phuong trinh co 2 nghiem phan biet";
	}
    else
    {
//    	b /= 2;
	    long long delta = (long long)b*b - 4*a*c;
	    if(a == 0) cout << " Phuong trinh co nghiem";
	    else if(delta < 0) cout << "Phuong trinh vo nghiem";
	    else if(delta == 0) cout << " Phuong trinh co nghiem";
	    else cout << "Phuong trinh co 2 nghiem phan biet";
	}
    return 0;
}
