#include<stdio.h>

int main()
{

///Declared 10 account_holders account_numbers and balances ..

    int account_number1,account_number2,account_number3,account_number4,account_number5,account_number6,account_number7,account_number8,account_number9,account_number10;
    float balance1,balance2,balance3,balance4,balance5,balance6,balance7,balance8,balance9,balance10;

///First account_holders account_number and balance from User as input.
    printf("Please input account number of account_holders1: ");
    scanf("%d",&account_number1);
    printf("please input balance of account_holders1: ");
    scanf("%f",&balance1);
///Cheeking the condition.where minimum balance is 500 TK for opening an account.
    if(balance1<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number1 =0;
        balance1 =0;

    }
    else{
        printf("\n\n");
    }

///second account_holders account_number and balance from User as input.
    printf("\nPlease input account number of account_holders2: ");
    scanf("%d",&account_number2);
///Cheeking condition.where account number can not be same.
    if(account_number2 == account_number1)
    {
        account_number2 = 0;///invalid account.
        balance2 = 0;///invalid balance.
    }

///cheeking condition.where account number can not same.
    if(account_number2!=0)
    {
        printf("\nplease input balance of  account_holders2: ");
    scanf("%f",&balance2);
    ///cheeking condition.
    if(balance2<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number2 = 0;
        balance2 = 0;
    }
    else{
        printf("\n\n");
    }

    }

///Third  account_number and balance from User as input.
     printf("\nPlease input account number of  account_holders3: ");
    scanf("%d",&account_number3);
///Cheeking condition.where account number can not be same.
    if(account_number3==account_number2)
    {
        account_number3 = 0;
        balance3 = 0;
    }
    if(account_number3==account_number1)
    {
        account_number3 = 0;
        balance3 = 0;
    }

///cheeking condition.where account number can not same
    if(account_number3!=0)
    {
    printf("please input balance of  account_holders3: ");
    scanf("%f",&balance3);
    ///cheeking condition.
    if(balance3<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number3 = 0;
        balance3 = 0;
    }
    else{
        printf("\n\n");
    }
    }
///Four holders account_number and balance from User as input.
   printf("\nPlease input account number of  account_holders4: ");
    scanf("%d",&account_number4);
///Cheeking condition.where account number can not be same.
    if(account_number4==account_number3)
    {
        account_number4 = 0;
        balance4 = 0;
    }
    if(account_number4==account_number2)
    {
        account_number4 = 0;
        balance4 = 0;
    }
    if(account_number4==account_number1)
    {
        account_number4 = 0;
        balance4 = 0;
    }

///cheeking condition.where account number can not same
    if(account_number4!=0)
    {

    printf("please input balance of  account_holders4: ");
    scanf("%f",&balance4);
    ///cheeking condition
    if(balance4<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number4 = 0;
        balance4 = 0;
    }
    else{
        printf("\n\n");
    }

    }
///Fives account_number and balance from User as input.

    printf("Please input account number of  account_holders5: ");
    scanf("%d",&account_number5);
///Cheeking condition.where account number can not be same.
   if(account_number5==account_number4)
    {
        account_number5 = 0;
        balance5 = 0;
    }
    if(account_number5==account_number3)
    {
        account_number5 = 0;
        balance5 = 0;
    }
    if(account_number5==account_number2)
    {
        account_number5 = 0;
        balance5 = 0;
    }
    if(account_number3==account_number1)
    {
        account_number5 = 0;
        balance5 = 0;
    }
///cheeking condition.where account number can not same
    if(account_number5!=0)
        {
            printf("please input balance of  account_holders5: ");
    scanf("%f",&balance5);
    if(balance5<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number5 = 0;
        balance5 = 0;
    }


    else{
        printf("\n\n");
    }
    }
///six account number and balance from user as input.

    printf("Please input account number of  account_holders6: ");
    scanf("%d",&account_number6);
///Cheeking condition.where account number can not be same.
  if(account_number6==account_number5)
    {
        account_number6 = 0;
        balance6 = 0;
    }
    if(account_number6==account_number4)
    {
        account_number6 = 0;
        balance6 = 0;
    }
    if(account_number6==account_number3)
    {
        account_number6 = 0;
        balance6 = 0;
    }
    if(account_number6==account_number2)
    {
        account_number6 = 0;
        balance6 = 0;
    }
    if(account_number6==account_number1)
    {
        account_number6 = 0;
        balance6 = 0;
    }

  ///cheeking condition.where account number can not same
    if(account_number6!=0){
            printf("please input balance of  account_holders6: ");
    scanf("%f",&balance6);
    if(balance5<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number6 = 0;
        balance6 = 0;
    }

    else{
        printf("\n\n");
    }


    }

///seven account number and balance from user as input.
     printf("Please input account number of  account_holders7: ");
    scanf("%d",&account_number7);
///Cheeking condition.where account number can not be same.
     if(account_number7==account_number6)
    {
        account_number7 = 0;
        balance7 = 0;
    }
    if(account_number7==account_number5)
    {
        account_number7 = 0;
        balance7 = 0;
    }
    if(account_number7==account_number4)
    {
        account_number7 = 0;
        balance7 = 0;
    }
    if(account_number7==account_number3)
    {
        account_number7 = 0;
        balance7 = 0;
    }
    if(account_number7==account_number2)
    {
        account_number7 = 0;
        balance7 = 0;
    }
    if(account_number7==account_number1)
    {
        account_number7 = 0;
        balance7 = 0;
    }
///cheeking condition.where account number can not same
    if(account_number7!=0)
        {
            printf("please input balance of  account_holders7: ");
    scanf("%f",&balance7);
    if(balance5<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number7 = 0;
        balance7 = 0;
    }

    else{
        printf("\n\n");
    }
    }


  ///Eight account_holders account_number and balance from User as input.
    printf("Please input account number of  account_holders8: ");
    scanf("%d",&account_number8);
    ///Cheeking condition.where account number can not be same.
   if(account_number8==account_number7)
    {
        account_number8 = 0;
        balance8 = 0;
    }
    if(account_number8==account_number6)
    {
        account_number8 = 0;
        balance8 = 0;
    }
    if(account_number8==account_number5)
    {
        account_number8 = 0;
        balance8 = 0;
    }
    if(account_number8==account_number4)
    {
        account_number8 = 0;
        balance8 = 0;
    }
    if(account_number8==account_number3)
    {
        account_number8 = 0;
        balance8 = 0;
    }
    if(account_number8==account_number2)
    {
        account_number8 = 0;
        balance8 = 0;
    }
    if(account_number8==account_number1)
    {
        account_number8 = 0;
        balance8 = 0;
    }

      ///cheeking condition.where account number can not same
    if(account_number8!=0)
        {
            printf("please input balance of  account_holders8: ");
    scanf("%f",&balance8);
    if(balance5<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number8 = 0;
        balance8 = 0;
    }

    else{
        printf("\n\n");
    }
    }

///nine account_holders account_number and balance from User as input.

    printf("Please input account number of  account_holders9: ");
    scanf("%d",&account_number9);
    ///Cheeking condition.where account number can not be same.
    if(account_number9==account_number8)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number7)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number6)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number5)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number4)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number3)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number2)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number1)
    {
        account_number9 = 0;
        balance9 = 0;
    }

      ///cheeking condition.where account number can not same
    if(account_number9!=0)
        {
            printf("please input balance of  account_holders9: ");
    scanf("%f",&balance9);
    if(balance5<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number9 = 0;
        balance9 = 0;
    }
      if(account_number9==account_number8)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number7)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number6)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number5)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number4)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number3)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number2)
    {
        account_number9 = 0;
        balance9 = 0;
    }
    if(account_number9==account_number1)
    {
        account_number9 = 0;
        balance9 = 0;
    }


    else{
        printf("\n\n");
    }

    }
    ///Ten account_holders account_number and balance from User as input.
     printf("Please input account number of  account_holders10: ");
    scanf("%d",&account_number10);
    ///Cheeking condition.where account number can not be same.
    if(account_number10==account_number9)
    {
        account_number10 = 0;
        balance10 = 0;
    }
      if(account_number10==account_number8)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number7)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number6)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number5)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number4)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number3)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number2)
    {
        account_number10 = 0;
        balance10 = 0;
    }
    if(account_number10==account_number1)
    {
        account_number10 = 0;
        balance10 = 0;
    }

