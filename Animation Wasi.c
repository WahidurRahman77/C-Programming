#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
  static HANDLE h  = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
///Wahidur Rahman, ID: C233027
int main()
{
   int i, time=14900;
  for(i=27; i<=85; i++)
  {
      gotoxy(i, 9);
      printf("Wahidur Rahman"); fflush(stdout);

      usleep(time);
      gotoxy(i, 9);
      printf("              "); fflush(stdout);
  }
  for(i=9; i<=17; i++)
  {
      gotoxy(85, i);
      printf("Wahidur Rahman"); fflush(stdout);

      usleep(time);
      gotoxy(85, i);
      printf("              "); fflush(stdout);
  }
  for (i = 85; i >= 27; i--)
  {
       gotoxy(i, 17);
       printf("Wahidur Rahman"); fflush(stdout);

       usleep(time);
       gotoxy(i, 17);
       printf("              "); fflush(stdout);
  }
  for(i=17; i>=9; i--)
  {
      gotoxy(27, i);
      printf("Wahidur Rahman"); fflush(stdout);

      usleep(time);
      gotoxy(27, i);
      printf("              "); fflush(stdout);
  }

  int w=120000;
    for (int i = 10; i <= 16; i++) {
        gotoxy(28, i);
        printf("cse");
        fflush(stdout);
        usleep(w);
    }
    gotoxy(30, 15);
    printf("cse"); fflush(stdout);
    usleep(w);
     gotoxy(32, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
     gotoxy(34, 13);
    printf("cse"); fflush(stdout);
    usleep(w);
     gotoxy(36, 12);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(38, 13);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(40, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(42, 15);
    printf("cse"); fflush(stdout);
    usleep(w);
      for (int i = 16; i >= 10; i--) {
        gotoxy(44, i);
        printf("cse");
        fflush(stdout);
        usleep(w);
    }///Work of "W" is done
    gotoxy(48, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(48, 15);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(48, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(48, 13);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(50, 12);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(52, 11);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(54, 10);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(56, 11);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(58, 12);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(60, 13);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(60, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(60, 15);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(60, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(58, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(56, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(54, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(52, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(50, 14);
    printf("cse"); fflush(stdout);
    usleep(w);///work of "A" is done
    gotoxy(64, 15);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(64, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(66, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(68, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(70, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(72, 16);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(72, 15);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(70, 14);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(68, 13);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(66, 12);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(64, 11);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(64, 10);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(66, 10);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(68, 10);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(70, 10);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(72, 10);
    printf("cse"); fflush(stdout);
    usleep(w);
    gotoxy(72, 11);
    printf("cse"); fflush(stdout);
    usleep(w);/// work of "S" is done

    for(int i = 76; i <= 84; i += 2)
    {
        gotoxy(i, 10);
        printf("cse");
        fflush(stdout);
        usleep(w);
    }
    gotoxy(80, 11);
    printf("cse"); fflush(stdout);
    usleep(w);
  for(int i=11; i<=15; i++)
  {
      gotoxy(80, i);
      printf("cse");
      fflush(stdout);
      usleep(w);
  }
  for(int i = 76; i <= 84; i += 2)
    {
        gotoxy(i, 16);
        printf("cse");
        fflush(stdout);
        usleep(w);
    }///work of "I" is done

    int time2=300000;
    gotoxy(30, 18);
    printf("W"); fflush(stdout);
    usleep(time2);
    gotoxy(34, 18);
    printf("A"); fflush(stdout);
    usleep(time2);
    gotoxy(38, 18);
    printf("H"); fflush(stdout);
    usleep(time2);
    gotoxy(42, 18);
    printf("I"); fflush(stdout);
    usleep(time2);
    gotoxy(46, 18);
    printf("D"); fflush(stdout);
    usleep(time2);
    gotoxy(50, 18);
    printf("U"); fflush(stdout);
    usleep(time2);
    gotoxy(54, 18);
    printf("R"); fflush(stdout);
    usleep(time2);

    gotoxy(62, 18);
    printf("R"); fflush(stdout);
    usleep(time2);
    gotoxy(66, 18);
    printf("A"); fflush(stdout);
    usleep(time2);
    gotoxy(70, 18);
    printf("H"); fflush(stdout);
    usleep(time2);
    gotoxy(74, 18);
    printf("M"); fflush(stdout);
    usleep(time2);
    gotoxy(78, 18);
    printf("A"); fflush(stdout);
    usleep(time2);
    gotoxy(82, 18);
    printf("N"); fflush(stdout);
    usleep(time2);




  usleep(5000000);
  system("cls");

  return 0;

}
