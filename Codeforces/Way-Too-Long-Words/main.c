/**************************************************************/
/* Problema:  Codeforces#71A Way Too Long Words               */
/* Categoría: Strings                                         */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>
#include <string.h>

int main() {
    int n, len;
    char string[101], out[10];
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%s", string);
        len = strlen(string);
        if( len > 10){
            sprintf(out, "%c%d%c", string[0], len-2, string[len-1]);
            printf("%s\n", out);
        } else printf("%s\n", string);
    }
	return 0;
}
