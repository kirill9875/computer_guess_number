#include "cl_3.h"
#include "cl_2.h"
#include "cl_4.h"
#include "cl_application.h"
#include "windows.h"


cl_3::cl_3()
{
    set_state ( 1 );
 }

cl_3 :: gats(int guess, int count, int max, int min)

{

      for ( i = 0; i < count; ++i)
    {

        system("cls");

        char ans;
         l1:
       cout << "The guessed number is less than or equal to  " << guess << "  ? (y/n)\n";
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

            cout << " ERROR!\n Try again!\n " << endl; goto l1;

            return  0;
       }

            guess = (min + max) / 2;

          if (max == min)

         {

           cout << " This is " << guess << " \n ";



           cout<< "\n THE END " << endl;

         }
     }



    ((cl_4*) get_object("/root/ob_1/ob_2/ob_3/ob_4")) ->  out (i) ;
}








//    void cl_3 :: exep_sort (vector <int> mas )
//    {

//        for ( vector <int> :: iterator it_mas = mas.begin() ; it_mas!=mas.end() ; ++it_mas)
//        {
//            cout  << *it_mas << "   ";
//        }
//    }
//    void cl_3 :: handler_3 ( string s_text )
//    {
//        cout << " handler = "<< s_text << endl;
//}


