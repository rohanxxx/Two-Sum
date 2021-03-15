

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        
        vector<int> Sum;
        int numSize = nums.size();
        
        for(int i = 0; i < numSize; i++)
        {
            for(int j = i+1; j < numSize(); j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    Sum.push_back(i);
                    Sum.push_back(j);
                }
            }
        }
        
        return Sum;
    }
};
