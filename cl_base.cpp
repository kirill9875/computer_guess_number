 #include "cl_base.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <csignal>


cl_base :: cl_base (  cl_base * p_parent )
{
    set_level(0);
    if ( p_parent ) {
        this -> p_parent = p_parent;
        p_parent -> add_child ( this );
    }
    else {
        this -> p_parent = 0;
    }
}
void cl_base :: set_object_name ( string object_name )
{
    this -> object_name = object_name;
}
string cl_base :: get_object_name ( )
{
    return  object_name;
}
void cl_base :: set_parent ( cl_base * p_parent )
{
    if ( p_parent ) {
        this -> p_parent = p_parent;
        p_parent -> add_child ( this );
    }
}
void cl_base :: add_child ( cl_base * p_child )
{
    children.push_back ( p_child );
}
void cl_base :: delete_child ( string s_object_name )
{
    it_child = children.begin ( );

    while ( it_child != children.end ( ) ) {
        if ( ( * ( it_child ) ) -> get_object_name ( ) == s_object_name ) {
            children.erase ( it_child );
            return;
        }
        it_child ++;
    }
}

void cl_base :: set_state ( char c_state )
{
    this -> c_state = c_state;
}

char cl_base :: get_state ( )
{
    return c_state;
}

void cl_base :: set_level ( int level)
{
    this -> level = level;
}

int cl_base ::get_level ( )
{
    return level;
}

void cl_base :: change_level(char sym)
{
    switch (sym) {
    case '+':
        level++;
        break;
    case '-':
        level--;
        break;
    default:
        break;
    }
}

//определение ссылки на головной объект по координате
cl_base *cl_base::get_root(){
cl_base * ob_parent;
if(object_name=="root")return this;
ob_parent=p_parent;
while(ob_parent->p_parent){
ob_parent=ob_parent->p_parent;
}
return ob_parent;
}



string cl_base :: get_path_item(string object_path, int i_level)
{
    int i_start,i_end,i_lc;
    i_lc=i_start=1;
    while(i_start){
    i_end=object_path.find('/',i_start);
    if(i_lc==i_level) return object_path.substr(i_start,i_end-i_start);
    i_lc++;
    i_start=i_end+1;
    }
    return " ";
}
cl_base * cl_base :: get_child ( string object_name )
{
if ( children.size ( ) == 0 ) return 0;

it_child = children.begin ( );

while ( it_child != children.end ( ) ) {

if ( ( * it_child ) -> get_object_name ( ) == object_name ) {

return ( * it_child );
}
it_child ++;
}
return 0;
}

cl_base * cl_base::get_object(string object_path){
string s_path;
cl_base * p_parent_next;
cl_base * p_child;
int i_level_next=2;
p_parent_next=get_root();
s_path=get_path_item(object_path,1);
if(s_path!="root") return 0;
s_path=get_path_item(object_path,i_level_next);
while(!s_path.empty())
{
    p_child=p_parent_next->get_child(s_path);
    if(p_child){
        p_parent_next=p_child;
        i_level_next ++;
        s_path=get_path_item(object_path,i_level_next);
    }
    else{  return p_parent_next;}
    }
    return p_parent_next;
    }

void cl_base :: set_connect ( void ( * s_ignal   ) ( string ),
                              void ( * h_hendler ) ( string ) )
{
    connects.insert ( { s_ignal, h_hendler } );
}

void cl_base :: delete_connect ( void ( * s_ignal   ) ( string ),
                                 void ( * h_hendler ) ( string ) )
{
    if ( connects.empty ( )              ) return;
    if ( connects.count ( s_ignal ) == 0 ) return;

    it_connects = connects.find ( s_ignal );
    while ( it_connects != connects.end ( ) ) {
        if ( ( it_connects -> first  ) == s_ignal  &&
             ( it_connects -> second ) == h_hendler  ) {
            connects.erase ( it_connects );
            return;
        }
        it_connects ++;
    }
}



void cl_base :: emit_signal ( void ( * s_ignal ) ( string ),
                              string s_command )
{
    void ( * p_hendler ) ( string );
//---------------------------------------
    if ( connects.empty ( )              ) return;
    if ( connects.count ( s_ignal ) == 0 ) return;

    it_connects = connects.find ( s_ignal );

    while ( it_connects != connects.end ( ) ) {
        if ( ( it_connects -> first  ) == s_ignal ) {
            p_hendler = it_connects -> second;
            ( p_hendler ) ( s_command );
        }
        it_connects ++;
    }
}



