class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        // Initialize visitation and height matrices
        vector<vector<int>> vis(m, vector<int>(n, 0));
        vector<vector<int>> hgt(m, vector<int>(n, 0));
        queue<pair<pair<int, int>, int>> q;

        // Add all water cells to the queue with height 0 and mark them as visited
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (isWater[i][j] == 1) {  // Water cell
                    q.push({{i, j}, 0});   // Push coordinates and height into queue
                    hgt[i][j] = 0;         // Water cells have height 0
                    vis[i][j] = 1;         // Mark as visited
                }
            }
        }

        // Arrays to explore the four possible directions: up, right, down, left
        int row[4] = {-1, 0, +1, 0};
        int col[4] = {0, +1, 0, -1};

        // Process the queue using BFS
        while (!q.empty()) {
            auto value = q.front();
            int i = value.first.first;
            int j = value.first.second;
            int height = value.second;
            q.pop();
            
            // Update the height of the current cell
            hgt[i][j] = height;

            // Explore all four directions
            for (int k = 0; k < 4; k++) {
                int nrow = i + row[k];  // New row index
                int ncol = j + col[k];  // New column index
                
                // Check if the new cell is within bounds and not visited
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && vis[nrow][ncol] == 0) {
                    vis[nrow][ncol] = 1;   // Mark as visited
                    q.push({{nrow, ncol}, height + 1});  // Push new cell with incremented height
                }
            }
        }

        // Return the final height matrix
        return hgt;
    }
};