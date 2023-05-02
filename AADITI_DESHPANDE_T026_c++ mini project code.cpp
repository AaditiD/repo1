//program for library management

/*Made by AADITI DESHPANDE
T026
INFORMATION TECHNOLOGY*/

#include<iostream>
#include<string.h>       //header file
using namespace std;
//void confirm(void);
void confirm1(void);

/***************program for purchasing book from the library******************/

class library1               //declaring the class library for taking the books details
{
public:            //data members
char n[20];
char a[20];
char p[20];
char name1[20];
int roll;
char dept[20];
               //member functions
void getinfo();
void printinfo();
void student();
};
void library1::getinfo()   //defining member function getinfo
{
//cout<<"purchasing book from library"<<endl;
cout<<"Please enter the book details..."<<endl;
cout<<"Enter the name of the required book."<<endl;
cin>>n;
cout<<"Enter the name of the author."<<endl;
cin>>a;
cout<<"Enter the name of the publication."<<endl;
cin>>p;
}
void library1::printinfo()  //defining member function printinfo
{
cout<<"You have entered..."<<endl;
       cout<<"The name of the student is:"<<name1<<endl;
       cout<<"The roll no of the student:"<<roll<<endl;
       cout<<"The department of the student:"<<dept<<endl;
cout<<"The name of the book:"<<n<<endl;
cout<<"The name of the author:"<<a<<endl;
cout<<"The name of the publication:"<<p<<endl;
cout<<"This book is available in stock...."<<endl;
}

void library1::student()
{
cout<<"Enter the credentials of the student....."<<endl;
       cout<<"Enter the name of the student...."<<endl;
       cin>>name1;
       cout<<"Enter the roll no of the student....."<<endl;
       cin>>roll;
       cout<<"Enter the department of the student...."<<endl;
       cin>>dept;
}
/*void confirm(void)
{int r;
cout<<"Do you wish to proceed ??"<<endl;
cout<<"Reply with 1 for yes or any number for no"<<endl;
cin>>r;
if(r==1)
{
cout<<"Book successfully registered...."<<endl;
cout<<"You need to return this book to the library by the end of the semester...."<<endl;
cout<<"Price:Rs 50"<<endl;
}*/




/***********program for returning the already taken book from the library**********/

class library2 : public library1    //single inheritance
{
public:        //data members
char n1[20];
char a1[20];
char p1[20];
int m;
int b;
int r4;

void getinfo1();//member functions
void printinfo1();
};
void library2::getinfo1()   //defining member function getinfo
{
cout<<"Please enter the book details..."<<endl;
cout<<"Enter the name of the book to be returned"<<endl;
cin>>n1;
cout<<"Enter the name of the author."<<endl;
cin>>a1;
cout<<"Enter the name of the publication."<<endl;
cin>>p1;
cout<<"Enter the number of months the book is with you..."<<endl;
cin>>m;
}
void library2::printinfo1()  //defining member function printinfo
{
cout<<"You have entered..."<<endl;
       cout<<"The name of the student is:"<<name1<<endl;
       cout<<"The roll no of the student:"<<roll<<endl;
       cout<<"The department of the student:"<<dept<<endl;
cout<<"The name of the book:"<<n1<<endl;
cout<<"The name of the author:"<<a1<<endl;
cout<<"The name of the publication:"<<p1<<endl;
cout<<"The number of months book is with the student..."<<m<<endl;
if(m<=3)
{
    cout<<"Return the book to the library...."<<endl;
    cout<<"Do you wish to buy another book ?? Reply with 1 for yes and any number for no"<<endl;
    cin>>b;
    if(b==1)
    {
        getinfo();
        printinfo();
        cout<<"Do you wish to proceed ??"<<endl;
cout<<"Reply with 1 for yes and any number for no"<<endl;
cin>>r4;
if(r4==1)
{
cout<<"Book successfully registered...."<<endl;
cout<<"You need to return this book to the library by the end of the semester...."<<endl;
cout<<"Price:Rs 50"<<endl;
}
    }
}
else if(m>3&&m<=5)
{
    cout<<"Pay a fine of Rs 50 and return the book...."<<endl;
}
else if(m>5&&m<=9)
{
    cout<<"Pay a fine of Rs 100 and return the book....."<<endl;
}
else
{
    cout<<"You have not followed the rules of returning the library book on time..... Henceforth, you wont be able to access any other books of the library. Return the book to the library....."<<endl;
}
}
void confirm1() //function definition
{int r;
cout<<"Do you wish to proceed ??"<<endl;
cout<<"Reply with 1 for yes or any number for no"<<endl;
cin>>r;
if(r==1)
{
cout<<"Book successfully returned...."<<endl;
}
}

