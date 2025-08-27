//Question Link : https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

//Implement using two pointer

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        int a = 0, b = n - 1;

        // Step 1: Find potential celebrity
        while (a < b) {
            if (mat[a][b] == 1) {
                // a knows b → a can't be celebrity
                a++;
            } else {
                // a doesn't know b → b can't be celebrity
                b--;
            }
        }

        int candidate = a;

        // Step 2: Verify candidate
        for (int i = 0; i < n; i++) {
            if (i != candidate) {
                // candidate should not know i, but i should know candidate
                if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                    return -1;
                }
            }
        }

        return candidate;
    }
};


//Implement using stack 

class Solution {
  private:
    bool knows(vector<vector<int>>& mat, int a, int b) {
        return mat[a][b] == 1;
    }

  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> s;

        // Step 1: Push all candidates
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Step 2: Elimination
        while (s.size() > 1) {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();

            if (knows(mat, a, b)) {
                // a knows b → a can't be celebrity
                s.push(b);
            } else {
                // a doesn't know b → b can't be celebrity
                s.push(a);
            }
        }

        // Step 3: Potential celebrity
        int candidate = s.top();

        // Step 4: Verify candidate
        for (int i = 0; i < n; i++) {
            if (i == candidate) continue;
            // candidate should not know i, and i should know candidate
            if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                return -1;
            }
        }

        return candidate;
    }
};

//My first approch which give TLE

class Solution {
  private:
    bool knows(vector<vector<int>>& mat, int a, int b) {
        return mat[a][b] == 1;
    }
  public:
    int celebrity(vector<vector<int>>& mat) {
        stack<int> s;
        int n = mat.size();
        
        // Step 1: Push all persons into stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }
        
        // Step 2: Elimination
        while(s.size() > 1) {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            
            if(knows(mat, a, b)) {
                // a knows b → a can't be celebrity
                s.push(b);
            } else {
                // a does not know b → b can't be celebrity
                s.push(a);
            }
        }
        
        // Potential celebrity
        int ans = s.top();
        
        // Step 3: Verification
        // Check row (ans should not know anyone else)
        for(int i=0; i<n; i++) {
            if(i != ans && mat[ans][i] == 1) return -1;
        }
        
        // Check column (everyone except self must know ans)
        for(int i=0; i<n; i++) {
            if(i != ans && mat[i][ans] == 0) return -1;
        }
        
        return ans;
    }
};
