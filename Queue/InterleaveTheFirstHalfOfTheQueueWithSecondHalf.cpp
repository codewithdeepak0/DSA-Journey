// Question Link : https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

// Solution using Queue

class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        queue<int> newQueue;
        int n = q.size();
        
        for(int i=0; i<n/2; i++){
            int val = q.front();
            q.pop();
            newQueue.push(val);
        }
        
        while(!newQueue.empty()){
            int val = newQueue.front();
            newQueue.pop();
            q.push(val);
            val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};


// Solution using Stack

class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // Solution using Stack
        
        stack<int> s1;
        stack<int> s2;
        int n = q.size();
        
        for(int i=0; i<n/2; i++){
            int val = q.front();
            q.pop();
            s1.push(val);
        }
        
        while(!s1.empty()){
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
        
        while(!s2.empty()){
            int val = s2.top();
            s2.pop();
            q.push(val);
            val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};