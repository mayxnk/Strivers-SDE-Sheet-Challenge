vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //Brute Force => Time - O(nlogn + 2*n),Space - O(n)
        /*vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<intervals.size();++i)
        {
            int start = intervals[i][0],end = intervals[i][1];
            if(ans.size() and end<=ans.back()[1])
            continue;

            for(int j = i+1;j<intervals.size();++j)
            {
                if(intervals[j][0]<=end)
                end = max(end,intervals[j][1]);
                else
                break;
            }
            ans.push_back({start,end});
        }
        return ans;
        */
        //Optimised Approach => Time - O(nlogn+n),Space - O(n)
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int i = 0;i<intervals.size();++i)
        {
            if(ans.empty() or ans.back()[1] < intervals[i][0])
                ans.push_back(intervals[i]);
            else
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }
        return ans;

    }
