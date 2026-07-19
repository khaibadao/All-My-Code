#include <stdio.h>

int main()
{
	int t = 5;
	while(t--){
		char ten[100];
		fgets(ten, sizeof(ten), stdin);
		int check_trong = 0, tu = 0;
		for(int i = 0 ; ten[i] != '\0' ; ++i){
			if(('a' <= ten[i] && ten[i] <= 'z') || ('A' <= ten[i] && ten[i] <= 'Z')){
				if(!check_trong){
					++tu;
					check_trong = 1;
				}
			}else check_trong = 0;
		}
		printf("Ten: %s", ten);
		printf("--> Co so luong tu la: %d\n", tu);
	}
	return 0;
}