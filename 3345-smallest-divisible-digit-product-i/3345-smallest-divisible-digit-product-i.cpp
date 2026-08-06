class Solution {
public:
    int solve(int number)
    {
        int prod=1;
        while(number!=0)
        {
            int digit=number%10;
            prod *= digit;
            number =number/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i=n; i<=100; i++){
// find the product of its digit if divisible by t return directly not need to process further
            int num=i;
            int prod=solve(num);
            if(prod%t==0)
            {
                return i;
            }
        }
        return -1;
    }
}; 