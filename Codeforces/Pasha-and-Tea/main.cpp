/**************************************************************/
/* Problema:  Codeforces#557B Pasha and Tea                   */
/* Categoría: Sorting                                         */
/* Autor:     Lorena S. Daicich                               */
/* Estado:    Accepted                                        */
/**************************************************************/

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

float min(float a, float b){
    if(a <= b) return a;
    else return b;
}

int main() {
    long n, w, a, i;
    double ming, minb, x, temp, ans;
    
    vector<long> cups;
    scanf("%ld%ld", &n, &w);
    
    for(i = 0; i < 2*n; i++){
        scanf("%ld", &a);
        cups.push_back(a);
    }
    
    sort(cups.begin(), cups.end());
    ming = cups[0];
    minb = cups[n];
    
    if( minb/2 > ming ) x = ming;
    else x = minb/2;

    printf("%.6f", min( 3*n*x, w ));
    return 0;
}
