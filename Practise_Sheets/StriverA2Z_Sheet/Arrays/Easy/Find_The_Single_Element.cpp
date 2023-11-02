#include<vector>

int getSingleElement(vector<int> &arr){
	int size =arr.size()-1;
	int index =0;

	if(size == 1) return arr[0];

	while(index <=size){
		if(arr[index]!= arr[index+1]){
			return arr[index];
		}
		index=index+2;
	}

	return -1;

}
