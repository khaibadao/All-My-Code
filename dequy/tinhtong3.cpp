#include<bits/stdc++.h>
using namespace std;

// tao ra 2 ham chan va le:))
//int main()
//{
//	int n; cin >> n;
//	int sum = 0;
//	if(n&1){
//		for(int i = 1 ; i <= 3*n + 1; ++i){
//			if(i&1) sum += i;
//			else sum += i*(-1);
//		}
//     	cout << sum;
//	}else
//	{
//		for(int i = 1 ; i <= 3*n + 1; ++i){
//			if(i&1) sum += i;
//			else sum += i*(-1);
//		}
//		cout << sum ;
//	}
//	return 0;
//}
int tong(int n){
	if(n == 1) return 1;
	else
	{
		if(n&1)
	    	return n + tong(n - 1);
		else
	    	return n*(-1) + tong(n - 1);
	}
}
int main()
{
	
	int n; cin >> n;
	int sum = 3*n + 1;
	cout << tong(sum);
	return 0;
}
