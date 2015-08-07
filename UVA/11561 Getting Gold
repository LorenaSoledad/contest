/**************************************************************/
/* Problema:  UVA#11561 Getting Gold                          */
/* Categoría: Graph                                           */
/* Autor:     Lorena S. Daicich                               */
/* Username:  LorenaSoledad                                   */
/**************************************************************/


#include <stdio.h>
#include <string.h>
#define MAX 51
using namespace std;

char grid[MAX][MAX];
bool visited[MAX][MAX];
int nRow, nCol;
int neigRow[] = {-1, 0, 0, 1};
int neigCol[] = {0, -1, 1, 0};

int dfs(int r, int c){
    if( r < 0 || r > nRow || c < 0 || c > nCol ) return 0;

    visited[r][c] = true;
    int gold;
    grid[r][c] == 'G'? gold = 1 : gold = 0;
    
    if( grid[r+neigRow[0]][c+neigCol[0]] == 'T' ||
        grid[r+neigRow[1]][c+neigCol[1]] == 'T' ||
        grid[r+neigRow[2]][c+neigCol[2]] == 'T' ||
        grid[r+neigRow[3]][c+neigCol[3]] == 'T' ) return gold; //No puedo seguir
        
    for(int i = 0; i < 4; i++)
        if( !visited[r+neigRow[i]][c+neigCol[i]] && grid[r+neigRow[i]][c+neigCol[i]] != '#' )
                gold += dfs(r + neigRow[i] , c + neigCol[i]);
                
    return gold;
}

int main() {
	int i, j, gold;
	
	while( scanf("%d%d", &nCol, &nRow) != EOF ){
	    
	    memset(visited, 0, sizeof(visited));
	    
	    for(i = 0; i < nRow; i++) scanf("%s", grid[i]);
	    
	    for(i = 0; i < nRow; i++)
	        for(j = 0; j < nCol; j++)
	            if( grid[i][j] == 'P' )
	                printf("%d\n", dfs(i,j));
	    
	}
	        
	return 0;
}
