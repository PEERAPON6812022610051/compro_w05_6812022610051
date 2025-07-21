#include <stdio.h>

int main(){
    char name[30];
    int age;
    float height;
    char subject; 
    float grade;
    char gradeChar;

    printf("Enter your name, age, height, subjiect, grade, grade symbol");
    scanf(" %s %d %f %c %f %c", &name, &age, &height, &subject, &grade, &gradeChar);

    printf("%s is %d yaer old and %.1f centimeers tall.\n", name,age,height);
    printf("In subjiec %c , %s got %.2f is symbolized as '%c'.\n", subject,name,grade,gradeChar);
    return 0;
}