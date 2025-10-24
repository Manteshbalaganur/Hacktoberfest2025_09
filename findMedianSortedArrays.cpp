class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size(), m= nums2.size();
        vector<int>ans;
        int j=0;
        for(int i=0;i<n;i++){
             ans.push_back(nums1[i]);
        }
        for (int j=0;j<m;j++){
            ans.push_back(nums2[j]);
        }
       
        sort(ans.begin(),ans.end());
            int s=ans.size();
            double median=0;
            // odd
            if(s%2!=0){
                double temp=ans.size()-1;
                temp/=2;
                median+= ans[temp];

            }
            else {
                 float temp2=ans.size()/2;
                 int temp3=temp2-1;
                 median+= (ans[temp2]+ans[temp3])/2.0;
            }
        
     return median;
    }
};
