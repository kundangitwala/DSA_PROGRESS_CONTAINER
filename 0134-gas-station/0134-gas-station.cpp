class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totaldiff=0,n=gas.size() , totalfuel=0, index=0;
        int sumi1=0,sumi2=0;
        for(int it:gas)
        {
            sumi1+=it;
        }

        for(int it:cost)
        {
            sumi2+=it;
        }
        if(sumi1-sumi2<0) return -1;
        for(int i=0;i<n; i++)
        {
            int diff=gas[i]-cost[i];
            // totaldiff+=diff;
            totalfuel+=diff;
            if(totalfuel<0)
            {
                index=i+1;
                totalfuel=0;
            }

        }
        // return (totaldiff<0 ? -1 : index);
        return index;
    }
};