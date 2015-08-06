/**************************************************************/
/* Problema:  UVA#11244 Counting Starts                       */
/* Categoría: Graph                                           */
/* Autor:     Lorena S. Daicich                               */
/* Username:  LorenaSoledad                                   */
/**************************************************************/


#include <stdio.h>
#include <string.h>
#define MAX 100
using namespace std;

char grid[MAX][MAX];
bool visited[MAX][MAX];
int nRow, nCol;
int neigRow[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int neigCol[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int dfs(int r, int c){
    if( r < 0 || r >= nRow || c < 0 || c >= nCol ) return 0;
    
    visited[r][c] = true;
    int cc = 1;
    for(int i = 0; i < 8; i++)
        if( !visited[r+neigRow[i]][c+neigCol[i]] && 
            grid[r+neigRow[i]][c+neigCol[i]] == '*' )
                cc += dfs(r + neigRow[i] , c + neigCol[i]);
                
    return cc;
}


int main() {
	int i, j, stars;
	
	scanf("%d%d", &nRow, &nCol);
	while(nRow != 0 && nCol != 0){
	    memset(visited, 0, sizeof(visited));
	    stars = 0;
	    
	    for(i = 0; i < nRow; i++) scanf("%s", grid[i]);
	    
	    for(i = 0; i < nRow; i++) for(j = 0; j < nCol; j++)
	            if(!visited[i][j] && grid[i][j] == '*')
	                if( dfs(i, j) == 1) stars++;
	                
	            
	    printf("%d\n", stars);
	    scanf("%d%d", &nRow, &nCol);
	}
	return 0;
}
