#include <stdio.h>

void happyBirthday(char name[], int age) {
    for (int i = 1; i < 5; i++) {
        printf("happy birthday to u\n");
        if (i == 3) {
            printf("happy birthday dear %s\n", name);
        }else if (i == 4) {
            printf("you are now %d years old", age);
        }
    }
}

int main()
{
    char name[50];
    int age;
    
    printf("enter name: ");
    scanf("%s", name);
    
    printf("enter age: ");
    scanf("%d", &age);
    
    happyBirthday(name, age);
    
    
    return 0;
}
