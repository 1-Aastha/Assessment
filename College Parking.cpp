//change this code in simple format
int main() {
    int R, C;
    cin >> R >> C;
    
    int matrix[R][C];
    int max_full_spaces = 0;
    int row_with_max_full = 0;
    
    
    for (int i = 0; i < R * C; ++i) {
        cin >> matrix[i / C][i % C];
    }
    
    
    for (int i = 0; i < R; ++i) {
        int full_spaces_count = 0;
        for (int j = 0; j < C; ++j) {
            if (matrix[i][j] == 1) {
                full_spaces_count++;
            }
        }
        if (full_spaces_count > max_full_spaces) {
            max_full_spaces = full_spaces_count;
            row_with_max_full = i + 1; 
        }
    }
    
    
    cout << row_with_max_full << endl;
    
    return 0;
}
