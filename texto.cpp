/*
	Name: 
	Copyright: 
	Author: 
	Date: 07/09/25 11:31
	Description: 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char L[501]; 
    
  
    fgets(L, sizeof(L), stdin);

    size_t len = strlen(L);
    if (L[len - 1] == '\n') {
        L[len - 1] = '\0';
        len--;
    }

    if (len <= 80)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}



