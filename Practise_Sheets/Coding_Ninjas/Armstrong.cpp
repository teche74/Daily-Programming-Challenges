bool checkArmstrong(int n){

	if(n < 10) return n;
	vector<int>res;
	int temp=n;
	int count=0;

	while(n > 0){
		res.push_back(n%10);
		count++;
		n/=10;
	}

	int sum=0;

	for(int x : res){
		sum+=pow(x,count); 
	}

	return sum == temp;
}
