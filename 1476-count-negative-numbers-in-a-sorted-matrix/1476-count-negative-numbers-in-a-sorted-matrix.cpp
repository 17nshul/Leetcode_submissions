class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int i=0;
        int j=n-1;
        int count=0;
        while(i<m && j>=0){
            if(grid[i][j]<0){
                count+=m-i;
                j--;
            }else{
                i++;
            }
        }
        return count;
    }
};