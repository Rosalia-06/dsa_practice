class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        vector<int> v(matrix.size()*matrix[0].size());
        int srow=0, scol=0, ecol=matrix[0].size()-1, erow=matrix.size()-1, k=0;
        while(srow<=erow && scol<=ecol){
            for (int i=scol; i<=ecol; i++)
                v[k++]=matrix[srow][i];
            for (int j=srow+1; j<=erow; j++)
                v[k++]=matrix[j][ecol];
            for (int i=ecol-1; i>=scol; i--){
                if (srow==erow) break;
                v[k++]=matrix[erow][i];
            }
            for (int j=erow-1; j>srow; j--){
                if (scol==ecol) break;
                v[k++]=matrix[j][scol];
            }
            srow++; scol++; ecol--; erow--;
        }
        return v;
    }
};