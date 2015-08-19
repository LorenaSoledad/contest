/**************************************************************/
/* Problema:  UVA#11350 Stern-Brocot Tree                     */
/* Categoría: Trees                                           */
/* Autor:     Lorena S. Daicich                               */
/* Username:  LorenaSoledad                                   */
/**************************************************************/

#include <stdio.h>
#include <utility>
using namespace std;

int main() {
	int testCases, i;
	char path[100];
	pair<long long,long long> left, right, mid;
	
	scanf("%d", &testCases);
	while(testCases--){
	    scanf("%s", path);
	    left = make_pair(0,1);
	    right = make_pair(1,0);
	    mid = make_pair(1,1);
	    
	    for(i = 0; path[i]; i++){
	        if(path[i] == 'L') right = mid;
	        else left = mid;
	        
	        mid.first = right.first + left.first;
	        mid.second = right.second + left.second;
	    }
	    
	    printf("%lld/%lld\n", mid.first, mid.second);
	}
	
	return 0;
}
