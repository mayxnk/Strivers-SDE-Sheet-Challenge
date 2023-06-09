#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //Brute Force => Time - O(2*n),Space - O(1)
   /*int zeroes = 0,ones = 0;
   for(int i = 0;i<n;i++)
   {
      if(arr[i] == 0) zeroes++;
      if(arr[i] == 1) ones++;
   }
   for(int i = 0;i<n;i++)
   {
      if(i >= 0 and i<=zeroes-1) arr[i] = 0;
      else if(i>=zeroes and i<=(zeroes+ones-1)) arr[i] = 1;
      else
      arr[i] = 2;
   }
   */
   //Optimal Approach => Time - O(n),Space - O(1)
   int low = 0,mid = 0,high = n-1;
   while(mid<=high)
   {
      if(arr[mid] == 0) swap(arr[mid++],arr[low++]);
      else if(arr[mid] == 2) swap(arr[mid],arr[high--]);
      else ++mid;
   }
}
