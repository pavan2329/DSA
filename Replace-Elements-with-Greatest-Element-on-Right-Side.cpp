class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi=-1;
        int n=arr.size();
        vector<int>ans(n);
        ans[n-1]=-1;
        int counter=n-2;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>maxi)
            maxi=arr[i];
            if(counter>=0)
            ans[counter]=maxi;
            counter--;
        }
        return ans;
        
    }
};