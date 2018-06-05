 #ifndef CL_APPLICATION_H
#define CL_APPLICATION_H
#include "cl_1.h"
#include "cl_2.h"
#include "cl_3.h"
#include "cl_4.h"

class cl_application : public cl_base
{
public:
    cl_application ( );
    void bild_tree_objects ( );
    int  exec_app          ( );
    void show_object_state ( );
    void show_tree_state   ( );
//    string check_address      ( cl_base * ob );
//    cl_base access            (string address);

//     void signal_1 ( string s_text );
//      void signal_2 ( string s_text );

//     void enter_sig_num ( );


private:
    void show_tree       ( cl_base * ob_parent );
    void show_state_next ( cl_base * ob_parent );
    void rebild_objects  ( );

    cl_1  ob_1;
    cl_2  ob_2;
    cl_3  ob_3;
    cl_4  ob_4;

    cl_1  ob_5;
    cl_2  ob_6;
    cl_3  ob_7;
    cl_4  ob_8;
    cl_1  ob_9;
    cl_2  ob_10;


};

#endif // CL_APPLICATION_H
