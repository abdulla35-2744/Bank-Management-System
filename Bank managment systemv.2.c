#include<stdio.h>

int main()
{

///Declared 10 account_holders account_numbers and balances ..
    int account_number[10];
    float balance[10];

///First account_holders account_number and balance from User as input.
    printf("Please input account number of account_holders1: ");
    scanf("%d",&account_number[0]);
    printf("please input balance of account_holders1: ");
    scanf("%f",&balance[0]);
///Cheeking the condition.where minimum balance is 500 TK for opening an account.
    if(balance[0]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[0] =0;
        balance[0] =0;

    }

    else{
        printf("\n\n");
    }

///second t_holders account_number and balance from User as input.
    printf("\nPlease input account number of account_holders2: ");
    scanf("%d",&account_number[1]);
///Cheeking condition.where account number can not be same.
    if(account_number[1]==account_number[0])
    {
        account_number[1] = 0;///invalid account
        balance[1] = 0;///invalid balance
    }
///cheeking condition.where account number can not same
    if(account_number[1]!=0)
    {
        printf("\nplease input balance of  account_holders2: ");
    scanf("%f",&balance[1]);
///cheeking condition
    if(balance[1]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[1] = 0;
        balance[1] = 0;
    }
    else{
        printf("\n\n");
    }

    }
///Third  account_number and balance from User as input.
     printf("\nPlease input account number of  account_holders3: ");
    scanf("%d",&account_number[2]);
///Cheeking condition.where account number can not be same.
    if(account_number[2]==account_number[1])
    {
        account_number[2] = 0;
        balance[2] = 0;
    }
    if(account_number[2]==account_number[0])
    {
        account_number[2] = 0;
        balance[2] = 0;
    }

///cheeking condition.where account number can not same
     if(account_number[2]!=0)
    {
    printf("please input balance of  account_holders3: ");
    scanf("%f",&balance[2]);
///cheeking condition
    if(balance[2]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[2] = 0;
        balance[2] = 0;
    }
    else
        {
        printf("\n\n");
    }
    }
///Four holders account_number and balance from User as input.
   printf("\nPlease input account number of  account_holders4: ");
    scanf("%d",&account_number[3]);
///Cheeking condition.where account number can not be same.
    if(account_number[3]==account_number[2])
    {
        account_number[3] = 0;
        balance[3] = 0;
    }
    if(account_number[3]==account_number[1])
    {
        account_number[3] = 0;
        balance[3] = 0;
    }
    if(account_number[3]==account_number[0])
    {
        account_number[3] = 0;
        balance[3] = 0;
    }

///cheeking condition.where account number can not same
     if(account_number[3]!=0)
    {

    printf("please input balance of  account_holders4: ");
    scanf("%f",&balance[3]);
    if(balance[3]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[3] = 0;
        balance[3] = 0;
    }
    else{
        printf("\n\n");
    }

    }
///Fives account_number and balance from User as input.

    printf("Please input account number of  account_holders5: ");
    scanf("%d",&account_number[4]);
///Cheeking condition.where account number can not be same.
   if(account_number[4]==account_number[3])
    {
        account_number[4] = 0;
        balance[4] = 0;
    }
    if(account_number[4]==account_number[2])
    {
        account_number[4] = 0;
        balance[4] = 0;
    }
    if(account_number[4]==account_number[1])
    {
        account_number[4] = 0;
        balance[4] = 0;
    }
    if(account_number[4]==account_number[0])
    {
        account_number[4] = 0;
        balance[4] = 0;
    }
///cheeking condition.where account number can not same
     if(account_number[4]!=0)
        {
            printf("please input balance of  account_holders5: ");
    scanf("%f",&balance[4]);
///cheeking condition..
    if(balance[4]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[4] = 0;
        balance[4] = 0;
    }


    else{
        printf("\n\n");
    }
    }
///six account number and balance from user as input.

    printf("Please input account number of  account_holders6: ");
    scanf("%d",&account_number[5]);
///Cheeking condition.where account number can not be same.
  if(account_number[5]==account_number[4])
    {
        account_number[5] = 0;
        balance[5] = 0;
    }
    if(account_number[5]==account_number[3])
    {
        account_number[5] = 0;
        balance[5] = 0;
    }
    if(account_number[5]==account_number[2])
    {
        account_number[5] = 0;
        balance[5] = 0;
    }
    if(account_number[5]==account_number[1])
    {
        account_number[5] = 0;
        balance[5] = 0;
    }
    if(account_number[5]==account_number[0])
    {
        account_number[5] = 0;
        balance[5] = 0;
    }

  ///cheeking condition.where account number can not same
     if(account_number[5]!=0)
        {
            printf("please input balance of  account_holders6: ");
    scanf("%f",&balance[5]);
    if(balance[5]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[5] = 0;
        balance[5] = 0;
    }

    else{
        printf("\n\n");
    }


    }

///seven account number and balance from user as input.
     printf("Please input account number of  account_holders7: ");
    scanf("%d",&account_number[6]);
///Cheeking condition.where account number can not be same.
     if(account_number[6]==account_number[5])
    {
        account_number[6] = 0;
        balance[6] = 0;
    }
    if(account_number[6]==account_number[4])
    {
        account_number[6] = 0;
        balance[6] = 0;
    }
    if(account_number[6]==account_number[3])
    {
        account_number[6] = 0;
        balance[6] = 0;
    }
    if(account_number[6]==account_number[2])
    {
        account_number[6] = 0;
        balance[6] = 0;
    }
    if(account_number[6]==account_number[1])
    {
        account_number[6] = 0;
        balance[6] = 0;
    }
    if(account_number[6]==account_number[0])
    {
        account_number[6] = 0;
        balance[6] = 0;
    }

///cheeking condition.where account number can not same
     if(account_number[6]!=0)
        {
            printf("please input balance of  account_holders7: ");
    scanf("%f",&balance[6]);
    if(balance[6]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[6] = 0;
        balance[6] = 0;
    }

    else{
        printf("\n\n");
    }
    }


  ///Eight account_holders account_number and balance from User as input.
    printf("Please input account number of  account_holders8: ");
    scanf("%d",&account_number[7]);
    ///Cheeking condition.where account number can not be same.
   if(account_number[7]==account_number[6])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
    if(account_number[7]==account_number[5])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
    if(account_number[7]==account_number[4])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
    if(account_number[7]==account_number[3])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
    if(account_number[7]==account_number[2])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
    if(account_number[7]==account_number[1])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
    if(account_number[7]==account_number[0])
    {
        account_number[7] = 0;
        balance[7] = 0;
    }
///cheeking condition.where account number can not same
     if(account_number[7]!=0)
        {
            printf("please input balance of  account_holders8: ");
    scanf("%f",&balance[7]);
    if(balance[7]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[7] = 0;
        balance[7] = 0;
    }

    else{
        printf("\n\n");
    }
    }

///nine account_holders account_number and balance from User as input.

    printf("Please input account number of  account_holders9: ");
    scanf("%d",&account_number[8]);
    ///Cheeking condition.where account number can not be same.
    if(account_number[8]==account_number[7])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[6])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[5])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[4])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[3])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[2])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[1])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }
    if(account_number[8]==account_number[0])
    {
        account_number[8] = 0;
        balance[8] = 0;
    }

    ///cheeking condition.where account number can not same
     if(account_number[8]!=0)
        {
            printf("please input balance of  account_holders9: ");
    scanf("%f",&balance[8]);
    if(balance[8]<500){
        printf("Sorry your entered amount is not sufficient\n");
        account_number[8] = 0;
        balance[8] = 0;
    }

    else{
        printf("\n\n");
    }
    }


    ///Ten account_holders account_number and balance from User as input.
     printf("Please input account number of  account_holders10: ");
    scanf("%d",&account_number[9]);
    ///Cheeking condition.where account number can not be same.
    if(account_number[9]==account_number[8])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
      if(account_number[9]==account_number[7])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[6])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[5])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[4])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[3])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[2])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[1])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }
    if(account_number[9]==account_number[0])
    {
        account_number[9] = 0;
        balance[9] = 0;
    }



