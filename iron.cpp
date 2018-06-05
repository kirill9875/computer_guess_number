#include "iron.h"
#include "windows.h"

iron::iron()
{

}

iron :: gats()
{
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

     }
       cout << "ERROE 404 ;)!\n";
}
