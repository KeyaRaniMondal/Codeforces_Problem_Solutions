#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        
        // The grid has n rows and n columns.
        // Note: the number of permutation elements is 2*n.
        int grid[801][801];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &grid[i][j]);
            }
        }
        
        // Create an array to hold the permutation p[1..2*n].
        // We use 1-indexing for clarity.
        int p[1601] = {0}; // p[0] is unused
        
        // For each cell (i, j) in the grid (with i, j as 0-indexed),
        // the corresponding permutation index is (i + j + 2).
        // We only need to set each p[s] once.
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                int s = i + j + 2;
                // p[s] should be the same for all (i, j) with fixed s.
                if (p[s] == 0) {
                    p[s] = grid[i][j];
                }
            }
        }
        
        // Determine p[1] which is missing in p[2..2*n]
        int found[1601] = {0}; // mark numbers already present
        for (int s = 2; s <= 2 * n; s++){
            found[p[s]] = 1;
        }
        // p[1] is the missing number.
        for (int num = 1; num <= 2*n; num++){
            if (!found[num]){
                p[1] = num;
                break;
            }
        }
        
        // Output the permutation p[1] to p[2*n]
        for (int i = 1; i <= 2 * n; i++){
            printf("%d ", p[i]);
        }
        printf("\n");
    }
    
    return 0;
}