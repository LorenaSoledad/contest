/**************************************************************/
/* Problema:  Codeforces#1A Theatre Square                    */
/* Categoría: Math                                            */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>
#include <math.h>

int main(void) {
    long long m, n, i, j;
    double a;
    
    scanf("%lld %lld %lf", &m, &n, &a);
    i = ceil(m/a);
    j = ceil(n/a);
    
    printf("%lld", i*j);
	return 0;
}
