#include "cl_1.h"
#include "cl_application.h"
#include "cl_2.h"
#include "algorithm"
#include <iostream>

using namespace std;

cl_1::cl_1()
{
    set_state ( 1 );
}

//   vector <int> cl_1 :: get_mas()
//    {
//        vector <int> mas;
//        cout << "enter the number, to complete register 0"<<endl;
//        int m=1;
//        while(m!=0)
//        {
//        cin >> m ;
//        mas.push_back(m);
//        }


void cl_1 :: enter()
{
cout<< "Press 0 to exit"<< endl;
cout << "Enter the number "<<endl;



cin >> max;

if (max<0)
{
    cout << "ERROR  \n";

}

if(max==0)
{
    cout << "Thanks for games! See you later"<< endl;
    exit(0);
}


   ( ( cl_2 * )  get_object("/root/ob_1/ob_2/" )) -> menu_name (min,max) ;

 }

//void cl_1 :: handler_1 ( string s_text)
//{
//    cout << "Signal handler_1 = " << s_text << endl ;
//}



