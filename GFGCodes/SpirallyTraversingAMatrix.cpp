class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat)
    {
        vector<int> ans;
        int row = mat.size();
        int col = mat[0].size();

        int count = 0;
        int total = row * col;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total)
        {

            for (int index = startingCol; count < total && index <= endingCol; index++)
            {
                ans.push_back(mat[startingRow][index]);
                count++;
            }
            startingRow++;

            for (int index = startingRow; count < total && index <= endingRow; index++)
            {
                ans.push_back(mat[index][endingCol]);
                count++;
            }
            endingCol--;

            for (int index = endingCol; count < total && index >= startingCol; index--)
            {
                ans.push_back(mat[endingRow][index]);
                count++;
            }
            endingRow--;

            for (int index = endingRow; count < total && index >= startingRow; index--)
            {
                ans.push_back(mat[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};