#ifndef CL_BASE_H
#define CL_BASE_H

#include <iostream>
#include <string>
#include <vector>
#include <csignal>
#include <map>


//#define SIGNAL_D(  signal_f  ) ( ( void (*) ( string ) ) ( & ( signal_f  ) ) )
//#define HENDLER_D( hendler_f ) ( ( void (*) ( string ) ) ( & ( hendler_f ) ) )

using namespace std;

class cl_base
{
public:
    cl_base ( cl_base * p_parent = 0 );

    void    set_object_name ( string object_name );
    string  get_object_name ( );
    void    set_parent      ( cl_base * p_parent );
    void    add_child       ( cl_base * p_child  );

    void    delete_child    ( string    s_object_name );
    void    set_state       ( char      c_state  );
    char    get_state       ( );
    void    set_level       ( int level);
    int     get_level       ( );
    void    change_level    (char sym);
    vector < cl_base * >  children;
    vector < cl_base * > :: iterator it_child;

    //signal

    void set_connect    ( void ( * s_ignal   ) ( string ),
                          void ( * h_hendler ) ( string ) );
    void delete_connect ( void ( * s_ignal   ) ( string ),
                          void ( * h_hendler ) ( string ) );
    void emit_signal    ( void ( * s_ignal   ) ( string ), string s_command );

    multimap < void ( * ) ( string ), void ( * ) ( string ) > connects;
    multimap < void ( * ) ( string ), void ( * ) ( string ) > :: iterator it_connects;

    cl_base * p_parent;

//    void signal_1 (string s_text);
//    void signal_2 (string s_text);


    string get_path_item( string object_path, int i_lvl);
    cl_base * get_root();
    cl_base * get_object(string object_path);
    cl_base *    get_child       ( string object_name  );
    string    object_name;
     string object_path;
private:
    int i_level;

    int       level;
    char      c_state;
};

#endif // CL_BASE_H
