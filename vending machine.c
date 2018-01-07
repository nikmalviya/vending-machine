
#include<stdio.h>
#include<windows.h>
void billing(int);
void menu(); // declaration of  menu
void cold_drinks();// declaration for cold_drinks
void ice_cream();// declaration for ice cream
void fast_food();// declaration for fast food
void main()
{
    menu();// calling menu function
}
void menu()
{
    system("cls");
    printf("\n\n*****VENDING MACHINE*****\n\n");
    printf("    [1] COLD DRINKS\n");
    printf("    [2] FAST FOOD\n");
    printf("    [3] ICE CREAM\n");
    printf("Enter Your Choice :-");
    char option;
    option = getche();
    switch(option)
    {
    case '1':
        cold_drinks();// calling cold drinks function
        break;
    case '2':
        fast_food();// calling fast food function
        break;
    case '3':
        ice_cream();// calling ice cream function
        break;
    default:
        printf("\n\n\tINVALID INPUT");// showing invalid message when user enter in valid input
        menu();// calling menu function
    }
}
void cold_drinks()
{
    system("cls");
    printf("\n\n*****COLD DRINKS*****\n\n");
    printf("    [1] PEPSI\n");
    printf("    [2] THUMBS UP\n");
    printf("    [3] MOUNTAIN DUO\n");
    printf("    [4] SLICE\n");
    printf("Enter Your Choice :-");
    char option;
    option = getche();
    int x,amt;
    char ch;
    switch(option)
    {
    case '1':/* in case1 it displays price and quantity of the product pepsi and it asks for quantity to enter
            then it confirms whether he want to confirm or not then proceed and displays total amount to pay  */
        printf("\n\tPrice of PEPSI is :- RS 15");
        printf("\n\tQuantity : 200ml");
        pepsi:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto pepsi;
        x=x*15;
        printf("\n\tYou Have to Pay RS %d",x);
        billing(x);
        break;
    case '2':/* it displays price of the product and after it asks for to enter quantity then it will
        display total amount to be paid*/
        printf("\n\tPrice of THUMBS UP is :- RS 14");
        printf("\n\tQuantity : 200ml");
        thumb:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto thumb;
        x=x*14;
        printf("\n\tYou Have to Pay RS %d",x);
       billing(x);
        break;
    case '3':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of MOUNTAIN DEO is :- RS 17");
        printf("\n\tQuantity : 200ml");
        mountain:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto mountain;
                x=x*17;
        printf("\n\tYou Have to Pay RS %d",x);
        billing(x);
        break;
    case '4':
        printf("\n\tPrice of SLICE is :- RS 13");
        printf("\n\tQuantity : 200ml");
        slice:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto slice;
        x=x*13;
        printf("\n\tYou Have to Pay RS %d",x);
        billing(x);
        break;
    default:/*If user will not enter above mentioned cases then this block will execute*/
        printf("\n\n\tINVALID INPUT");
        menu();
    }
}
void fast_food()
{
    system("cls");
    printf("\n\n*****FAST FOOD*****\n\n");
    printf("    [1] PIZZA\n");
    printf("    [2] BURGER\n");
    printf("    [3] SANDWITCH\n");
    printf("Enter Your Choice :-");
    char option;
    option = getche();// fetches one character as input*/
    int x,amt;
    char ch;
    switch(option)
    {
    case '1':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of PIZZA is :- RS 120");
        printf("\n\tSize : Medium");
        pizza:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x); // fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto pizza;
        x=x*120;
        printf("\n\tYou Have to Pay RS %d",x);
       billing(x);
        break;
    case '2':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of BURGER is :- RS 70");
        printf("\n\tSize : Medium");
        burger:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto burger;
        x=x*70;// calculating amount to pay
        printf("\n\tYou Have to Pay RS %d",x);
       billing(x);
        break;
    case '3':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of SANDWITCH is :- RS 50");
        printf("Size : Small");
        sandwitch:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto sandwitch;
        x=x*50;// calculating amount to pay
        printf("\n\tYou Have to Pay RS %d",x);
       billing(x);
        break;
    default:// if user enters wrong input then this block of code will be executed
        printf("\n\n\tINVALID INPUT");
        menu();// calling menu function
    }
}
void ice_cream()
{
    system("cls");
    printf("\n\n*****ICE CREAM*****\n\n");
    printf("    [1] VANILA\n");
    printf("    [2] CHOCOLATE\n");
    printf("    [3] STRAWBERRY\n");
    printf("Enter Your Choice :-");
    char option;
    option = getche();
    int x,amt;
    char ch;
    switch(option)
    {
    case '1':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of VANILA is :- RS 60");
        printf("\n\tQuantity : 50ml");
        vanila:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto vanila;
        x=x*60;// calculating amount to pay
        printf("\n\tYou Have to Pay RS %d",x); // displays amount to pay
        billing(x);
        break;
    case '2':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of CHOCOLATE is :- RS 50");
        printf("\n\tQuantity : 50ml");
        choc:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches amount
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto choc;
        x=x*50;// calculating amount to pay
        printf("\n\tYou Have to Pay RS %d",x);
        billing(x);
        break;
    case '3':/*It will ask for user to enter quantity then it will ask for to enter amount then it will display the remaining amount */
        printf("\n\tPrice of STRAWBERRY is :- RS 70");
        printf("\n\tQuantity : 50 ml");
        straw:
        printf("\n\tEnter Quantity:-");
        scanf("%d",&x);// fetches quantity
        printf("Confirm Your Order [Y/N]:-");
        ch=getche();
        if(ch=='N'||ch=='n')
            goto straw;
        x=x*70;// calculating amount to pay
        printf("\n\tYou Have to Pay RS %d",x);
        billing(x);
        break;
    default:// when user enters wrong input then this block will be executed
        printf("\n\n\tINVALID INPUT"); // error message when entering wrong input
        menu(); //calling menu function
    }
}
void billing(int x)
{
    int amt;
    char ch;
        printf("\n\tEnter Amount:-");
        scanf("%d",&amt);// fetches amount
        if(amt<x)
        {
            printf("\n\tInsufficient Amount");// error message when user enters insufficient amount
            menu(); //calling main function
        }
        else {

            printf("\n\tYour Change : %d",amt-x); // displays remaining amount
            printf("\n\tPlease Collect Your Change...");
        }
        printf("\nDO YOU WISH TO BUY ANY THING MORE? [Y/N] :");
        ch=getche();
        if(ch=='Y'||ch=='y')
            menu();
        printf("\n\t****THANK YOU****");
        exit(0);
}
