class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int product=1;
        int z=n;
        while(n>0)
        {
            int x=n%10;
            s=s+x;
            product=product*x;
            n=n/10;
        }
        int sum=s+product;
        if(z%sum==0)
        {
            return true;
        }
        else
            return false;
    }
};