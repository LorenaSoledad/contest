/**************************************************************/
/* Problema:  Codeforces#268B Buttons                         */
/* Categoría: Math                                            */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>

int main() {
    int n, i, curr;
    long long answer;
    
    scanf("%d", &n);
    answer = n;
    curr = 1;
    for(i = n-1; i > 1; i--){
        answer += (i + ((i-1) * curr));
        curr++;
    }
    if(n != 1) answer++;
    
    printf("%lld", answer);
	return 0;
}
