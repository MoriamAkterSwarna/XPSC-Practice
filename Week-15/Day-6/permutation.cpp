class Solution {
    private: 

    void perm(vector<int>& nums, vector<int>& v, int frq[], vector<vector<int>>& result){
        if(nums.size() == v.size()){
            result.push_back(v);
            return;
        }
        for(int i = 0 ; i < nums.size(); i++){
            if(frq[i] == 0){
                v.push_back(nums[i]);
                frq[i]=1;
                perm(nums,v, frq,result);
                frq[i]=0;
                v.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> v; 
        int frq[nums.size()];
        for(int i = 0; i < nums.size(); i++){
            frq[i] = 0;
        }

        perm(nums,v, frq,result);
        return result;
        
    }
};