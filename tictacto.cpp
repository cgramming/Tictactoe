#include<iostream>
#include<conio.h>
#include <windows.h>


using namespace std;
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int location=0;
    char p[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}; // places where the marks go (0 and x)
    char play ='x';
    char pcheck = 'x';

    char lc = (char)218;  //left corner character
    char rc = (char)191; //right corner character
    char lb = (char)192; //
    char rb = (char)217;
    char hl = (char)196;
    char vl = (char)179;
    char mt = (char)194;
    char mb = (char)193;
    char ml = (char)195;
    char mr = (char)180;
    char cr = (char)197;

for (int i =0; i<9; i++)
{
    cout<<lc<<hl<<hl<<hl<<hl<<hl<<hl<<mt<<hl<<hl<<hl<<hl<<hl<<hl<<mt<<hl<<hl<<hl<<hl<<hl<<hl<<rc<<endl;
    cout<<vl<<"1     "<<vl<<"2     "<<vl<<"3     "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<vl<<"  "<<p[1]<<"   "<<vl<<"  "<<p[2]<<"   "<<vl<<"  "<<p[3]<<"   "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<ml<<hl<<hl<<hl<<hl<<hl<<hl<<cr<<hl<<hl<<hl<<hl<<hl<<hl<<cr<<hl<<hl<<hl<<hl<<hl<<hl<<mr<<endl;
    cout<<vl<<"4     "<<vl<<"5     "<<vl<<"6     "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<vl<<"  "<<p[4]<<"   "<<vl<<"  "<<p[5]<<"   "<<vl<<"  "<<p[6]<<"   "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<ml<<hl<<hl<<hl<<hl<<hl<<hl<<cr<<hl<<hl<<hl<<hl<<hl<<hl<<cr<<hl<<hl<<hl<<hl<<hl<<hl<<mr<<endl;
    cout<<vl<<"7     "<<vl<<"8     "<<vl<<"9     "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<vl<<"  "<<p[7]<<"   "<<vl<<"  "<<p[8]<<"   "<<vl<<"  "<<p[9]<<"   "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<vl<<"      "<<vl<<"      "<<vl<<"      "<<vl<<endl;
    cout<<lb<<hl<<hl<<hl<<hl<<hl<<hl<<mb<<hl<<hl<<hl<<hl<<hl<<hl<<mb<<hl<<hl<<hl<<hl<<hl<<hl<<rb<<endl;

    if (pcheck=='w') {cout<<"You win "<<(char)1<<" Game is Over \a\a\a"; Sleep(3000); getch(); return 0;}

cout<<"Player "<<play<<" enter your box number : ";
cin>>location;
if (location ==0) return 0;


    pcheck = play;
if(p[location]== ' ')
{
    p[location]=play;

    if(play=='x') play = 'O';
    else play = 'x';
}
else
{
    cout<<"\nWRONG CHOICE, PLEASE RE-ENTER THE BOX NUMBER..\a\a";
    Sleep(1000);
    i--;
}

if((p[1]==pcheck && p[2]==pcheck && p[3]==pcheck) || (p[4]==pcheck && p[5]==pcheck && p[6]==pcheck) || (p[7]==pcheck && p[8]==pcheck && p[9]==pcheck) || (p[1]==pcheck && p[4]==pcheck && p[7]==pcheck) || (p[2]==pcheck && p[5]==pcheck && p[8]==pcheck) || (p[3]==pcheck && p[6]==pcheck && p[9]==pcheck) || (p[1]==pcheck && p[5]==pcheck && p[9]==pcheck) || (p[3]==pcheck && p[5]==pcheck && p[7]==pcheck))
   {
        pcheck = 'w';
   }

system("cls");
gotoxy(0,0);
}
cout<<"Thank you for playing tic tac to by YoutSquad";
    getch();
    return 0;
}
