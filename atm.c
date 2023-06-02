#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
    system("color 4f");
    float balance=100000;
    int amount=1;
    int option,count=0;
    int pin=2060;
    int enterpin;
    int continuetranscation=1;
    
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t%s",ctime(&now));

    printf("\n\t\t\t************** Welcome to NICASIA ATM **************");
    
    while(pin!=enterpin)
    {
    printf("\n");
    printf("Enter a pin : ");
    scanf("%d",&enterpin);
    if(enterpin!=pin)
    {
        Beep(610,500);
        printf("invalid pin!!");
    }

    count++;
    if(count==3 && pin!=enterpin)
    {
        exit(0);
    }
      }

      while(continuetranscation!=0){   
      printf("\n\t**************following services are available==============");

      printf("\n\t\t1.withdraw:");
      printf("\n\t\t2.deposite:");
      printf("\n\t\t3.check balance:");

      printf("\n\t\t please select the option:");
      scanf("%d",&option);

      switch(option)
      {
        case 1:
            while(amount %500!=0)
            {
                printf("\n\tenter a amount:");
                scanf("%d",&amount);
                if(amount %500!=0)
                printf("\n\t amount should be multiple of 500");
            }
            if(balance<amount)
            {
                printf("\n\t sorry you have insufficent balance" );
                amount=1;
                break;
            }
            else{
                balance -=amount;
                printf("\n\t you have withdraw Rs %d. your new balance is %.2f",amount,balance);
                amount=1;
                break;
            }

            case 2:
            printf("\n\t\t please enter a amount: ");
            scanf("%d",&amount);
            balance+=amount;
            printf("\n\t\t you have deposite RS.%d . your new balance is RS %.2f",amount,balance);
            amount=1;
            break;

            case 3:
            printf("\n\t\t your balance is rs.%2f",balance);
            break;

            default:
            Beep(610,500);
            printf("invalid option!!!!");
      }
      
      printf("\n\t\t do you want to continue a transcation?press 1[yes],0[no]");
      scanf("%d",&continuetranscation);
       }

        return(0);
} 