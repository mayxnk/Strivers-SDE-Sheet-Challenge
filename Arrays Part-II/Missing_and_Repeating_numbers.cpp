pair<int, int> missingAndRepeating(vector<int> &a, int n) 
{
  // Write your code here
  // Better => Time - O(n),Space - O(n)
  /*map<int,int> mp;
  for(auto x : a)
    mp[x]++;
  
  int miss,repeat;
  for(int i = 0;i<n;i++)
  {
	  if(mp.find(i+1) == mp.end())
	  miss = i+1;
	  if(mp[i+1] == 2)
	  repeat = i+1;
  }
  return {miss,repeat};
  */
  //Optimised => Time - O(n),Space - O(1)
//   long long sn = 0,sn2 = 0,sum = 0,sum2 = 0;
//   sn = (n*(n+1))/2;
  
//   sn2 = ((n)*(n+1)*(2*n+1))/6;

//   for(auto x:a)
//   {
// 	  sum += x;
// 	  sum2 += ((long long)x * (long long)x);
//   }
//   long long val1 = (sum - sn);
//   long long val2 = (sum2 - sn2);

//   val2 = val2/val1;

//   long long x = (val1+val2)/2;
//   long long y = x - val1;

//   return{(int)y,(int)x};
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    //S-Sn = X-Y:
    long long val1 = S - SN;
    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)y, (int)x};

}
