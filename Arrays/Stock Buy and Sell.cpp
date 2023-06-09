#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    //Brute force => Time - O(n^2),Space - O(1)
    /*int maxm = -1e9,n = prices.size();
    for(int i = 0;i<n-1;++i)
    {
        for(int j = i+1;j<n;++j)
        maxm = max(maxm,prices[j]-prices[i]);
    }
    if(maxm<0)
    return 0;
    return maxm;
    */
    //Optimal Approach => Time - O(n),Space - O(1)
    int n = prices.size(),maxProfit = -1e9,minm = 1e9;
    for(int i = 0;i<n;i++)
    {
        minm = min(prices[i],minm);
        maxProfit = max(maxProfit,prices[i] - minm);
    } 
    if(maxProfit < 0)
    return 0;
    return maxProfit;

}
