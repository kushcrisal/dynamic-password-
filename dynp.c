#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<math.h>
int password()
{
    time_t currenttime;
    time(&currenttime);
    struct tm *mytime = localtime(&currenttime);

     int input_time; //variable to store inputted time
    int system_time;// variable to store system time
    int actual_hour; //to convert 24 hour format to 12 hour
    actual_hour=mytime->tm_hour;
    if(actual_hour>12)
    {
        actual_hour=actual_hour-12;
    }

    system_time=mytime->tm_min +actual_hour;

     printf("  \n\n\n\n\n\n \t\t\t\tEnter the password:");
     scanf("%d",&input_time);
if(input_time==system_time)
{
    return 1;
}
else
{
    return 0;
}


}
void attractive_display()
{
      char greeting[14]={'G','U','E','S','S','I','N','G',' ',' ','G','A','M','E'};
    int i ;//for looping to show the greeting character
    printf("\n\n\n\n\n\n\t\t\t\t\t\t");
    for(i=0;i<14;i++)
    {
        printf("%c",greeting[i]);
        int a;  // for looping.... lagging time between to characters
        for(a=0;a<100000000;a++)
        {

        }

    }
    printf("\npress any key  to continue");
    getch();
    printf("\n\n\t Guess the number betwwen maximum and minimun number and....I will guess");
    getch();
    system("cls");
}
void game()
{
    attractive_display();
     int a,b,diff,times;
    printf("Enter the maximun number:");
    scanf("%d",&a);
    printf("Enter the minimum number :");
    scanf("%d",&b);
    if(b>a)
    {
        int c;
        c=b;
        b=a;
        a=c;
    }
    diff=a-b;
    int po=1;
    while((pow(2,po))<diff)
    {

po++;

    }


times=po;
    fflush(stdin);
    system("cls");
    printf("Choose the number from %d to %d and I will get your number by %d times>>\n you need to specify high or low your number from mine ..",b,a,times);


    getch();
    system("cls");
    fflush(stdin);
    start:

    printf("Lets start then....");
     int count=0;
    getch();
    system("cls");
    int i,max,min;
    max=a;
    min=b;
    for(i=0;i<4;i++)
    {

        label:
     count++;
     printf("Is your number %d???\n\n",(min+max)/2);
     int guess;
            guess=(min+max)/2;
     printf("if your number is higher input 1 ,,,if ur number is lower input 0 and if this is your number input 2::");
     int input;
     scanf("%d",&input);
     if(input==0)
     {

         max=guess-1;
     }
     if (input==1)
     {

         min=guess+1;
     }

        if (input==2)
        {
            system("cls");
            printf("hehe....i did it in %d attempt",count);
            getch();
            system("cls");

            init:
            printf("Do you want to play again??...\n if yes enter 1 \n if no enter 0:::");
            fflush(stdin);
            int z;
            scanf("%d",&z);
            if (z==1)
            {

                system("cls");
                goto start;
            }
            if(z==0)
            {
                exit(0);
            }
            else
            {
                system("cls");
                printf("Enter the valid number");
                getch();
                system("cls");
                goto init;
            }

        }
        else
        {
            printf("please enter ..proper number");
            system("cls");
            goto label;
        }
    }

}
void passwordcheck()
{
    start:
if (password()==1)
{
    printf("password correct");
    getch();
    system("cls");
    game();
}
    else
    {
        printf("password incorrect.....try again");
        getch();
        system("cls");

        goto start;
    }

}
int main()
{

passwordcheck();

}
