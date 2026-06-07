void sang(){
	for(int i = 0 ; i <= 1000000 ; ++i) prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(int i = 2; i <= 1000 ; ++i){
		if(prime[i]){
			for(int j = i * i ; j <= 1000000 ; j += i){
				prime[j] = 0;
			}
		}
	}
}
