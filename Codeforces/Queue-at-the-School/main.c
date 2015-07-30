/**************************************************************/
/* Problema:  Codeforces#266B Queue at the School             */
/* Categoría: Sorting                                         */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>

int main() {
    int n, t, i, j;
    char queue[64];
    scanf("%d%d%s", &n, &t, queue);
    
    for(i = 0; i < t; i++)
        for(j = 0; j < n-1; j++){
            if(queue[j] < queue[j+1]){
                queue[j] = 'G';
                queue[j+1] = 'B';
                j++;
            }
        }
        
    printf("%s", queue);
	return 0;
}
