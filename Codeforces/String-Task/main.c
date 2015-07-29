/**************************************************************/
/* Problema:  Codeforces#118A String Task                     */
/* Categoría: Strings                                         */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char in[128], out[256];
	int len, i, punt=0;
	
	scanf("%s", in);
	len = strlen(in);
	for(i = 0; i < len; i++){
	    if( !(in[i] == 'A' || in[i] == 'O' || in[i] == 'Y'|| in[i] == 'E'|| in[i] == 'U'|| in[i] == 'I'
	    || in[i] == 'a'|| in[i] == 'o'|| in[i] == 'y'|| in[i] == 'e'|| in[i] == 'u'|| in[i] == 'i')){
	        out[punt++] = '.';
	        if(in[i] > 'A' && in[i] <= 'Z') out[punt++] = tolower(in[i]);
	        else out[punt++] = in[i];
	    }
	}
	out[punt] = '\0';
	printf("%s",out);
	return 0;
}
