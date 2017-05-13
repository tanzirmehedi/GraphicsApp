#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
using namespace std;
class calculator
{
  public:
     void add(float a,float b);
     void sub(float a,float b);
     void mult(float a,float b);
     void div(float a,float b);
     void manu();
     void choice();
  private:
     float result,x,y;
     int ch;
};
int main()
{

    int i,j,k;
    char mail;
    int passward1,passward2;
     printf("\n\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    for(j=0;j<26;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(j=0;j<1;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("          NEW USER ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t    ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),124);
       printf("\n");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<0;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t\t    ");
    for(j=0;j<2;j++)
    {

       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");

    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);

        /* 1st MAIL*/

    {
    printf("\n\n\n");
    printf("\t");
    for(i=0;i<60;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(i=0;i<56;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(i=0;i<1;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       {
       char mail_1[60];
       printf("             MAIL: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       gets(mail_1);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t\t\t\t\t  ");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t");
    for(i=0;i<60;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);


    /*1st NAME*/

    {
    printf("\n\n");
    printf("\t");
    for(i=0;i<60;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(i=0;i<56;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(i=0;i<1;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("             NAME: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
       {
       char name_1[60];
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       gets(name_1);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t\t\t\t\t  ");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t");
    for(i=0;i<60;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);

    /*1st PASSWARD*/


    printf("\n\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(j=0;j<26;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(j=0;j<1;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("      PASSWARD: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       scanf("%d",&passward1);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t    ");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");


    /* 1st CONFORM PASSWARD*/


    printf("\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(j=0;j<26;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(j=0;j<1;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("   CONFORM PASSWARD: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       scanf("%d",&passward2);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t    ");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }

    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);

    if(passward1==passward2)
    {
        printf("\n\n");
        printf("\t\tYOU HAVE SUCCESSFULLY REGISTERED\n");
    }

    else
    {
        printf("\n\n");
        printf("\tPASSWARD DOES NOT VARIFIED,PLEASE ENTER SAME PASSWARD\n");
    int n;
    printf("\n\n");
    printf("\tFOR TRY AGAIN PLEASE ENTER 2 OR EXIT 3:");
    scanf("%d",&n);
    system("CLS");
    if(n==2)
    {
         printf("\n\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    for(j=0;j<26;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(j=0;j<1;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("   NEW USER (OVER WRITE) ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),124);
       printf("\n");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<0;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t\t    ");
    for(j=0;j<2;j++)
    {

       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");

    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),124);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    {

        /*2nd MAIL*/

    {
    printf("\n\n\n");
    printf("\t");
    for(i=0;i<60;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(i=0;i<56;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(i=0;i<1;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("          MAIL: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       scanf("%s[^\n]",&mail);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t\t\t\t\t  ");
    for(i=0;i<2;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t");
    for(i=0;i<60;i++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
}

    /* 2ND NAME*/


    /*2ND PASSWARD*/

    printf("\n\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(j=0;j<26;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(j=0;j<1;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("      PASSWARD: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       scanf("%d",&passward1);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t    ");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");

    /* 2nd CONFORM PASSWARD*/


    printf("\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    for(j=0;j<26;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    for(j=0;j<1;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("  ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf("\n");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
       printf("\t\t");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
       printf("   CONFORM PASSWARD: ");
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
       SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE),4);
       scanf("%d",&passward2);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\t\t\t    ");
    for(j=0;j<2;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n");
    printf("\t\t");
    for(j=0;j<30;j++)
    {
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),222);
       printf(" ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    if(passward1==passward2)
    {
        printf("\n\n");
        printf("\t\tYOU HAVE SUCCESSFULLY REGISTERED\n");
    }
    else
    {
        printf("\n\n");
        printf("\t  PASSWARD DOES NOT VARIFIED,PLEASE TRY AGAIN\n");
    }
    }

    else if(n==3)
        exit(0);
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
    printf("\n\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    system("PAUSE");
    system("CLS");
    printf("\n\n");
    printf("\n");
    for(i=0;i<1;i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),100);
        printf("        ----------: YOUR DETAILS :----------                                    ");
    }

    printf("\n\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    printf("\t         YOUR MAIL: %s\n",mail_1);
    printf("\n");
    printf("\t         YOUR NAME: %s\n",name_1);
    printf("\n");
    printf("\t         YOUR PASSWARD: %d\n",passward1);
    }
    }
    printf("\n");
    for(i=0;i<1;i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),100);
         printf("        ----------: CONFORMATION :----------                                    ");
    }
    printf("\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    printf("\tIF YOU CONFORM PLEASE PRESS 2: OR EXIT 3: ");
    int conform;
    scanf("%d",&conform);
    printf("\n");

    for(i=0;i<80;i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),100);
        printf(" ");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    if(conform==2)
    {
        printf("\n");
        printf("\t\tWAIT.... YOUR WORK IS UNDER CONSTRACTION\n");

}
}
calculator shawon;
    shawon.manu();
    shawon.choice();
}
}
void calculator::manu()
 {
     cout<<"        1.SUM"<<endl;
     cout<<"        2.SUB"<<endl;
     cout<<"        3.MULT"<<endl;
     cout<<"        4.DIV"<<endl;
 }
 void calculator::choice()
 {
     cout<<"ENTER YOUR CHOICE: ";
     cin>>ch;
     cout<<endl;
     switch(ch)
     {
         case 1:
            cout<<"ENTER TWO NUMBERS:"<<endl;
            cin>>x>>y;
            add(x,y);
            break;
         case 2:
            cout<<"ENTER TWO NUMBERS:"<<endl;
            cin>>x>>y;
            sub(x,y);
            break;
        case 3:
            cout<<"ENTER TWO NUMBERS:"<<endl;
            cin>>x>>y;
            mult(x,y);
            break;
        case 4:
            cout<<"ENTER TWO NUMBERS:"<<endl;
            cin>>x>>y;
            div(x,y);
            break;
        default:
            cout<<"YOUR INPUT NUMBER IS INVELID"<<endl;
     }
 }
 void calculator::add(float a,float b)
 {
     result=a+b;
     cout<<"RESULT IS: "<<result<<endl;
 }
void calculator::sub(float a,float b)
 {
     result=a-b;
     cout<<"RESULT IS: "<<result<<endl;
 }
 void calculator::mult(float a,float b)
 {
     result=a*b;
     cout<<"RESULT IS: "<<result<<endl;
 }
 void calculator::div(float a,float b)
 {
     result=a/b;
     cout<<"RESULT IS: "<<result<<endl;
 }

