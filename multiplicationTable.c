#include <stdio.h>

void mulTable() {
    int i, j;
    for(i = 1 ; i <= 10; i++) {
        for(j = 1 ; j <= 10 ; j++) {
        int sum = i * j;    
        printf("%d x %d = %d\n", i, j, sum);
        
        
        if (j == 10) {
            printf("\n");
        }
        }
    }
}



int main()
{

    mulTable();

    return 0;
}
