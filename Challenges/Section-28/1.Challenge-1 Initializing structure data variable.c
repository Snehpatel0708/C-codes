#include <stdio.h>
struct Student {
    char name[50];
    int age;
    double gpa;
};

int main() {
    struct Student student1;

    strcpy(student1.name, "John");
    student1.age = 20;
    student1.gpa = 3.8;

    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Student GPA: %.2f\n", student1.gpa);

    return 0;
}
