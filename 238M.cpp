class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n;
        n=nums.size();
        vector<int> A(n,1);
        int bw=1,ew=1;
        for(int i=0;i<n;i++)
        {
            A[i]=bw*A[i];
            bw=bw*nums[i];
        }
        
        ew=1;
        for(int i=n-1;i>=0;i--)
        {
            A[i]=ew*A[i];
            ew=ew*nums[i];
        }
        return A;
    }
    
    
};