///cheeking condition.where account number can not same
     if(account_number[9]!=0)
        {
            printf("please input balance of  account_holders10: ");
    scanf("%f",&balance[9]);
    if(balance[9]<500)
        {
        printf("Sorry your entered amount is not sufficient\n");
        account_number[9] = 0;
        balance[9] = 0;
        }

      else
        printf("\n\n");
        }


        ///printing ten account_holders account number and balance..

        printf("Account Number of Account holders1:%d",account_number[0]);
        printf("Balance of Account holders1:%d",balance[0]);

        printf("Account Number of Account holders2:%d",account_number[1]);
        printf("Balance of Account holders2:%d",balance[1]);

        printf("Account Number of Account holders3:%d",account_number[2]);
        printf("Balance of Account holders3:%d",balance[2]);

        printf("Account Number of Account holders4:%d",account_number[3]);
        printf("Balance of Account holders4:%d",balance[3]);

        printf("Account Number of Account holders5:%d",account_number[4]);
        printf("Balance of Account holders5:%d",balance[4]);

        printf("Account Number of Account holders6:%d",account_number[5]);
        printf("Balance of Account holders6:%d",balance[5]);

        printf("Account Number of Account holders6:%d",account_number[6]);
        printf("Balance of Account holders6:%d",balance[6]);

        printf("Account Number of Account holders7:%d",account_number[7]);
        printf("Balance of Account holders7:%d",balance[7]);



        printf("Account Number of Account holders9:%d",account_number[8]);
        printf("Balance of Account holders9:%d",balance[8]);


        printf("Account Number of Account holders10:%d",account_number[9]);
        printf("Balance of Account holders10:%d",balance[9]);

}



