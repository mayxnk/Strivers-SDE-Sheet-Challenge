void rotate(vector<vector<int>>& matrix) {
        //Brute Force => Time - O(n^2),Space - O(n^2)
        // int n = matrix.size();
        // vector<vector<int>> rotated(n,vector<int>(n));
        // for(int i = 0;i<n;i++)
        // {
        //     for(int j = 0;j<n;j++)
        //     rotated[j][n-i-1] = matrix[i][j];
        // }
        // matrix = rotated;

        //Optimised Approach
        int n = matrix.size();
        for(int i = 0;i<n;i++)
        {
            for(int j = i;j<n;j++) 
            swap(matrix[i][j],matrix[j][i]);
        }
        for(int i = 0;i<n;i++)
        reverse(matrix[i].begin(),matrix[i].end());
    }
