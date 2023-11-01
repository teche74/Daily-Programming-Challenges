/*
The batting lineup of the England cricket team for their match against New Zealand consists of 'N' players standing in a line. You have an array 'A' of length 'N' such that 'A[i]' represents the 'i'-th player's jersey number.
In one operation, you can swap any two adjacent players.
Return the minimum difference between the jersey numbers of
any two adjacent players after performing the operation any number of times.


Sample Input 1:-
2
3 
4 1 7
4
1 4 2 3

Sample Output 1:-
3
1

Explanation Of Sample Input 1:-
First test case:-
Here, the difference between the first and second jersey numbers is 3, which is the minimum possible.
Thus, the answer is '3'.


Second test case:-
Here, the difference between the third and fourth jersey numbers is 1, which is the minimum possible.
Thus, the answer is '1'.
Sample Input 2:-
2
2
4 6
5 
9 12 5 16 2
Sample Output 2:-
2
3

*/
int minDifference(vector<int> &a) {
    sort(a.begin(),a.end());

    int n =a.size();

    int diff , max_diff=INT_MAX;

    for(int i=0;i<n-1;i++){
        if(a[i] ==a[i+1]){
            return 0;
        }

        diff = a[i+1] -a[i];
        max_diff = diff < max_diff ? diff : max_diff;
    }
    return max_diff;
}
