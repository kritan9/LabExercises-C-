#include<stdio.h>
#include <stdlib.h>
typedef struct student{
    char name[20];
    int marks;
}stud;
void main()
{       int n,i;
        stud *a;
        printf("Enter the number of students");
        scanf(" %d",&n);
        a=(stud *)malloc(n*sizeof(stud));
        for(i=0;i<n;i++){
            printf("Enter The name and marks in C for student %d in 1st semester\t",i+1);
            scanf(" %[^'\n']s",(a+i)->name);
            scanf(" %d",&a[i].marks);
        }
            printf("Details of students are\nSN\tName\t\t\t\tMarks In C\n");
        for(i=0;i<n;i++){
            printf("%d\t%s\t\t\t%d\n",i+1,a[i].name,a[i].marks);
        }
        getch();
}
