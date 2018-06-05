#include "cl_application.h"
#include "cl_1.h"
#include "cl_2.h"
#include "cl_3.h"
#include "cl_4.h"
#include "menu.h"
#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>

cl_application :: cl_application()
{
    set_object_name ( "root" );
    set_state       ( 1 );
}
void cl_application :: bild_tree_objects ( )
{   
        ob_1.set_object_name ( "ob_1" );
        ob_1.set_parent      ( this   );
        ob_4.set_object_name ( "ob_4" );
        ob_4.set_parent      ( this   );
        ob_7.set_object_name ( "ob_7" );
        ob_7.set_parent      ( this );

        ob_2.set_object_name ( "ob_2" );
        ob_2.set_parent      ( & ob_1 );
        ob_3.set_object_name ( "ob_3" );
        ob_3.set_parent      ( & ob_2 );

        ob_5.set_object_name ( "ob_5" );
        ob_5.set_parent      ( & ob_4 );
        ob_6.set_object_name ( "ob_6" );
        ob_6.set_parent      ( & ob_5 );


        ob_8.set_object_name ( "ob_8" );
        ob_8.set_parent      ( & ob_9 );


        ob_9.set_object_name("ob_9");
        ob_9.set_parent(&ob_7);
        ob_10.set_object_name ("ob_10");
        ob_10.set_parent (&ob_6);


//    ob_1.set_object_name ( "ob_1" );
//    ob_1.set_parent      ( this   );

//    ob_2.set_object_name ( "ob_2" );
//    ob_2.set_parent      ( & ob_1 );

//    ob_3.set_object_name ( "ob_3" );
//    ob_3.set_parent      ( & ob_2   );


//    ob_4.set_object_name ( "ob_4" );
//    ob_4.set_parent      ( & ob_3 );

//    ob_5.set_object_name ( "ob_5" );
//    ob_5.set_parent      ( & ob_3 );

//    ob_6.set_object_name ( "ob_6" );
//    ob_6.set_parent      ( & ob_5 );

//    ob_8.set_object_name ( "ob_8" );
//    ob_8.set_parent      ( & ob_9 );


//    ob_9.set_object_name("ob_9");
//    ob_9.set_parent(&ob_7);
//    ob_10.set_object_name ("ob_10");
//    ob_10.set_parent (&ob_6);


//    set_connect ( SIGNAL_D  ( signal_1 ),
//                  HENDLER_D ( ob_1.handler_1 ));

//    set_connect ( SIGNAL_D  ( signal_2 ),
//                  HENDLER_D ( ob_1.handler_1 ));

//    set_connect ( SIGNAL_D  ( signal_2 ),
//                  HENDLER_D ( ob_2.handler_2 ));

//    ob_8.set_connect ( SIGNAL_D  ( ob_8.signal_3 ),
//                  HENDLER_D ( ob_8.handler_4 ));

//emit_signal ( SIGNAL_D  ( signal_1 ), " out signal #1" );

//emit_signal ( SIGNAL_D  ( signal_2 ), "out signal #2" );

//emit_signal ( SIGNAL_D  ( signal_3 ), "out signal #3" );

}
int cl_application :: exec_app ( )
{


//    show_object_state();

    instal set;
    set.enter_game();



    //вывод Курсовая

    ob_1.enter();




//   menu ob_set;

//   ob_set.set_enter();



//     enter_sig_num ( );

//     ob_3.exep_sort( ob_2.set_sort (ob_1.get_mas()));

    return 0;
}


//void cl_application :: signal_1 ( string s_text )
//{

//}
//void cl_application :: signal_2 ( string s_text )
//{

//}
//void cl_application :: signal_3 ( string s_text )
//{

//}

void cl_application :: show_object_state ( )
{
    show_tree (this);
    cout << endl;
//    cout<<get_object("/root/ob_1") -> get_object_name() << endl;
//        cout<<get_object("/root/ob_3/ob_5/ob_6") -> get_object_name()<<endl;
//            cout<<get_object("/root/ob_7/ob_9/ob_8") -> get_object_name()<<endl;

    cout<< endl;
}
void cl_application :: show_state_next ( cl_base * ob_parent )
{
    if ( ob_parent -> get_state ( ) == 1 ) {
        cout << "The object " << ob_parent -> get_object_name () << " is ready" << endl;
    }
    else {
        cout << "The object " << ob_parent -> get_object_name () << " is not ready" << endl;
    }
    if ( ob_parent -> children.size ( ) == 0 ) {return;}

    ob_parent -> it_child = ob_parent -> children.begin ( );
    while ( ob_parent -> it_child != ob_parent -> children.end ( ) ) {
        show_state_next ( ( * ( ob_parent -> it_child ) ) );
        ob_parent -> it_child ++;
    }
}

void cl_application :: rebild_objects ( )
{
    ob_2.delete_child ( "ob_4" );
    ob_4.set_parent   ( & ob_3 );
    ob_4.set_state    ( 0 );
}

void cl_application :: show_tree_state ( )
{
    show_tree(this);
}

void cl_application :: show_tree ( cl_base * ob_parent )
{
    for (int i = 0; i < get_level(); i++) {cout << "   ";}
    cout << ob_parent -> get_object_name () << endl;
    if ( ob_parent -> children.size ( ) == 0 ) {return;}
    ob_parent -> it_child = ob_parent -> children.begin ( );
    change_level('+');
    while ( ob_parent -> it_child != ob_parent -> children.end ( ) ) {
        show_tree ( ( * ( ob_parent -> it_child ) ) );
        ob_parent -> it_child ++;
    }
    change_level('-');
}


//void cl_application :: enter_sig_num ( )
//{
//    int num;
//    string msg;
//    while (true) {
//    cout << "enter interface number:" << endl;
//    cin >> num;
//    if (num == 0) break;
//    cout << "enter your message:" << endl;
//    cin >> msg;
//    switch (num) {
//    case 1:
//        emit_signal ( SIGNAL_D  ( signal_1 ), msg );
//        break;
//    case 2:
//        emit_signal ( SIGNAL_D  ( signal_2 ), msg );
//        break;
//    case 3:
//         ob_8.emit_signal ( SIGNAL_D  ( ob_8.signal_3 ), msg );
//         break;
//    default:
//        break;
//    }
//    }
//}
