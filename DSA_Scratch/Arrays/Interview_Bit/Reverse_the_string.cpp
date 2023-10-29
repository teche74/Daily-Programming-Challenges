//Dont know Why this solution failed

void reverse(string * temp, int low, int high){
    string A = (*temp);
    while(low<high){
        char temp = A[low];
        A[low] = A[high];
        A[high] = temp;
        low++;
        high--; 
    } 
    (*temp) =A;
}

string Solution::solve(string A) {
    int len =A.length()-1;
    reverse(&A,0,len);
    
    int k=0;
    for(int i=0;i<=len;i++){
        if(i == len){
            reverse(&A,k,i);
            break;
        }
        if(A[i] == ' '){
            reverse(&A, k,i-1);
            k=i+1;
        }
        
    }
    
    return A;
}




// Another solution which works

string Solution::solve(string A) {    
      int n = A.length();
    
    string ans="";
    
    int i=n-1,j=n-1;
    
    for(int i=n-1;i>=0;--i){
        
        if(A[i]!=' '){
            int j=i;
            while(A[j]!=' '&&j>=0){
                j--;
            }
            ans+=A.substr(j+1,i-(j+1)+1);
            ans+=" ";
            i=j;
        }
        
    }

    if(ans.back()==' ') ans.pop_back();
    
    return ans;
}
