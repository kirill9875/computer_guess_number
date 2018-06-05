#include "setting_all.h"
#include "menu.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include "set_out.h"


using namespace std;

setting_all::setting_all()
{

}
 void setting_all :: set_alg()
{

     int guess = (min + max) / 2; // , count = (int) ceil(log2(max - min));

     for (int i = 0; i < count; ++i)
     {

         system("cls");

         cout << "The guessed number is less than or equal to  " << guess << "  ? (y/n)\n";


         char ans;
         cin >> ans;

         Sleep(500);

        switch(ans)
        {
             case 'y':
             {
             max = guess;;
             break;
             }
             case 'n':
             {
             min = guess + 1;
             break;
             }

             default:
             cout << "ERROR vvod" << endl;
             return 0;
        }

             guess = (min + max) / 2;

           if (max == min)

           {
            cout << "This is " << guess << "\".\n";
            cout<< "\n THE END " << endl;
            return 0;

            }

           cout << "ERROE 404 ;)!\n";

}
 }




