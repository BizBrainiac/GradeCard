#ifndef MK_H
#define MK_H

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    char name[50];
    float ISA1[5];
    float ISA2[5];
    float avg1;
    float avg2;
    char grade1;
    char grade2;
} Student;

// Function declarations
void inputStudentData(Student *student);
float calAvg(float marks[], int size);
char gradeAssignment(float avg);
void calculateAverageAndGrade(Student *student);
void genGradeCard(char name[], char grade1, char grade2);
Student* findStudentByName(Student *students, int num_students, const char *name);

#endif // MK_H
