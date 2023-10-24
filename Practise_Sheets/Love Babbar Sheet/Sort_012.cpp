class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // define 3 variables for count 0,1 and 2.
        int c_z=0,c_o=0,c_t=0;
        
        // looping entire array to get frequency of 0,1 and 2.
        for(int i=0;i<n;i++){

            // update counters for each hit.
            if(a[i] ==0 ) c_z++; 
            else if(a[i] ==1) c_o++;
            else c_t++;
        }
        
        // Reformat entire array based on counters. 
        for(int i=0;i<n;i++){
            if(c_z!=0){
                a[i] =0;
                c_z--;
            }
            else if(c_o!=0){
                a[i]=1;
                c_o--;
            }
            else{
                a[i]=2;
            }
        }
    }
    
};