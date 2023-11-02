class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long low=1;
        long high=num;
        while(low<=high)
        {
            long mid=(high+low)/2;
            cout<<mid<<endl;
            if(mid*mid==num)
                return true;
            else if(mid*mid>num)
               high=(int)mid-1;
            else
                low=(int)mid+1;       
        }
        return false;
        
    }
};