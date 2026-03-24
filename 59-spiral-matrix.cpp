class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n, 0));
        int srow=0, scol=0, ecol=n-1, erow=n-1, q=1;
        while (srow<=erow && scol<=ecol){
            for (int i=scol; i<=ecol; i++)
                v[srow][i]=q++;
            for (int j=srow+1; j<=erow; j++)
                v[j][ecol]=q++;
            for (int i=ecol-1; i>=scol; i--)
                v[erow][i]=q++;
            for (int j=erow-1; j>srow; j--)
                v[j][scol]=q++;
            srow++; scol++; ecol--; erow--;
        }
        return v;
    }
};