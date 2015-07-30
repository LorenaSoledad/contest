/**************************************************************/
/* Problema:  Codeforces#282A Bit++                           */
/* Categoría: Implementation                                  */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>

int main(void) {
    int n, x = 0;
    char in[4];
    
    scanf("%d", &n);
    while(n--){
        scanf("%s", in);
        if( in[1] == '+') x++; else x--;
    }
    printf("%d", x);
	return 0;
}
