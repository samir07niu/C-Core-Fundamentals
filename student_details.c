#include <stdio.h>
struct student{
    char name[50];
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
    
    printf("\n---student details---\n");
    printf("name:%s\n",s.name);
    printf("roll:%d\n",s.roll);
    printf("marks:%2f\n",s.marks);
    return 0;
}