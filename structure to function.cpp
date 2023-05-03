#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    float gpa;
};

void printStudent(struct student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
}

main() {
    struct student s1;
    strcpy(s1.name, "John Doe");
    s1.age = 20;
    s1.gpa = 3.5;

    printStudent(s1);
}
