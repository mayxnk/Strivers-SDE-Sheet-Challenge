void setZeroes(vector<vector<int>>& matrix) 
    {

        //set<pair<int,int>> st;
         int m = matrix.size(),n = matrix[0].size();
        // for(int i = 0;i<m;i++)
        // {
        //     for(int j = 0;j<n;j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         st.insert({i,j});
        //     }
        // }
        // for(int i = 0;i<m;i++)
        // {
        //     for(int j = 0;j<n;j++)
        //     {
        //         pair<int,int> p;
        //         p.first = i,p.second = j;
        //         if(st.find(p) != st.end())
        //         {
        //             for(int x = 0;x<m;x++)
        //             matrix[x][j] = 0;
        //             for(int x = 0;x<n;x++)
        //             matrix[i][x] = 0;                      
        //         }
        //     }
        // }
        //Time - O(n^3),Space - O(m*n)
        //Better Approach
        /*vector<int> row(m,0),col(n,0);
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(row[i] or col[j])
                matrix[i][j] = 0;
            }
        }
        */
        //Time - O(m*n) , Space - O(n)
        //Best Approach
        int col0 = 1;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                   matrix[i][0] = 0;
                   if(j == 0)
                   col0 = 0;
                   else
                   matrix[0][j] = 0;
                }
            }
        }
        for(int i = m-1;i>=1;i--)
        {
            for(int j = n-1;j>=1;j--)
            {
                if((matrix[i][j]!=0) and (!matrix[i][0] or !matrix[0][j]))
                matrix[i][j] = 0;
            }
        }
        if(!matrix[0][0])
        for(int i = 0;i<n;i++)
        matrix[0][i] = 0;

        if(col0 == 0)
        for(int i = 0;i<m;i++)
        matrix[i][0] = 0;
        //Time - O(2*m*n),Space - O(1)
    }

