#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char name[20],roll[10],phone[20],address[20];
}stud;
void main()
{       int n,i,j,k;
        stud *a,*b,temp;
        FILE *fp;
        printf("Enter the number of students in your class\t");
        scanf(" %d",&n);
        a=(stud *)malloc(n*sizeof(stud));
        b=(stud *)malloc(n*sizeof(stud));
        for(i=0;i<n;i++){
            printf("Enter The name, roll no, address, and phone num for student %d\t",i+1);
            scanf(" %[^'\n']s",(a+i)->name);
            scanf(" %s %s %s",a[i].roll,a[i].phone,a[i].address);
        }
        fp=fopen("student.bin","wb+");
        if(fp==NULL){
            printf("Error");
            exit(1);
        }
        fwrite(a,n,sizeof(stud),fp);
        rewind(fp);
        fread(b,n,sizeof(stud),fp);
        for(i=0;i<n;i++){
                k=0;
            for(j=0;j<n-1;j++){
                if(strcmp(b[j].name,b[j+1].name)>0){
                    temp=b[j]; b[j]=b[j+1]; b[j+1]=temp;
                    k++;
                }
            }
            if(k!=0) break;
        }

            printf("Details of students are\n%-5s%-20s%-20s%-20s%-20s\n","SN","Name","ROll No","Phone","Address");
        for(i=0;i<n;i++){
            printf("%-5d%-20s%-20s%-20s%-20s\n",i+1,b[i].name,b[i].roll,b[i].phone,b[i].address);
        }
        getch();
}
