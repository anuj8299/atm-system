#include <stdio.h>
#include <stdlib.h>
unsigned long amount = 1000, deposit, withdraw;
int choice, pin,pass, k,count=1;
char transaction = 'y';
void password()
{
  printf("ENTER YOUR 4-DIGIT SECRET PIN NUMBER:");

    scanf("%d", & pin);
    if(pin!=1520 && count!=3){
        printf("PLEASE ENTER VALID PASSWORD! \a\n");
        count++;
        password();
    }
    else if(count==3)
      printf("TOO MANY INCORRECT ATTEMPTS . TRY AFTER SOME TIME\n");

}
void balance()
{
printf("\n YOUR BALANCE IS : Rs. %lu ", amount);
}
void withdrawamount()
{
     printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

      scanf("%lu", & withdraw);

      if (withdraw % 100 != 0)

      {

        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

      } else if (withdraw > (amount - 500))
      {

        printf("\n INSUFFICENT BALANCE");
      } else

      {

        amount = amount - withdraw;
        printf("DO YOU WANT RECEIPT ?");
        printf("\n\n PLEASE COLLECT CASH");

        printf("\n YOUR CURRENT BALANCE IS Rs. %lu", amount);
      }
}
void depositamount()
{
      printf("\n ENTER THE AMOUNT TO DEPOSIT ");

      scanf("%lu", & deposit);
      if (deposit%100!=0)
       printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

      else{
      amount = amount + deposit;
      printf("YOUR BALANCE IS Rs. %lu", amount);
      }

}
void main()
{
  
password();

  do

  {

    printf("\n*Welcome to XYZ Bank ATM Service\n");

    printf("1. Check Balance\n");

    printf("2. Withdraw Cash\n");

    printf("3. Deposit Cash\n");

    printf("4. Quit\n");

    printf("**\n\n");

    printf("Enter your choice: ");

    scanf("%d", & choice);

    switch (choice)
    {

    case 1:balance();break;

    case 2:withdrawamount();break;

    case 3:depositamount();break;

    case 4:

      printf("\n THANK YOU FOR USING XYZ Bank ATM");
      exit(0);      

    default:
      printf("\n INVALID CHOICE !");
    }

    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

    fflush(stdin);

    scanf("%c", & transaction);

    if (transaction == 'n' || transaction == 'N')
      k = 1;

  } while (!k);

  printf("\n\n THANKS FOR USING XYZ Bank ATM SERVICE !");

}