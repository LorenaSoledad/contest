/**************************************************************/
/* Problema:  Codeforces#560B    Gerald is into Art           */
/* Categoría: Ad-Hoc, Implementation                          */
/* Autor:     Lorena S. Daicich                               */
/* Estado:    Accepted                                        */
/**************************************************************/


#include <stdio.h>

int sum(int, int);
int max(int, int);
int test(int, int);

int A1, B1;

int main(void) {
	int a2, b2, a3, b3, isPosible = 0;
	
	scanf("%d%d%d%d%d%d", &A1, &B1, &a2, &b2, &a3, &b3);
	
	if( test(max(a2,a3),sum(b2,b3)) ) isPosible = 1;
	else if( test(max(b2,b3),sum(a2,a3)) ) isPosible = 1;
	else if( test(max(a2,b3),sum(b2,a3)) ) isPosible = 1;
	else if( test(max(b2,a3),sum(a2,b3)) ) isPosible = 1;
	
	printf("%s", isPosible? "YES" : "NO");
	return 0;
}

int sum(int a, int b){
    return a+b;
}

int max(int a, int b){
    if(a>=b) return a; else return b;
}

int test(int a, int b){
    if( (a <= A1 && b <= B1) || (b <= A1 && a <= B1) ) return 1;
    else return 0;
}