///cheeking condition.where account number can not same
    if(account_number10!=0)
        {
            printf("please input balance of  account_holders10: ");
    scanf("%f",&balance10);
    if(balance5<500)
        {
        printf("Sorry your entered amount is not sufficient\n");
        account_number10 = 0;
        balance10 = 0;
        }

      else
        printf("\n\n");
        }

        ///printing ten account_holders account number and balance..

        printf("Account Number of Account holders1:%d",account_number1);
        printf("Balance of Account holders1:%d",balance1);

        printf("Account Number of Account holders2:%d",account_number2);
        printf("Balance of Account holders2:%d",balance2);

        printf("Account Number of Account holders3:%d",account_number3);
        printf("Balance of Account holders3:%d",balance3);

        printf("Account Number of Account holders4:%d",account_number4);
        printf("Balance of Account holders4:%d",balance4);

        printf("Account Number of Account holders5:%d",account_number5);
        printf("Balance of Account holders5:%d",balance5);

        printf("Account Number of Account holders6:%d",account_number6);
        printf("Balance of Account holders6:%d",balance6);

        printf("Account Number of Account holders6:%d",account_number6);
        printf("Balance of Account holders6:%d",balance6);

        printf("Account Number of Account holders7:%d",account_number8);
        printf("Balance of Account holders7:%d",balance8);



        printf("Account Number of Account holders9:%d",account_number9);
        printf("Balance of Account holders9:%d",balance9);


        printf("Account Number of Account holders10:%d",account_number10);
        printf("Balance of Account holders10:%d",balance10);

}


