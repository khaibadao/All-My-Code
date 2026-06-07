#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long sum = 0;
	vector<int> cnt1;
	vector<int> cnt2;
	int t1 = 0, t2 = 2;
	for(int i = 1 ; i <= n ; i++){
		sum += i;
	}
	if(sum%2 != 0){
		cout << "NO" << endl;
		return 0;
	}else
	{
		cout << "YES" << endl;
		for(int i = 1 ; i <= n ; i++){
//			if(t1 != 2){
//				if(t1 <= 2 && t2 == 2){
//					if(t1 == 2){
//						t2 = 0;
//					}else
//					{
//		     			t1++;
//			     		cnt1.push_back(i);
//			     		cout << t1 << " " << t2 << endl;
//			     	}
//				}
//			}else 
//				{
//				if(t1 == 2 && t2 >= 0 ){
//					if(t2 == 2){
//						t1 = 0;
//					}else
//					{
//						t2++;
//						cnt2.push_back(i);
//						cout << t2 << " " << t1 << endl;
//					}
//				}
//			}
//		}
//	}
	cout << cnt1.size() << endl;
	for(int i = 0 ; i < cnt1.size() ; i++){
		cout << cnt1[i] << " ";
	}
	cout << endl;
	cout << cnt2.size() << endl;
	for(int i = 0 ; i < cnt2.size() ; i++){
		cout << cnt2[i] << " ";
	}
	return 0;
}
