class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> answer;
        int count=0;

        for(auto ele : nums){
            if(ele!=0){
                answer.push_back(ele);

            }
            else{
                count++;

            }
        }

        while(count!=0){
            answer.push_back(0);
            count--;
        }
        nums=answer;
        
    }
};
