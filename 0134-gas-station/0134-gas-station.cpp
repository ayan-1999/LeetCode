class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int index=0,n=gas.size(),curFuel=0,totalDiff=0;
        for(int i=0;i<n;i++){
            int diff =gas[i]-cost[i];
            totalDiff+=diff;
            curFuel+=diff;
            if(curFuel<0)
            {
                index=i+1;
                curFuel=0;
            }
        }
        return (totalDiff<0)?-1:index;
    }
};