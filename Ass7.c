#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    struct Student s[50];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks in 3 subjects: ");
        
        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = (float)s[i].total / 3.0;
    }

    printf("\nStudent Result:\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", s[i].rollNo);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %d\n", s[i].total);
        printf("Percentage: %.2f%%\n", s[i].percentage);
        printf("-------------------------------------------------\n");
    }

    return 0;
}