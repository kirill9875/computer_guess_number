#include "cl_2.h"
#include "cl_1.h"
#include "cl_3.h"
#include <iostream>
#include <algorithm>
#include "cl_application.h"

cl_2 :: cl_2 ( )
{
    set_state ( 1 );

}

cl_2 :: menu_name(int min, int max)
{
    guess = (min + max) / 2;
    count = (int) ceil(log2(max - min));

        ((cl_3*) get_object("/root/ob_1/ob_2/ob_3")) ->   gats( guess,  count, max,min) ;
}






//    vector <int> cl_2  :: set_sort ( vector <int> mas )
//    {

//        sort (mas.begin() ,mas.end());

//    ((cl_3*) get_object("/root/ob_1/ob_2")) -> exep_sort (  mas ) ;
//    return mas;
//    }

//void cl_2 ::  handler_2 ( string s_text)
//{
//    cout << " Signal handler_2 = " << s_text << endl;
//}


