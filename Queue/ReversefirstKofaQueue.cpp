//Question Link : https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1


class Solution {
public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if (k == 0 || k > q.size()) return q;
        
        stack<int> s;
        queue<int> temp;
        
        // Step 1: Push first k elements to stack (reverses them)
        for(int i = 0; i < k; i++){
            s.push(q.front());
            q.pop();
        }
        
        // Step 2: Store remaining elements in temporary queue
        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }
        
        // Step 3: Pop from stack to get reversed k elements
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        
        // Step 4: Add back the remaining elements
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        
        return q;
    }
};