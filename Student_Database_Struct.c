/*
 * Module: Student Record Keeper (Struct)
 * Author: Samir Raja
 * Description: Implements Structure Data Types to manage student metadata.
 */

#include <stdio.h>

struct Student {
    char name[50];
    char city[20];
    char contact[40];
    char course[60];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    printf("\n--- [ NEW STUDENT ENTRY ] ---\n");
    
    printf("[?] Enter Name: ");
    scanf("%s", s.name);
    
    printf("[?] Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("[?] Enter Marks: ");
    scanf("%f", &s.marks);
    
    printf("[?] Enter City: ");
    scanf("%s", s.city);
    
    printf("[?] Enter Contact: ");
    scanf("%s", s.contact);
    
    printf("[?] Enter Course: ");
    scanf("%s", s.course);
    
    // --- DISPLAY OUPUT ---
    printf("\n=============================\n");
    printf("      DATABASE RECORD        \n");
    printf("=============================\n");
    printf(" Name    : %s\n", s.name);
    printf(" ID/Roll : %d\n", s.roll);
    printf(" Course  : %s\n", s.course);
    printf(" City    : %s\n", s.city);
    printf(" Contact : %s\n", s.contact);
    printf(" GPA/Marks: %.2f\n", s.marks);
    printf("=============================\n");

    return 0;
}

