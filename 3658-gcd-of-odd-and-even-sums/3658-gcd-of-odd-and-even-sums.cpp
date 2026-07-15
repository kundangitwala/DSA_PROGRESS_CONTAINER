class Solution {
public:
    int gcd(int num1,int num2)
    {
        if(num2==0) return num1;
        return gcd(num2,num1%num2);
    }
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        int odd=1;
        int even=2;
        for(int i=0; i<n; i++)
        {
            sumodd += odd;
            sumeven += even;
            odd+=2;
            even+=2;
        }

        return gcd(sumodd,sumeven);
    }
};