#include <stdio.h>

int main()
{
    int answer = 5, guess, tries = 1;
    
    printf("enter your guess: ");
    scanf("%d", &guess);
    
    while (guess != answer) {
        printf("opss wrong!!\n");
        printf("enter your guess: ");
        scanf("%d", &guess);
        tries++;
        
        if (tries == 3) {
            printf("opss tama na!!");
            break;
        }
    }
    if (guess == answer) {
        printf("sakpan gyud o!!");
    }

    return 0;
}
