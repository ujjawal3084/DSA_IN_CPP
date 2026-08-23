class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum=0;
        int x=0;
        for(int i=0;i<requests.size();i++)
        {
            int y=abs(requests[i]-x);
            x=requests[i];
            sum=sum+y;

        }
        return sum;
    }
};