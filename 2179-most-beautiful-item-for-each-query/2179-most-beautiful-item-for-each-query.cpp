class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n =queries.size(),i;

        vector<vector<int>> it2;

        for(i=0;i<n;i++){
            it2.push_back({queries[i],i});
        }

        vector<int> ans(n,0);

        sort(items.begin(),items.end());
        sort(it2.begin(),it2.end());

        int j=0, x=0, a=items.size(), b=it2.size();

        i=0;
        while(j<b){
            while(i<a&&it2[j][0]>=items[i][0]){
                x=max(items[i][1],x);
                i++;
            }
            ans[it2[j][1]] = x;
            j++;
        }
        return ans;
    }
};