/**************************************************************/
/* Problema:  Codeforces#455A Boredom                         */
/* Categoría: DP                                              */
/* Autor:     Lorena S. Daicich                               */
/* Username:  Kashmir                                         */
/**************************************************************/


#include <stdio.h>
#define MAX_N 100001

long long max(long long a, long long b){
    if(a>b) return a;
    else return b;
}

int main(void) {
    long long n, i, a, dp[MAX_N] = {0};
    scanf("%lld", &n);
    for(i = 0; i < n; i++){
        scanf("%lld", &a);
        dp[a]++;
    }
    
    for(i = 2; i < MAX_N; i++)
        dp[i] = max(dp[i-1], dp[i]*i + dp[i-2]);
    
    printf("%lld", dp[MAX_N-1]);
    return 0;
}
