
vector<pair<int, int>> findPairs(Node* head, int k)
{
     Node *temp = head;
    Node * temp1 = head;
    while(temp1 -> next != NULL){
        temp1 = temp1 -> next;
    }
    vector<pair<int,int>>res;

    while(temp != temp1){
        int num1 = temp -> data;
        int num2 = temp1 -> data;

        if(num1 + num2 > k){
            temp1 = temp1 -> prev;
        } else {
            if(num1 + num2 == k){
                pair<int, int> p = {num1, num2};
                res.push_back(p);
            }
            temp = temp -> next; 
        }
    }
    return res;
}
