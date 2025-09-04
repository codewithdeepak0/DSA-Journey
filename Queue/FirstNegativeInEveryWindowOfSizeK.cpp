//Question Link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        
        // Process first window
        for(int i = 0; i < k; i++){
            if(arr[i] < 0){
                dq.push_back(i);
            }
        }
        
        // Add result for first window
        if(dq.size() > 0){
            ans.push_back(arr[dq.front()]);
        } else {
            ans.push_back(0);
        }
        
        // Process remaining windows
        for(int i = k; i < arr.size(); i++){
            // Remove elements that are out of current window
            if(!dq.empty() && (i - dq.front()) >= k){
                dq.pop_front();
            }
            
            // Add current element if it's negative
            if(arr[i] < 0){
                dq.push_back(i);
            }
            
            // Add result for current window
            if(dq.size() > 0){
                ans.push_back(arr[dq.front()]);
            } else {
                ans.push_back(0);
            }
        }
        
        return ans;
    }
};