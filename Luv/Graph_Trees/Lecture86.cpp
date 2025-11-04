class Solution {
public:
    void dfs(int i, int j, int initialColor, int color, vector<vector<int>>&image){
        int n = image.size();
        int m = image[0].size();
        if(i<0 || j<0) return;
        if(i>=n || j>=m) return;
        if(image[i][j] != initialColor) return;
        image[i][j] = color; 

        dfs(i+1,j, initialColor, color, image);
        dfs(i-1,j, initialColor, color, image);
        dfs(i,j-1, initialColor, color, image);
        dfs(i,j+1, initialColor, color, image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        if(initialColor != color) dfs(sr, sc, initialColor, color , image); 
        return image;
    }
};