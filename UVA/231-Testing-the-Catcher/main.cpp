/**************************************************************/
/* Problema:  UVA#231 Testing the Catcher                     */
/* Categoría: DP, LIS                                         */
/* Autor:     Lorena S. Daicich                               */
/* Estado:    Accepted                                        */
/**************************************************************/


#include <stdio.h>
#include <vector>
using namespace std;

int calcLIS(vector<int> A){
    int i, j, MAX_LIS = 1, MAX_END = 0, LIS[A.size()];
               
    LIS[0] = 1;
               
    for( i = 1 ; i < A.size(); i++ ){
                    
        LIS[i] = 1;
                   
        for(j = 0; j < i; j++)
            if( LIS[j] + 1 > LIS[i] && A[i] <= A[j] )
                LIS[i] = LIS[j] + 1;
        
        if(LIS[i] > MAX_LIS) MAX_LIS = LIS[i];
                   
    }
    
    return MAX_LIS;
}

int main() {
    int testNumber = 0;
    int a, ans;
    vector<int> misileSequence;
    
    scanf("%d", &a);
    while(a != -1){
        testNumber++;
        misileSequence.push_back(a);
        scanf("%d", &a);
        while(a!=-1){
            misileSequence.push_back(a);
            scanf("%d", &a);
        }
        
        ans = calcLIS(misileSequence);
        misileSequence.clear();
        
        printf("Test #%d:\n", testNumber);
        printf("  maximum possible interceptions: %d\n", ans);
        scanf("%d", &a);
        if(a!=-1) printf("\n");
    }
    
    return 0;
}
