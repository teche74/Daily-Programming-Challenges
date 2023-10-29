int Solution::repeatedNumber(const vector<int> &A)
{
    //using sort
    sort(A.begin(), A.end());

    for(int i=1;i<A.size()-1;i++){
        if(A[i-1]==A[i]){
            return i;
        }
    }
    return -1;

    // using hashmap
    unordered_map<int,int> hash;
    
    for(int  i=0;i<A.size();i++){
        if(hash.find(A[i]) !=  hash.end()){
            return A[i];
        }
    }
    return -1;



    //Floyd aglo
    int slow = A[0];
    int fast = A[0];
    do
    {
        slow = A[slow];
        fast = A[A[fast]];
    } while (slow != fast);
    
    slow = A[0];
    while (slow != fast)
    {
        slow = A[slow];
        fast = A[fast];
    }
    return slow;
}
