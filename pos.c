#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
char ans=0;
int ok;
int b, valid=0;
void WelcomeScreen(void);
void Title(void);
void MainMenu(void);
void LoginScreen(void);
void Add_rec(void);
void func_list();
void Search_rec(void);
void Edit_rec(void);
void Dlt_rec(void);
void ex_it(void);
void inventory(void);
void input(void);
void iMainMenu(void);
void invtitle(void);
void cart(void);
void gotoxy(short x, short y)
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
struct customer
{
int age;
char Gender;
char First_Name[20];
char Last_Name[20];
char Contact_no[15];
char Email[30];
};
struct customer p,temp_c;
main(void)
{
Title();
WelcomeScreen();
input();
}

void input(void)
{
int n;
printf("\nFOR CUSTOMERS: PRESS [1]\n\nFOR ADMIN: PRESS [2]\n\n ");
scanf("%d",&n);
if(n==1)
 iMainMenu();
 else if(n==2)
 LoginScreen();
 else
 {
 system("cls");
 Title();
 printf("Please Enter Valid Input\n");
 getch();
 printf("\nFOR CUSTOMERS: PRESS [1]\n\nFOR ADMIN: PRESS [2]\n\n ");
scanf("%d",&n);
if(n==1)
 iMainMenu();
 else if(n==2)
 LoginScreen();
 else
 {
 printf("PLEASE ENTER VALID INPUT\n");
 }
 }
}
void WelcomeScreen(void)
{
printf("\n\n\n\n\n\n\n############################################################");
printf("\n # CCN WELCOMES YOU#");
printf("\n # WITH WARM HEART#");
printf("\n############################################################");
printf("\n\n\n\n\n\n\n # PRESS ANY KEY TO CONTINUE #\n");
getch();
system("cls");
Title();
}
void Title(void)
{
printf(" --------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf(" | CAFE COFFEE NIGHT|\n");
printf(" --------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");}
void MainMenu(void)
{
system("cls");
int choose;
Title();
printf("\n\n\n\n\n\t\t\t\t1. Add customer Record\n");
printf("\n\t\t\t\t2. Show customer Record\n");
printf("\n\t\t\t\t3. Search customer Record\n");
printf("\n\t\t\t\t4. Edit customer Record\n");
printf("\n\t\t\t\t5. Delete customer Record\n");
printf("\n\t\t\t\t6. Exit\n");
printf("\n\n\n \n\t\t\t\tChoose from 1 to 6:");
scanf("%i", &choose);
switch(choose)
{
case 1:
Add_rec();
 break;
 case 2:
 func_list();
 break;
case 3:
Search_rec();
 break;
case 4:
Edit_rec();
break;
case 5:
Dlt_rec();
break;
case 6:
ex_it();
 break;
default:
printf("\t\t\tInvalid entry. Please enter right option :)");
getch();
}
}
void invtitle(void)
{
printf("\n\n\n\n\n\n\n############################################################");
printf("\n # INVENTORY #");
printf("\n############################################################");
}
void cart(void)
{

printf("\n\n\n\n\n\n\n############################################################");
printf("\n # YOUR CART #");
printf("\n############################################################");
}
void inventory(void)
{
invtitle();
static int totalCost;
int i,j,choice,c=1,a[9],cost[9];
for(i=0;i<9;i++)
a[i]=0;
char str[100];
char items[9][100]={"CAPUCCINO",
"NEON TEA",
"COLD COFFEE",
"CHOCO BROWNIES [4 Pcs.]",
"COOKIES [4 Pcs.]",
"CHOCO LAVA CAKE",
"GARLIC BREAD",
"CHEESY WEDGES [5 Pcs.]",
"CRUNCHY SAMOSA [2 Pcs.]"
};
do{
 if(c==1){
 printf("\n\n 1 - BEVERAGES\n\n 2 - SNACKS\n\n 3 - LIGHT EATS\n\nAny Other Number To Exit\n");
 scanf("%d",&choice);
 system("cls");
 Title();
 invtitle();
 switch(choice)
 {
 case 1:
 {
 int BREAKFAST;
 printf("\n\n ## BEVERAGES ##\n\n");
 printf("\n\n 1 - CAPUCCINO - Rs.200\n\n 2 - NEON TEA - Rs.100\n\n 3 - COLD COFFEE- Rs.250\n\nAny other number to exit\n");
 scanf("%d",&BREAKFAST);
 cost[0]=200;
 cost[1]=100;
 cost[2]=250;
 system("cls");
 Title();
 invtitle();
 switch(BREAKFAST)
 {
 case 1:
 {
 int num;
 printf("\n\n\n You Chose: CAPUCCINO # Rs.200 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[0]++;
 totalCost+=200;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 case 2:
 {
 int num;
 printf("\n\n\n You Chose: NEON TEA # Rs.100 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[1]++;
 totalCost+=100;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 case 3:
 {
 int num;
 printf("\n\n\n You Chose: COLD COFFEE # Rs.250 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[2]++;
 totalCost+=250;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 default:{
 system("cls");
 Title();
 invtitle();
 printf(" Exit From BEVERAGES\n\n");
 break;
 }

 }
 break;
 }
 case 2:
 {
 int LUNCH;
 printf("\n\n ## SNACKS ##\n\n");
 printf("\n\n 1 - CHOCO BROWNIES [4 Pcs.] - Rs.250\n\n 2 - COOKIES [4 Pcs.] - Rs.120\n\n 3 - CHOCO LAVA CAKE - Rs.220\n\nAny other number to exit\n");
 scanf("%d",&LUNCH);
 cost[3]=250;
 cost[4]=120;
 cost[5]=220;
 system("cls");
 Title();
 invtitle();
 switch(LUNCH)
 {
 case 1:
 {
 int num;
 printf("\n\n\n You Chose: CHOCO BROWNIES # Rs.250 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[3]++;
 totalCost+=250;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 case 2:
 {
 int num;
 printf("\n\n\n You Chose: COOKIES [5] # Rs.120 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[4]++;
 totalCost+=120;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 case 3:
 {

 int num;
 printf("\n\n\n You Chose: CHOCO LAVA CAKE # Rs.220 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[5]++;
 totalCost+=220;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 default:{
 system("cls");
 Title();
 invtitle();
 printf(" Exit From Snacks\n\n");
 break;
 }
 }
 break;
 }
 case 3:
 {
 int DINNER;
 printf("\n\n ## LIGHT EATS ##\n\n");
 printf("\n\n 1 - GARLIC BREAD - Rs.140\n\n 2 - CHEESY WEDGES [5 Pcs.] - Rs.120\n\n 3 - CRUNCHY SAMOSA [2] - Rs.40\n\nAny other number to exit\n");
 scanf("%d",&DINNER);
 cost[6]=140;
 cost[7]=120;
 cost[8]=40;
 system("cls");
 Title();
 invtitle();
 switch(DINNER)
 {
 case 1:
 {
 int num;
 printf("\n\n\n You Chose: GARLIC BREAD # Rs.140 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[6]++;
 totalCost+=140;
 }
 system("cls");
 Title();
 invtitle();

 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 case 2:
 {
 int num;
 printf("\n\n\n You Chose: CHEESY WEDGES # Rs.120 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[7]++;
 totalCost+=120;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 case 3:
 {
 int num;
 printf("\n\n\n You Chose: CRUNCHY SAMOSA # Rs.40 #\n\n To Confirm, Press [1], Else [Any Number]\n\n");
 scanf("%d",&num);
 if(num==1)
 {
 a[8]++;
 totalCost+=40;
 }
 system("cls");
 Title();
 invtitle();
 printf(" \n\n\nYour Cost In Cart Is: # Rs.%d #\n\n",totalCost);
 break;
 }
 default:{
 system("cls");
 Title();
 invtitle();
 printf(" Exit From LIGHT EATS\n\n");
 break;
 }
 }
 break;
 }
 default:
 {
 printf(" Enter Valid Categories Choice\n");
 break;
 }
 }

 printf("\n\n\n Id Items Quantity Cost\n=============================================================\n");
 for(i=0;i<9;i++)
 {
 if(a[i]!=0)
 {
 printf(" %d %s %d %d\n\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf(" ## TOTAL = %d ##\n\n",totalCost);
 printf("\n\n\n\n * To Add Anything More: Press [1]\n\n * To Delete Anyting: Press [2]\n\n * To Leave: Press [Any Number]\n\n");
 scanf("%d",&c);
}
 if(c==2)
 {
 int id;
 printf("\n\n\n Enter Id No. To Delete Item\n\n");
 scanf("%d",&id);
 if(id<9&&id>0){
 totalCost=totalCost-(cost[id]*a[id]);
 a[id]=0;
 }
 else{
 printf(" Enter Valid Id No.\n\n");
 }
 printf("\n\n\n Id Items Quantity Cost\n==========================================================\n");
 for(i=0;i<9;i++)
 {
 if(a[i]!=0)
 {
 printf(" %d %s %d %d\n\n",i,items[i],a[i],(cost[i]*a[i]));
 }
 }
 printf(" ## TOTAL = %d ##\n\n",totalCost);
 printf(" * To Add Anything More: Press [1]\n\n * To Delete Anyting: Press [2]\n\n * To Leave: Press [Any Number]\n\n");
 scanf("%d",&c);
 }
}
while(c==1 || c==2);
 system("cls");
 Title();
printf("\n\n\n\n\n\n * YOUR GRAND TOTAL IS: ## Rs.%d ##\n\n\n\n",totalCost);
printf(" ### VISIT US SOON ###\n");
getch();
system("cls");
main();
}
void iMainMenu(void)

{
system("cls");
Title();
Add_rec();
}
void ex_it(void)
{
system("cls");
Title();
printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
getch();
system("cls");
main();
}
void LoginScreen(void)
{
int e=0 ;
char Username[15];
char Password[15];
char original_Username[25]="admin";
char original_Password[15]="admin";
do
{
printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
printf("\n\n\n\t\t\t\t\tUSERNAME:");
scanf("%s",&Username);
printf("\n\n\t\t\t\t\tPASSWORD:");
scanf("%s",&Password);
if (strcmp(Username,original_Username)==0 &&
strcmp(Password,original_Password)==0)
{
printf("\n\n\n\t\t\t\t\t...Login Successful...");
getch();
MainMenu();
break;
}
else
{
printf("\n\t\t\tPassword in incorrect:( Try Again :)");
e++;
getch();
}
}while(e<=2);
if(e>2)
{
printf("You have cross the limit. You cannot login. :( :(");
getch();
 ex_it();
}
getch();

system("cls");
MainMenu();
}
void Add_rec(void)
{
system("cls");
Title();
 printf("\n\n\n\n\n\n\n ############################################################");
printf("\n # CUSTOMER DETAILS #");
printf("\n ############################################################");
 char ans;
FILE*ek;
ek=fopen("Record2.dat","a");
A:
printf("\n\t\t\tFirst Name: ");
scanf("%s",p.First_Name);
p.First_Name[0]=toupper(p.First_Name[0]);
if(strlen(p.First_Name)>20||strlen(p.First_Name)<2)
{
printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
goto A;
}
else
{
for (b=0;b<strlen(p.First_Name);b++)
{
if (isalpha(p.First_Name[b]))
{
valid=1;
}
else
{
valid=0;
break;
}
}
if(!valid)
{
printf("\n\t\t First name contain Invalid character :( Enter again :)");
goto A;
}
}
B:
printf("\n\t\t\tLast Name: ");
 scanf("%s",p.Last_Name);
 p.Last_Name[0]=toupper(p.Last_Name[0]);
 if(strlen(p.Last_Name)>20||strlen(p.Last_Name)<2)
{
printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");

goto B;
}
else
{
for (b=0;b<strlen(p.Last_Name);b++)
{
if (isalpha(p.Last_Name[b]))
{
valid=1;
}
else
{
valid=0;
break;
}
}
if(!valid)
{
printf("\n\t\t Last name contain Invalid character :( Enter again :)");
goto B;
}
}
do
{
 printf("\n\t\t\tGender[F/M]: ");
scanf(" %c",&p.Gender);
if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
{
ok =1;
}
else
{
ok =0;
}
 if(!ok)
 {
 printf("\n\t\t Gender contain Invalid character :( Enter either F or M :)");
 }
}while(!ok);
 printf("\n\t\t\tAge:");
 scanf(" %i",&p.age);
do
{
D:
 printf("\n\t\t\tContact no: ");
 scanf("%s",p.Contact_no);
 if(strlen(p.Contact_no)>10||strlen(p.Contact_no)!=10)
{
printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
goto D;
}
else
{
for (b=0;b<strlen(p.Contact_no);b++)
{
if (!isalpha(p.Contact_no[b]))
{
valid=1;
}
else
{
valid=0;
break;
}
}
if(!valid)
{
printf("\n\t\t Contact no. contain Invalid character :( Enter again :)");
goto D;
}
}
}while(!valid);
do
{
 printf("\n\t\t\tEmail: ");
 scanf("%s",p.Email);
 if (strlen(p.Email)>30||strlen(p.Email)<8)
 {
 printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");
}
}while(strlen(p.Email)>30||strlen(p.Email)<8);
 fprintf(ek," %s %s %c %i %s %s \n", p.First_Name, p.Last_Name, p.Gender, p.age,
p.Contact_no, p.Email);
 printf("\n\n\t\t\t.... Information Record Successful ...");
 fclose(ek);
 getch();
 system("cls");
 Title();
 inventory();
}
void func_list()
{
int row;
system("cls");
Title();

FILE *ek;
ek=fopen("Record2.dat","r");
printf("\n\n\t\t\t!!!!!!!!!!!!!! CUSTOMERS RECORD !!!!!!!!!!!!!\n");
gotoxy(1,15);
printf("Full Name");
gotoxy(20,15);
printf("Gender");
gotoxy(32,15);
printf("Age");
gotoxy(49,15);
printf("Contact No.");
gotoxy(64,15);
printf("Email");
printf("\n========================================================================================================");
row=17;
while(fscanf(ek,"%s %s %c %i %s %s \n", p.First_Name, p.Last_Name, &p.Gender,
&p.age, p.Contact_no, p.Email)!=EOF)
{
gotoxy(1,row);
printf("%s %s",p.First_Name, p.Last_Name);
gotoxy(20,row);
printf("%c",p.Gender);
gotoxy(32,row);
printf("%i",p.age);
gotoxy(49,row);
printf("%s",p.Contact_no);
gotoxy(64,row);
printf("%s",p.Email);
row++;
}
fclose(ek);
getch();
system("cls");
MainMenu();
}
void Search_rec(void)
{
char name[20];
system("cls");
Title();
FILE *ek;
ek=fopen("Record2.dat","r");
printf("\n\n\t\t\t!!!!!!!!!!!!!! SEARCH CUSTOMER RECORD !!!!!!!!!!!!!\n");
printf("\n Enter Customer Name To Be Viewed:");
scanf("%s",name);
fflush(stdin);

name[0]=toupper(name[0]);
while(fscanf(ek,"%s %s %c %i %s %s \n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Contact_no, p.Email)!=EOF)
{
if(strcmp(p.First_Name,name)==0)
{
gotoxy(1,15);
printf("Full Name");
gotoxy(25,15);
printf("Gender");
gotoxy(32,15);
printf("Age");
gotoxy(52,15);
printf("Contact No.");
gotoxy(64,15);
printf("Email");
printf("=================================================================================================================");
gotoxy(1,18);
printf("%s %s",p.First_Name, p.Last_Name);
gotoxy(25,18);
printf("%c",p.Gender);
gotoxy(32,18);
printf("%i",p.age);
gotoxy(52,18);
printf("%s",p.Contact_no);
gotoxy(64,18);
printf("%s",p.Email);
printf("\n");
break;
}
}
if(strcmp(p.First_Name,name)!=0)
 {
gotoxy(5,10);
printf("Record not found!");
getch();
}
fclose(ek);
L:
getch();
printf("\n\n\t\t\tDo you want to view more[Y/N]??");
 scanf("%c",&ans);
 if (toupper(ans)=='Y')
 {
 Search_rec();
 }
else if(toupper(ans)=='N')
{
printf("\n\t\t Thank you :) :)");
 getch();
MainMenu();
 }
else

 {
 printf("\n\tInvalid Input.\n");
 goto L;
 }
}
void Edit_rec(void)
{
 system("cls");
Title();
FILE *ek, *ft;
 int i,b, valid=0;
 char ch;
 char name[20];
system("cls");
 Title();
ft=fopen("temp2.dat","w+");
ek=fopen("Record2.dat","r");
if(ek==NULL)
{
printf("\n\t Can not open file!! ");
getch();
MainMenu();
}
 printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit customer Record !!!!!!!!!!!!!\n");
gotoxy(12,13);
printf("Enter the First Name of the Customer : ");
scanf(" %s",name);
fflush(stdin);
name[0]=toupper(name[0]);
gotoxy(12,15);
if(ft==NULL)
{
printf("\n Can not open file");
getch();
MainMenu();
}
while(fscanf(ek,"%s %s %c %i %s %s \n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Contact_no, p.Email)!=EOF)
{
if(strcmp(p.First_Name, name)==0)
{
valid=1;
gotoxy(25,17);
printf("* Existing Record *");
gotoxy(10,19);
printf("%s \t%s \t%c \t%i \t%s \t%s \n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Contact_no,p.Email);
gotoxy(12,22);
printf("Enter New First Name: ");
scanf("%s",p.First_Name);
gotoxy(12,24);
printf("Enter Last Name: ");
scanf("%s",p.Last_Name);

gotoxy(12,26);
printf("Enter Gender: ");
scanf(" %c",&p.Gender);
p.Gender=toupper(p.Gender);
gotoxy(12,28);
printf("Enter age: ");
scanf(" %i",&p.age);
gotoxy(12,32);
printf("Enter Contact no: ");
scanf("%s",p.Contact_no);
gotoxy(12,34);
printf("Enter New email: ");
scanf("%s",p.Email);
printf("\nPress U character for the Updating operation : ");
ch=getche();
if(ch=='u' || ch=='U')
{
fprintf(ft,"%s %s %c %i %s %s \n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Contact_no,p.Email);
printf("\n\n\t\t\tCustomer record updated successfully...");
}
}
else
{
fprintf(ft,"%s %s %c %i %s %s \n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Contact_no,p.Email);
}
}
if(!valid)
{
printf("\n\t\tNO RECORD FOUND...");
}
fclose(ft);
fclose(ek);
remove("Record2.dat");
 rename("temp2.dat","Record2.dat");
getch();
MainMenu();
}
void Dlt_rec()
{
char name[20];
int found=0;
system("cls");
Title();
FILE *ek, *ft;
ft=fopen("temp_file2.dat","w+");
ek=fopen("Record2.dat","r");
printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete customer Record !!!!!!!!!!!!!\n");
gotoxy(12,8);
printf("\n Enter customer Name to delete: ");
fflush(stdin);
gets(name);

name[0]=toupper(name[0]);
while (fscanf(ek,"%s %s %c %i %s %s ", p.First_Name, p.Last_Name, &p.Gender,&p.age, p.Contact_no, p.Email)!=EOF)
{
if (strcmp(p.First_Name,name)!=0)
fprintf(ft,"%s %s %c %i %s %s \n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Contact_no, p.Email);
else
{
printf("%s %s %c %i %s %s \n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Contact_no, p.Email);
found=1;
}
}
if(found==0)
{
printf("\n\n\t\t\t Record not found....");
getch();
MainMenu();
}
else
{
fclose(ek);
fclose(ft);
remove("Record2.dat");
rename("temp_file2.dat","Record2.dat");
printf("\n\n\t\t\t Record deleted successfully :) ");
getch();
MainMenu();
}
}
