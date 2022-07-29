#include <stdio.h>
#include <stdlib.h>

int TotalAmount=0,TotalWithdrow =0,Totaldiposite =0;
int TotalTransfer=0;
int dip,with,Tr,chack;
char name[20];
int a,ch,acc;
int main()
{
    printf("\n WELCOME TO MY ATM");
    printf("\nEnter your name :");
    gets(name);
    printf("Enter your account number :");
    scanf("%d",&a);
    while(1)
    {
    printf("\n******************************************\n");
    printf("\n 1.diposite amount");
    printf("\n 2.withdrow amount");
    printf("\n 3.transfer amount");
    printf("\n 4.chack amount details");
    printf("\n 5.exit from own account");
    printf("\n Enter your choice :");
    scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            printf("Enter your amount for diposite :");
            scanf("%d",&dip);
            TotalAmount=TotalAmount+dip;
            printf("your  amount is Diposite  :%d",TotalAmount);
            Totaldiposite=Totaldiposite+dip;
            break;

        case 2:
            printf("\n******************************************\n");
            printf("Enter your amount you want to withdrow :");
            scanf("%d",&with);
            if(with<=TotalAmount){
            TotalAmount=TotalAmount-with;
            TotalWithdrow=TotalWithdrow+with;
            printf("\n your amount is Withdrow :%d",TotalWithdrow);
            }
            else
                printf("your Amount is very less");
            break;

        case 3:
            printf("\n******************************************\n");
            printf("Enter your amount for transfer :");
            scanf("%d",&Tr);
            if(Tr<=TotalAmount){
             TotalAmount=TotalAmount-Tr;
              TotalTransfer=TotalTransfer+Tr;
              printf("\n your  amount is Transfer :%d",TotalTransfer);
            }
             else
            printf("your amount is very less");
            break;

        case 4:
             printf("\n******************************************\n");
             printf("\n your total Amount is :%d",TotalAmount);
             printf("\n your diposite Amount is :%d",Totaldiposite);
             printf("\n your withrow Amount is :%d",TotalWithdrow);
             printf("\n your transfer Amount is :%d",TotalTransfer);
             break;

        case 5:
            printf("\n**********************************************\n");
             printf("\n your Name is :%s",name);
             printf("\n your Account Number is :%d",a);
             printf("\n your Remaining Amount is :%d",TotalAmount);
             printf("\n your diposite Amount is :%d",Totaldiposite);
             printf("\n your withrow Amount is :%d",TotalWithdrow);
             printf("\n your transfer Amount is :%d",TotalTransfer);
             printf("\n************THANK YOU FOR USING*****************\n");
             exit(0);

        default:
            printf("\n invalid choice");
        }
    }


return 0;
}
