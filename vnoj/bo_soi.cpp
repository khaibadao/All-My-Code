#include<bits/stdc++.h>
using namespace std;
long long mang[31][31];
void sang()
{
	mang[1][1] = mang[1][2] = 1;
	long long sum = 1;
	for(int i = 3 ; i <= 30 ; ++i){
		sum *= 2;
		mang[1][i] = sum;
	}
	for(int i = 2 ; i <= 30 ; ++i){
		for(int j = 1 ; j <= 30 ; ++j){
			if(j == 1){
				mang[i][j] = i;
			}else if(j == 2){
				mang[i][j] = i + mang[i][j - 1];
			}else
			{
				long long sum = 0;
				for(int t = 2 ; t < j; ++t){
					sum += mang[i][t];
				}
				mang[i][j] = sum + mang[i - 1][j];
			}
//			cout << sum << " ";
		}
//		cout << endl;
	}
	for(int i = 1 ; i <= 10 ; ++i){
		for(int j = 1 ; j <= 10 ; ++j){
			if(j == 1 || j == 2) mang[i][j] = i;
		}
	}
}
int main()
{
	memset(mang, 0, sizeof(mang));
	sang();
	int n, k, m;
	cin >> n >> k >> m;
	cout << mang[k][m];
	return 0;
}
