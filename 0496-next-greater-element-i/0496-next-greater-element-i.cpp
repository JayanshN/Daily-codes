class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> next;
        stack<int> st;

        for(int i=0, n = nums2.size(); i<n; i++){
            int num =nums2[i];

            while(!st.empty() && st.top()<num){
                next[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        vector<int> res;

        for(int i=0, n=nums1.size(); i<n; i++){
            int num = nums1[i];
            res.push_back(next.count(num) ? next[num] : -1);
        }

        return res;
    }
};