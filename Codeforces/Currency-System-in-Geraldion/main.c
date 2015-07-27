/**************************************************************/
/* Problema:  Codeforces#560A Currency System in Geraldion    */
/* Categoría: Ad-Hoc                                          */
/* Autor:     Lorena S. Daicich                               */
/* Estado:    Accepted                                        */
/**************************************************************/

#include <stdio.h>
 
int main(void) {
    int n, isOne=0;
    long i;
    
    scanf("%d", &n);
    while(n--){
        scanf("%ld", &i);
        if(i == 1) isOne = 1;
    }
    
    printf("%s", isOne? "-1" : "1");
    return 0;
}
