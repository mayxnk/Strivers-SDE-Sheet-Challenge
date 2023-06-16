int findDuplicate(vector<int>& nums) 
    {
        //Brute force => Time - O(n^2),Space - O(1)
        int n = nums.size();
        /*int ans = -1;
        for(int i = 0;i<n-1;++i)
        {
            int count = 0;
            for(int j = i+1;j<n;j++)
            if(nums[i] == nums[j])
            ++count;

            if(count == 1)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
        */
        //Better Approach => Time - O(nlogn),Space - O(1)
        /*sort(nums.begin(),nums.end());
        int i;
        for(i = 0;i<n-1;i++)
            if(nums[i] == nums[i+1])
                break;
        
        return nums[i];
        */
        //Better Optimised => Time - O(n),Space - O(n)
        /*map<int,int> mp;
        int ans = -1;
        for(int i = 0;i<n;++i)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] == 2)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
        */
        //Optimised => Time - O(n),Space - O(1)
        int slow = nums[0],fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
