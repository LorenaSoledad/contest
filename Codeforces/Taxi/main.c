/**************************************************************/
/* Problema:  Codeforces#158A Taxi                            */
/* Categoría: Greedy                                          */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>
#include <math.h>

int main() {
    long n, count[5]={0}, nTaxis=0;
    int a;
    
    scanf("%ld", &n);
    while(n--){
        scanf("%d", &a);
        count[a]++;
    }
    
    nTaxis += count[4];
    nTaxis += count[3];
    nTaxis += ceil(count[2]/2.0);
    count[1] -= count[3];
    if(count[2]%2 != 0) count[1]-=2;
    if(count[1] > 0) nTaxis += ceil(count[1]/4.0);
    
    printf("%ld", nTaxis);
    
	return 0;
}