/***********the heart of the program***********/

int main()
{ int choice;
int f;
int i;
int j;
int pass=123;
int user;
int f1;
library2 l2;
cout<<"Welcome to library management program......."<<endl;
cout<<"login first to open the library management program..."<<endl;
cout<<"Enter the password to login....."<<endl;
cin>>user;
if(user!=pass)
    { cout<<"You have entered wrong password...."<<endl;
    }
else{cout<<"WELCOME......"<<endl;
cout<<"Enter your choice...."<<endl;
cout<<"1 for purchasing book from library"<<endl;
cout<<"2 for returning book to the library"<<endl;
cout<<"3 for viewing the available books in the library"<<endl;
cin>>choice;
switch(choice)
{case 1:{
    int r;
cout<<"Purchasing book from the library..."<<endl;
l2.student();
cout<<"How many books do you want to buy from the library?? "<<endl;
cout<<"you can buy 2 books at a time...."<<endl;
cin>>f;
for(i=0;i<f;i++)
{l2.getinfo();
l2.printinfo();
}
cout<<"Do you wish to proceed ??"<<endl;
cout<<"Reply with 1 for yes and any number for no"<<endl;
cin>>r;
if(r==1)
{
cout<<"Book successfully registered...."<<endl;
cout<<"You need to return this book to the library by the end of the semester...."<<endl;
int total=50*f;

cout<<"Price:Rs "<<total<<endl;
}
else
{
cout<<"Do you wish to buy the book ?? Reply with 1 for yes and any number for no"<<endl;
cin>>r;
if(r==1)
{cout<<"How many books do you want to buy from the library?? "<<endl;
cout<<"you can buy 2 books at a time...."<<endl;
cin>>f;
for(i=0;i<f;i++)
{l2.getinfo();
l2.printinfo();
}
//confirm();
}}
break;
}
case 2:{cout<<"How many books do you want to return?? "<<endl;
cout<<"you can return 2 books at a time...."<<endl;
cin>>f1;
l2.student();
for(j=0;j<f1;j++)
{l2.getinfo1();
l2.printinfo1();}
break;
}
{case 3:{
cout<<"The most preferred books among students......."<<endl;
cout<<"***************************************************************"<<endl;
cout<<"*No * Author's name         \t\tBook's name"<<endl;
cout<<"***************************************************************"<<endl;
cout<<"*____*_______Programming_books_in_the_library____________________"<<endl;
cout<<"* 1  *  E BALAGURUSAMY      *   \t\tOBJECT ORIENTED PROGRAMMING WITH C++"<<endl;
cout<<"* 2  *  E BALAGURUSAMY      *   \t\tPROGRAMMING IN ANSI C"<<endl;
cout<<"* 3  *  E BALAGURUSAMY      *   \t\tPROGRAMMING WITH JAVA"<<endl;
cout<<"* 4  *  YASHVANT KANETKAR   *   \t\tLET US C"<<endl;
cout<<"* 5  *  YASHVANT KANETKAR   *   \t\tLET US C++"<<endl;
cout<<"* 6  *  YASHVANT KANETKAR   *   \t\tLET US JAVA"<<endl;
cout<<"* 7  *  YASHVANT KANETKAR   *   \t\tLET US PYTHON"<<endl;
cout<<" *****************************************************************"<<endl;
cout<<" *****************************************************************"<<endl;
cout<<"For more books refer to the library books catalog....."<<endl;
break;
}
}
default:{ cout<<"Please enter the correct number..."<<endl;
}
}}
}




