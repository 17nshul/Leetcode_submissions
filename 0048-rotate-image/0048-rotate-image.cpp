class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    ios::sync_with_stdio(0);
    cin.tie(0);
        //in-place
        //0,0 0,1 0,2       2,0 1,0 0,0
        //1,0 1,1 1,2       2,1 1,1 0,1
        //2,0 2,1 2,2       2,2 1,2 0,2
        //nth column become nth row
        //first take transpose
        //swap n[i][j] with n[j][i]
        //then vertical mirror
        // while(l<r)
        //swap[i][j] with [i][n-1-j]
        int row = matrix.size();
        int col = row;
        int n = matrix.size();
        cout<<" matrix size : "<<n;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        cout<<endl<<"transposed matrix is : "<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        //now vertical mirroring
        int l=0;
        int r = col;
        // while(l<=r){
        //     for(int i=0;i<row;i++){
        //         swap(matrix[i][l],matrix[i][r-1]);
        //     }
        //     l++;
        //     r--;
        // }
        for (int i = 0; i < n; ++i) {
            int l = 0;
            int r = n - 1;
            while (l < r) {
                swap(matrix[i][l], matrix[i][r]);
                l++;
                r--;
            }
        }

        cout<<endl<<"mirrored matrix is : "<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};