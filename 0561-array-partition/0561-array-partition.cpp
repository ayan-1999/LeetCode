class Solution {
public:
    int arrayPairSum(vector<int>& a) 
    {
        int n=a.size();
        int sum=0;
         sort(a.begin(),a.end());
    for (int i = 0; i < n; i = i + 2)
    {
        sum = sum + a[i];
    }
    return sum;
        
    }
};