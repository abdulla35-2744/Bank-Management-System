#include<stdio.h>


int main()
{


///Declared 10 account_holders account_numbers and balances ..
   int account_number[10];
   float balance[10];
   int counter= 0,counter1=0;

///Using nested Loop for account_holders account_number and balance from User as input.
    for(counter=0; counter<=9;counter++){

            printf("Please input account number of account_holders %d:",counter+1);
            scanf("%d",&account_number[counter]);


///Using Loop for cheeking condition.where account number can not be same..
            for(counter1=0; counter1<=counter-1; counter1++){

                     if(account_number[counter]==account_number[counter1])
                     {
                          printf("Account are Same\n");
                          account_number[counter] = 0;///invalid account
                          balance[counter] = 0;///invalid balance
                          break;
                     }
            }
    ///cheeking condition.where account number can not same
            if(account_number[counter]!=0)
            {
                printf("\nplease input balance of  account_holders %d:",counter+1);
                scanf("%f",&balance[counter]);
                if(balance[counter]<500){
                    printf("Sorry your entered amount is not sufficient\n");
                    account_number[counter] = 0;
                    balance[counter] = 0;
                }
            }
                else{
                   printf("\n\n");
                }

            }


///printing ten account holders account number and balance...

    for(counter=0;counter<=9;counter++){
        if(account_number[counter]!=0){
           printf("Account number of Account_holders:%d\n",account_number[counter]);
           printf("Account balance of Account_holders: %f\n",balance[counter]);
        }
        else{
          printf("\n\n\n");
        }
    }
    return 0;
}

