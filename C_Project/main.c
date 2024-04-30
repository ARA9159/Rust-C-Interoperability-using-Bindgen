#include <stdio.h>
#include "lib.h"

extern int Rust_Function(int a, int b);

void C_Function1(struct Student *students, int num_students) {
    for (int i = 0; i < num_students; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }
}

void C_Function2(struct Student *students, int num_students) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < num_students; ++i) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
        printf("\n");
    }

    
}

int main(){

    int result = Rust_Function(10,20);
    printf("Result is %d\n", result);
    return 0;

 }
