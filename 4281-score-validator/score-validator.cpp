class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int sum=0;
        int counter=0;

        for(int i=0;i<events.size();i++)
        {
            if(counter==10)
            break;
            if (events[i]=="W")
            counter++;
            else if(events[i]=="WD")
            sum++;
            else if(events[i]=="NB")
            sum++;
            else
            {
                int num=stoi(events[i]);
            sum=sum+num;
            }
            
        }
        vector<int>ans;
        ans.push_back(sum);
        ans.push_back(counter);
        return ans;
    }
};