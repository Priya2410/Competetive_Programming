// https://binarysearch.com/problems/Flip-and-Invert-Matrix


vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int ele;
    for(int i=0;i<matrix.size();i++){
        reverse(matrix[i].begin(), matrix[i].end());
        for(int j=0;j<matrix[i].size();j++){
            matrix[i][j]=!matrix[i][j];
        }
    }
    return matrix;
}
