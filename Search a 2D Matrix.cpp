//Problem Link
//https://leetcode.com/problems/search-a-2d-matrix/
//solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int m=matrix[0].size();
     int n=matrix.size();
     bool ans;
        int check=0;
     for(int i=0;i<n;i++)
        {
         for(int j=0;j<m;j++)
            {
                if(target==matrix[i][j])
                {
                    ans=true;
                    check=1;
                    break;
                }
            }
            if(check==1)
            {
                break;
            }   
        }
        if(check==0)   
            {
                ans=false;
            }
            return ans;
    }
};
