#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctime> 


using namespace std;
	
void main() 
{ 
   SetConsoleOutputCP(1251);
   
   srand(time(0));
   int a, i;
   int b;
   a=rand()%100;
   i=0;
  do
   {
   
   cout<<"Введите число от 1 до 100:\n";
	   cin>>b;
	   i=i+1;
       if (b<a)
            cout<<"Меньше!\n";
	   else if (b>a)
		   cout<<"Больше!\n";
	   else 
		   cout<<"Угадали!\n";
   }
   while (b!=a);
   cout<<"Верно!\n";

   switch (i)
   {
   case 1:
   case 2:
	   cout<<"Вы мастер!\n";
	   break;
   
   case 3:
   case 4:

	   cout<<"Вы хороший игрок!\n";
	   break;
   case 5:
       cout<<"Вы неплохой игрок!\n";
	   break;
   default:
	   cout<<"К сожалению Вам надо блольше тренироваться!\n";
   }
} 