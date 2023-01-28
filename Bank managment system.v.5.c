#include<stdio.h>

///structure operation using here.
 struct accountholder_info{
    int account_number;
    float balance;
    float last_deposit;
    float last_withdraw;

};


int main()
{


///Declared 10 account_holders account_numbers and balances in account_holders info
   struct accountholder_info accountholder[10];

   int counter= 0,counter1=0;

///Using nested Loop for account_holders account_number and balance from User as input.
    for(counter=0; counter<=9;counter++){

            printf("Please input account number of account_holders %d:",counter+1);
            scanf("%d",&accountholder[counter].account_number);

///Using Loop for cheeking condition.where account number can not be same..
            for(counter1=0; counter1<=counter-1; counter1++){

                     if(accountholder[counter].account_number==accountholder[counter1].account_number)
                     {
                          printf("Account are Same\n");
                          accountholder[counter].account_number = 0;///invalid account
                          accountholder[counter].balance = 0;///invalid balance
                          break;
                     }

            }
    ///cheeking condition.where account number can not same
            if(accountholder[counter].account_number!=0)
            {
                printf("\nplease input balance of  account_holders %d:",counter+1);
                scanf("%f",&accountholder[counter].balance);
                if(accountholder[counter].balance<500){
                    printf("Sorry your entered amount is not sufficient\n");
                    accountholder[counter].account_number = 0;
                    accountholder[counter].balance = 0;
                }
                else{
                    printf("\n\n");
                }

            }
        }

///printing ten account holders account number and balance...

             for(counter=0;counter<=9;counter++){
                 if(accountholder[counter].account_number!=0){

                printf("Account number of Account_holders:%d\n",accountholder[counter].account_number);
                printf("Account balance of Account_holders: %f\n",accountholder[counter].balance);
                }
                else{
                    printf("\n\n\n");
               }
           }
///Add Money deposit  in this system.
            printf("\nMoney Deposit in Bank Management System\n\n");
///using loop for deposit money
            for(counter=0; counter<=9; counter++){
                if(accountholder[counter].account_number!=0){
                    printf("Enter last Deposit Amount: ");
                    scanf("%f",&accountholder[counter].last_deposit);
                    accountholder[counter].last_deposit = accountholder[counter].last_deposit+accountholder[counter].balance;

                }

            }
            printf("\n\n");
///printing ten account_holders account number,balance and last deposit.
            for(counter=0;counter<=9;counter++){
                 if(accountholder[counter].account_number!=0){

                    printf("Account number of Account_holders:%d  ",accountholder[counter].account_number);
                    printf("Last Deposit Amount:%f",accountholder[counter].last_deposit);
                    printf("Account balance of Account_holders: %f\n",accountholder[counter].balance);
                 }
                else{
                    printf("\n\n\n");
               }
           }

///Add money withdraw in this system.
           printf("\nMoney Withdraw in Bank Management System\n: ");
    ///using loop for withdraw ten account_holders.
           for(counter=0; counter<=9; counter++){
            if(accountholder[counter].account_number!=0){
                printf("Enter Last Withdraw Amount: ");
                scanf("%f",&accountholder[counter].last_withdraw);
///using condition for cheeking balance 500 TAkA more than your account
                if(accountholder[counter].balance>=accountholder[counter].last_withdraw){
                    printf("Insufficient balance to withdraw");
                }

                accountholder[counter].last_withdraw = accountholder[counter].last_withdraw-accountholder[counter].balance;
            }
           }

///printing ten account_holders account number,balance and last withdraw..
           for(counter=0;counter<=9;counter++){
                 if(accountholder[counter].account_number!=0){

                    printf("Account number of Account_holders:%d  ",accountholder[counter].account_number);
                    if(accountholder[counter].last_withdraw!=0){
                        printf("Last Withdraw Amount:%f",accountholder[counter].last_withdraw);
                    }
                    printf("Account balance of Account_holders: %f\n",accountholder[counter].balance);
                 }
                else{
                    printf("\n\n\n");
               }
           }

    }


