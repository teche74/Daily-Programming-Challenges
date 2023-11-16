void helper(int plates, int source, int aux, int dest, vector<vector<int>> &res ){
    if (plates == 1) {
        res.push_back({source, dest});
        return;
    }

    helper(plates-1,source, dest, aux, res );
    res.push_back({source, dest});
    helper(plates-1, aux, source, dest, res);
}

vector<vector<int>> towerOfHanoi(int n)
{
    int source =1, Aux =2, Dest =3;
    vector<vector<int>>res;

    helper(n, source, Aux, Dest, res);

    return res;

}
