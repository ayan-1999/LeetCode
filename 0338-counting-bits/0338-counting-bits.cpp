class Solution {
public:
    vector<int> countBits(int inpt) 
    {
       vector<int> arr(inpt + 1);
    for (int i = 0; i <= inpt; i++)
    {
        int count = 0;
        int x = i;
        while (x > 0)
        {
            if (x % 2 == 1)
            {
                count++;
            }
            x = x / 2;
        }
        arr[i] = count;
    }
        return arr;
        
    }
};