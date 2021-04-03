#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
string n;string m;
void name1()
{
    cout<<"\n";
    cout<<" ENTER PLAYER 1 NAME : ";
    getline(cin,n);
}
void name2()
{
    cout<<"\n ENTER PLAYER 2 NAME : ";
    getline(cin,m);
    if(n==m)
    {
        cout<<"\n THIS NAME IS ALREADY TAKEN.USE DIFFERENT NAME \n";
        name2();
    }
    cout<<"\n";
}
void p1(int *p,char a[][3])
{
    int choice,choice2;
    while(true)
    {
        cout<<n<<" ENTER ROW FROM 1 T0 3 : ";
        cin>>choice;
        cout<<"\n";
        if(choice>3||choice <1)
        {
            cout<<"\n ENTER CHOICE BETWEEN 1 - 3 "<<"\n";
            continue;
        }
        {
            break;
        }
    }
    while(true)
    {
        cout<<n<<" ENTER COLOUMN FROM 1 T0 3 : ";
        cin>>choice2;
        if(choice2>3||choice2 <1)
        {
            cout<<"\n ENTER CHOICE BETWEEN 1 - 3 "<<"\n";
            continue;
        }
        else
        {
           break;
        }
    }
    if(a[choice-1][choice2-1]!=' ')
    {
        cout<<"\n ....SPACE OCCUPIED..."<<"\n";
        p1(p,a);
    }
    else
    {
        a[choice-1][choice2-1]='X';
        *p=*p+1;
    }

}
void p2(int *p,char a[][3])
{
    int choice,choice2;
    while(true)
    {

        cout<<m<<" ENTER ROW FROM 1 T0 3 : ";
        cin>>choice;
        cout<<"\n";
        if(choice>3||choice <1)
        {
            cout<<"\n ENTER CHOICE BETWEEN 1 - 3 "<<"\n";
            continue;
        }
        {
            break;
        }
    }
    while(true)
    {
        cout<<m<<" ENTER COLOUMN FROM 1 T0 3 : ";
        cin>>choice2;
        if(choice2>3||choice2 <1)
        {
            cout<<"\n ENTER CHOICE BETWEEN 1 - 3 "<<"\n";
            continue;
        }
        else
        {
           break;
        }
    }
    if(a[choice-1][choice2-1]!=' ')
    {
        cout<<"\n ....SPACE OCCUPIED..."<<"\n\n";
        p2(p,a);
    }
    else
    {
        a[choice-1][choice2-1]='0';
        *p=*p+1;
    }
}
void show(char a[][3])
{
    cout<<"\n";
    cout<<"\t\t\t "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2];
    cout<<"\n\t\t\t-----------";
    cout<<"\n\t\t\t "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2];
    cout<<"\n\t\t\t-----------";
    cout<<"\n\t\t\t "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2];
    cout<<"\n\n";

}
int check(char a[][3])
{
    if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')
    {
        return 1;
    }
    else if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')
    {
        return 1;
    }
    else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')
    {
        return 1;
    }
    else if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')
    {
        return 1;
    }
    else if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')
    {
        return 1;
    }
    else if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')
    {
        return 1;
    }
    else if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')
    {
        return 1;
    }
    else if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X')
    {
        return 1;
    }
    if(a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]=='0')
    {
        return 2;
    }
    else if(a[1][0]=='0'&&a[1][1]=='0'&&a[1][2]=='0')
    {
        return 2;
    }
    else if(a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]=='0')
    {
        return 2;
    }
    else if(a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]=='0')
    {
        return 2;
    }
    else if(a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]=='0')
    {
        return 2;
    }
    else if(a[0][2]=='0'&&a[1][2]=='0'&&a[2][2]=='0')
    {
        return 2;
    }
    else if(a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0')
    {
        return 2;
    }
    else if(a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]=='0')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char a;
    cout<<"\n\n\n\t\t\t WELCOME TO TIC-TAC-TOE\n\t\t\t************************\n\n\t INSTRUCTION :-\n\t*************** \n\n\t1) PLAYER 1 WILL GET X AS A CHARACTER TO PLAY.\n\n\t2) PLAYER 2 WILL GET 0 AS A CHARACTER TO PLAY.\n\n\t3) YOU ARE REQUIRED TO ENTER ROW AND COLOUMN TO MARK YOUR PLACE.\n\n\t4)THE PLAYER WHOSE MARKS WHEN CONNECTED RESULT IN A STRAIGHT LINE WILL WIN THE GAME.";
    cout<<"\n\n\tPRESS 1 TO PLAY\n\n\tPRESS 2 TO QUIT THE GAME\n\n\t";
    cin>>a;
    cin.ignore();
    if(a=='2')
    {
        system("cls");
        cout<<"\n\n\n\t\tTHANK YOU FOR PLAYING TIC TAC TOE...STAY SAFE..\n\n\t\tPROJECT MADE BY:- DEEPAK GODIYAL\n\t\t***************\n\n\t\tSECTION:- A\n\t\t********\n\n\t\tUNIVERSITY :- GRAPHIC ERA UNIVERSITY\n\t\t***********\n\n\t\tUNIVERSITY ROLLNO:-2014627\n\t\t********************"<<endl<<endl<<endl<<endl;
        return 0;
    }
    char f='1';
    do{
    system("cls");
    int ct=0;
    char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    cout<<"\n\t\tTIC-TAC-TOE\n\t\t************"<<endl<<endl;
    name1();
    name2();
    show(a);
    do
    {
        p1(&ct,a);
        show(a);
        int l=check(a);
        if(ct==9||l==1||l==2)
        {
            break;
        }
        p2(&ct,a);
        show(a);
        l=check(a);
        if(l==1||l==2)
        {
            break;
        }
    }
    while(ct<9);
    int win=check(a);
    if(win==1)
    {
        cout<<"\n\n\t\t\t****** "<<n<<" WINS THE GAME *****";
    }
    else if(win==2)
    {
        cout<<"\n\n\t\t\t****** "<<m<<" WINS THE GAME *****";
    }
    else
    {
        cout<<"\n\n\t\t\t****** GAME IS A TIE *****";
    }
    cout<<"\n\n\t\tIF YOU WANT TO PLAY AGAIN PRESS 1 \n ";
    f=_getch();
    cin.ignore();
    }
    while(f=='1');
    system("cls");
    cout<<"\n\n\n\t\t\tTHANK YOU FOR PLAYING TIC TAC TOE WITH US.. STAY SAFE..\n\n\t\tPROJECT MADE BY:- DEEPAK GODIYAL\n\t\t***************\n\n\t\tSECTION:- A\n\t\t********\n\n\t\tUNIVERSITY :- GRAPHIC ERA UNIVERSITY\n\t\t***********\n\n\t\tUNIVERSITY ROLLNO:-2014627\n\t\t********************"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
