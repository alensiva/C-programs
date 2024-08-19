#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void inputStudentRecords(struct Student students[], int n);
void displayStudentRecords(struct Student students[], int n);
void sortStudentsByGrade(struct Student students[], int n);

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    inputStudentRecords(students, n);

    printf("\nStudent records before sorting:\n");
    displayStudentRecords(students, n);

    sortStudentsByGrade(students, n);

    printf("\nStudent records after sorting by grade:\n");
    displayStudentRecords(students, n);

    return 0;
}

void inputStudentRecords(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name); 
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &students[i].grade);
    }
}

void displayStudentRecords(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Grade: %.2f\n", students[i].name, students[i].age, students[i].grade);
    }
}

void sortStudentsByGrade(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].grade > students[j].grade) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
