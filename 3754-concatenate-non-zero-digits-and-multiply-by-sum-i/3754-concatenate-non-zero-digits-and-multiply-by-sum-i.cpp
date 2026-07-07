class Solution {
public:
    long long sumAndMultiply(int n) {
        long long res=0;
        long long ans1=0;
        while(n!=0)
        {
            int digit=n%10;
            if(digit!=0)
            {
                ans1=ans1*10+digit;
            }
            n=n/10;
        }
        long long ans2=0;
        while(ans1!=0)
        {
            ans2=ans2*10+(ans1%10);
            ans1=ans1/10;
        }
        int sumi=0;
        long long temp=ans2;
        while(ans2!=0)
        {
            sumi=sumi+(ans2%10);
            ans2=ans2/10;
        }



        res=temp*sumi;
        return res;

    }
};