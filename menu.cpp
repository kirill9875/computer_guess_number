#include "menu.h"
#include <iostream>
#include <cmath>
#include "setting_all.h"
#include "cl_application.h"
#include "set_out.h"

#include "windows.h"



using namespace std;

menu::menu()
{
    cout<< "Press 0 to exit"<< endl;
    cout << "Enter the namber "<<endl;

    cin >> max;

    if(max==0)
    {
        cout << "thanks for games"<< endl;
        exit(0);
    }
//    return max;
}

 menu:: set_enter()

{

    cout<< "Press 0 to exit"<< endl;
    cout << "Enter the namber "<<endl;

    cin >> max;

    if(max==0)
    {
        cout << "thanks for games"<< endl;
        exit(0);
    }
 }



//    int guess = (min + max) / 2;
//    int  count = (int) ceil(log2(max - min));

//    for (int i = 0; i < count; ++i)
//    {

//        system("cls");

//        cout << "The guessed number is less than or equal to  " << guess << "  ? (y/n)\n";


//        char ans;
//        cin >> ans;

//        Sleep(500);

//       switch(ans)
//       {
//            case 'y':
//            {
//            max = guess;;
//            break;
//            }
//            case 'n':
//            {
//            min = guess + 1;
//            break;
//            }

//            default:
//            cout << "ERROR vvod" << endl;
//            return 0;
//       }

//            guess = (min + max) / 2;

//          if (max == min)

//          {
//           cout << "This is " << guess << "\".\n";
//           cout<< "\n THE END " << endl;
//           return 0;

//           }

//     }
//       cout << "ERROE 404 ;)!\n";

//    return max ;





