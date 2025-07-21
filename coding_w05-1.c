#include <stdio.h>

int main(){
    char name;
    int age;
    float weight;

    printf("Enter your name, age, weight: ");
    scanf("%c %d %f", &name, &age, &weight);

    printf("Student %c is %d years old.\n", name, age);
    printf("his weight is %.1f kg.\n" , weight);
    return 0; 
}