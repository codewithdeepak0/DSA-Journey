class Solution {
    private:
      bool isSafe(vector<vector<int>> &mat, int n, int x, int y, vector<vector<int>> visited){
          if((x>=0 && x<n) && (y>=0 && y<n) && mat[x][y]==1 && visited[x][y]==0){
              return true;
          }else{
              return false;
          }
      }
      void solve(vector<vector<int>> &mat, int n, int x, int y, string path, vector<string> &ans, vector<vector<int>> visited){
          //Base Case -> Reached at dest.
          if(x==n-1 && y==n-1){
              ans.push_back(path);
              return;
          }
          
          visited[x][y] = 1;
          
          //Down
          int newx = x+1;
          int newy = y;
          if(isSafe(mat, n, newx, newy, visited)){
              path.push_back('D');
              solve(mat, n, newx, newy, path, ans, visited);
              path.pop_back();
          }
          
          //Left
          newx = x;
          newy = y-1;
          if(isSafe(mat, n, newx, newy, visited)){
              path.push_back('L');
              solve(mat, n, newx, newy, path, ans, visited);
              path.pop_back();
          }
          
          //Right
          newx = x;
          newy = y+1;
          if(isSafe(mat, n, newx, newy, visited)){
              path.push_back('R');
              solve(mat, n, newx, newy, path, ans, visited);
              path.pop_back();
          }
          
          //Up
          newx = x-1;
          newy = y;
          if(isSafe(mat, n, newx, newy, visited)){
              path.push_back('U');
              solve(mat, n, newx, newy, path, ans, visited);
              path.pop_back();
          }
          
          visited[x][y] = 0; //Backtracking
          
      }
    public:
      vector<string> findPath(vector<vector<int>> &mat) {
          int n = mat.size();
          vector<string> ans;
          
          if(mat[0][0]==0){
              return ans;
          }
          
          int srcx = 0;
          int srcy = 0;
          
          vector<vector<int>> visited = mat;
          for(int i=0; i<n;i++){
              for(int j=0; j<n; j++){
                  visited[i][j]=0;
              }
          }
          
          string path = "";
          
          solve(mat, n, srcx, srcy, path, ans, visited);
          return ans;
      }
  };