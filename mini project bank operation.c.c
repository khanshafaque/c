#include<stdio.h>
#include<conio.h>
int list();
void diposite();
void last();
void transfer();
void withdrow();
void checkdetail();
int totalamount=1000,amount,amo,tr,totaldiposite=0,totalwithdrow=0,totaltr=0;

int Acc;
char a[50];
void main()
{


printf("\n enter your name:");
gets(a);
printf("\n enter your acount number:");
scanf("%d",&Acc);

while(1)
{
switch (list())
{
case 1:
diposite();
totaldiposite+=amount;
break;
case 2:
     withdrow();
if(amo<=totalamount)
 totalwithdrow+=amo;
 break;
case 3:
     transfer();
if(tr<=totalamount)
totaltr+=tr;
case 4:
    checkdetail();
    break;
case 5:
    last();
    getch();


        exit(0);
        default:
    printf("\n invalid choise :");
  }//end of switch
  getch();



   }//end of while

}


int list()
{
    int ch;
    printf("\n1,diposite amount :");
    printf("\n2, withdrow amount : ");
    printf("\n3, transfer amount :");
    printf("\n4, check detail:");
    printf("\n5, exit: ");
    printf("\n6, enter your choice :");
    scanf("%d",&ch);
return(ch);
}
void diposite()
{
    printf("\n,enter the amount you want to diposite:");
    scanf("%d",&amount);
    totalamount+=amount;
}
void withdrow()
{
  printf("\n enter the amount you wish to withdrow:");
  scanf("%d",&amo);
  if(amo<=totalamount)
    totalamount-=amo;
  else
    printf("\n less amount withdrow is not possible:");
}
void transfer()
{
    printf("enter the amount you want to transfer:");
    scanf("%d",&tr);
    if(tr<=totalamount)
        totalamount-=tr;
    else
        printf("less amount transfer is not possible:");



}
void checkdetail()
{
    printf("\n total amount=%d",totalamount);
    printf("\n total diposited amount=%d",totaldiposite);
    printf("\n total withdrown amount=%d",totalwithdrow);
    printf("\n total transfered amount=%d",totaltr);
}
void last()
{
    printf("\n********\n");
    printf("\n your name=%s",a);
    printf("\n acount number=%d",Acc);
    printf("\n total amount=%d",totalamount);
    printf("\n total diposited amount=%d",totaldiposite);
    printf("\n total withdrown amount=%d",totalwithdrow);
    printf("\n total transfered amount=%d",totaltr);
    printf("\n \n THANKS****THANKS**");
}