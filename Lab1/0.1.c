#include <stdio.h>
#include <stdlib.h>
typedef struct{
   long month[12];
    long sum,average;
}expense;
void main(){
    int i,j,sYear,eYear;
    printf("Enter starting and ending years\t");
    scanf(" %d %d",&sYear,&eYear);
    expense *e;
    e=(expense*)malloc((eYear-sYear+1)*sizeof(expense));
    for(i=sYear;i<=eYear;i++){
        printf("Enter the monthly expenditure for year %d\n",i);
        for(j=0;j<12;j++){
            printf("Month %d:\t",j+1);
            scanf(" %ld",&e[i-sYear].month[j]);
            if(j==0) e[i-sYear].sum=e[i-sYear].month[j];
            else e[i-sYear].sum+=e[i-sYear].month[j];
        }
        e[i-sYear].average=e[i-sYear].sum/12;
    }
    printf("\n\nExpenditure Table\n\n");
    printf("%-6s%-20s%-20s\n","Year","Total Expenditure","Monthly Average");
    for(i=0;i<eYear-sYear+1;i++)
        printf("%-6d%-20ld%-20ld\n",i+sYear,e[i].sum,e[i].average);
    getch();
}
