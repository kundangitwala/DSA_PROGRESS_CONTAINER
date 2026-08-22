class Solution {
public:
    bool checkDivisibility(int n) {
        int value1=0;
        int value2=1;
        int temp=n;
        while(temp!=0)
        {
            int digit=temp%10;
            value1 += digit;
            value2 *= digit;
            temp=temp/10;
        }
        if(n % (value1+value2) == 0)
        {
            return true;
        }
        return false;
    }
};