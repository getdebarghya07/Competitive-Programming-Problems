class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> a( n , vector<int> (m, -1));
        
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(mat[i][j]==0){
                    a[i][j]=0;
                }
            }
        }
       
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(mat[i][j]==0){
                    continue;
                }
                else{

                    a[i][j] = mat[i][j];
                    if(i-1 >= 0 && a[i-1][j] != -1){
                        mn = min(mn ,1+a[i-1][j]);
                        a[i][j]=mn;
                    }
                    if(i+1 < n && a[i+1][j] != -1){
                        mn = min(mn ,1+a[i+1][j]);
                        a[i][j]=mn;
                    }
                    if(j-1 >= 0 && a[i][j-1] != -1){
                        mn = min(mn ,1+a[i][j-1]);
                        a[i][j]=mn;
                    }
                    if(j+1 < m && a[i][j+1] != -1){
                        mn = min(mn ,1+a[i][j+1]);
                        a[i][j]=mn;
                    }
                    mn=INT_MAX;
                }
            }
        }
        return a;
    }
};