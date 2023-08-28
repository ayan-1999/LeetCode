class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        int n=a.size(), count = 0;
     
   
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count = count + 1;
            }
        }
    }
    return count;
        
    }
};