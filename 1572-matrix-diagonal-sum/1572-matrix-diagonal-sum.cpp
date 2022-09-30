class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size()-1,sum=0,h=n/2;
        for(int i=0;i<=n;i++)
        {
            sum += mat[i][i] + mat[i][n-i];
        }
        (n%2==0)? sum-=mat[h][h]:0;
        
        return sum;
    }
};