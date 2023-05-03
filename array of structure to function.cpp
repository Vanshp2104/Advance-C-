#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    float gpa;
};

void printStudents(struct student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("GPA: %.2f\n", arr[i].gpa);
        printf("\n");
    }
}

main() {
    struct student students[3];

    strcpy(students[0].name, "John Doe");
    students[0].age = 20;
    students[0].gpa = 3.5;

    strcpy(students[1].name, "Jane Smith");
    students[1].age = 19;
    students[1].gpa = 3.9;

    strcpy(students[2].name, "Bob Johnson");
    students[2].age = 21;
    students[2].gpa = 2.8;

    printStudents(students, 3);
}
