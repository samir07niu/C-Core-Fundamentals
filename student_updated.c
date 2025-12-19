#include <stdio.h>
struct student{
    char name[50];
    char city[20];
    char contact[40];
    char course[60];
    int roll;
    float marks;

};
int main(){
    struct student s;
    printf("enter name:");
    scanf("%s", &s.name);
    
    printf("enter roll number:");
    scanf("%d", &s.roll);

    printf("enter marks:");
    scanf("%f", &s.marks);
    
    printf("enter city:");
    scanf("%s", &s.city);
    
    printf("enter contact:");
    scanf("%s",&s.contact);
    
    printf("enter course:");
    scanf("%s", &s.course);
    
    printf("\n---student details---\n");
    printf("name:%s\n",s.name);
    printf("roll:%d\n",s.roll);
    printf("marks:%2f\n",s.marks);
    printf("city:%s\n",s.city);
    printf("contact:%s\n",s.contact);
    printf("course:%s\n",s.course);
    return 0;
}