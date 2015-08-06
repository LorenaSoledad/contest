/**************************************************************/
/* Problema:  UVA#11831 Sticker Collector Robot               */
/* Categoría: Math                                            */
/* Autor:     Lorena S. Daicich                               */
/* Username:  LorenaSoledad                                   */
/**************************************************************/


#include <stdio.h>
#define MAX_N_M 101
#define MAX_INSTRUCTIONS 50001

int robotRow, robotCol, n, m, i, j;
long stickers, nInstructions;
char table[MAX_N_M][MAX_N_M], instr[MAX_INSTRUCTIONS], temp[100], c, d;

void move(int row, int col);
void processF();
void processD();
void processE();

int main(void) {
    
    scanf("%d%d%ld\n", &n, &m, &nInstructions);
    while(n != 0 || m != 0 || nInstructions != 0){
        stickers = 0;
        for(i=0; i<n; i++){
            scanf("%s", temp);
            for(j=0; j<m; j++){
                table[i][j] = c = temp[j];
                if(c == 'N' || c == 'S' || c == 'L' || c == 'O'){
                    robotRow = i;
                    robotCol = j;
                }
            }
        }
    
        scanf("%s", instr);
            
        for(i = 0; i < nInstructions; i++){
            c = instr[i];
            switch(c){
                case 'F': processF(); break;
                case 'D': processD(); break;
                case 'E': processE(); break;
            }
        }
    
        printf("%ld\n", stickers);
        scanf("%d%d%ld\n", &n, &m, &nInstructions);
    }
    
	return 0;
}

void move(int row, int col){
    if( row >= 0 && col >= 0 && row < n && col < m)
        switch(table[row][col]){
            case '*': 
                stickers++;
                table[row][col] = table[robotRow][robotCol];
                table[robotRow][robotCol] = '.';
                robotRow = row;
                robotCol = col;
                break;
            case '.': 
                table[row][col] = table[robotRow][robotCol];
                table[robotRow][robotCol] = '.';
                robotRow = row;
                robotCol = col;
                break;
            case '#': break;
        }
}

void processF(){
    switch(table[robotRow][robotCol]){
        case 'N': move(robotRow-1, robotCol); break;
        case 'S': move(robotRow+1, robotCol); break;
        case 'O': move(robotRow, robotCol-1); break;
        case 'L': move(robotRow, robotCol+1); break;
    }
}

void processD(){
    switch(table[robotRow][robotCol]){
        case 'N': d = 'L'; break;
        case 'S': d = 'O'; break;
        case 'O': d = 'N'; break;
        case 'L': d = 'S'; break;
    }
    table[robotRow][robotCol] = d;
}

void processE(){
    switch(table[robotRow][robotCol]){
        case 'N': d = 'O'; break;
        case 'S': d = 'L'; break;
        case 'O': d = 'S'; break;
        case 'L': d = 'N'; break;
    }
    table[robotRow][robotCol] = d;
}
