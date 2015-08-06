/**************************************************************/
/* Problema:  UVA#572 Oil Deposits                            */
/* Categoría: Graph                                           */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>
#define MAX 100
using namespace std;

char grid[MAX][MAX];
bool visited[MAX][MAX];
int nRow, nCol;
int neigRow[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int neigCol[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void init(){
    int i, j;
    for(i = 0; i < nRow; i++)
        for(j = 0; j < nCol; j++)
            visited[i][j] = false;
}

void dfs(int r, int c){
    if( !(r < 0 || r > nRow || c < 0 || c > nCol) ){
        visited[r][c] = true;
        for(int i = 0; i < 8; i++)
            if( !visited[r+neigRow[i]][c+neigCol[i]] && grid[r+neigRow[i]][c+neigCol[i]] == '@' )
                dfs(r + neigRow[i] , c + neigCol[i]);
    }
}

int main() {
	int i, j, oilDeposit;
	
	scanf("%d%d", &nRow, &nCol);
	while(nRow != 0){
	    init();
	    oilDeposit = 0;
	    for(i = 0; i < nRow; i++) scanf("%s", grid[i]);
	    
	    for(i = 0; i < nRow; i++)
	        for(j = 0; j < nCol; j++)
	            if(!visited[i][j] && grid[i][j] == '@'){
	                dfs(i, j);
	                oilDeposit++;
	            }
	            
	    printf("%d\n", oilDeposit);
	    scanf("%d%d", &nRow, &nCol);
	}
	return 0;
}
