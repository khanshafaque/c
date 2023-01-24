#include <stdio.h>

int main()

{

char name[25][25];

int marks[10],i;

for(i=0;i<5;i++)

{

printf("\n Enter the name of the student");

scanf("%s",name[i]);

printf("\n Enter Mark of Student");

scanf("%d",&marks[i]);

}

for(i=0;i<5;i++)

{

printf("\n Name : %s Marks : %d",name[i],marks[i]);

}

return 0;

}