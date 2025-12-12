#include <stdio.h>

int main()
{
    int grade[9];
    int length = sizeof(grade) / sizeof(grade[0]);
    int addGrades = 0;
    
    for (int i = 0; i < length; i++) {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%d", &grade[i]);
    }

    for(int i = 0; i < length; i++) {
        printf("My grade%d: %d\n",i + 1, grade[i]);
        addGrades += grade[i];
        
    }
    
    printf("total grade: %d\n", addGrades);
    
    int average = addGrades / length;
    
    printf("your average is: %d", average);
    
    return 0;
}
