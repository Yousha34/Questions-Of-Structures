#include <iostream>
using namespace std ;
int main (){

    struct date{

        int day ;
        int month ;
        int year ;

    } ;

    bool flag = true ;

    date first ;

    first.day = 28 ;
    first.month = 12 ;
    first. year = 2004 ;

    date second ;

    second.day = 10 ;
    second.month = 12 ;
    second.year = 2006 ;

    if( first.day != second.day ){
        flag = false ;
    }

    if( first.month != second.month ){
        flag = false ;
    }

    if( first.year != second.year ){
        flag = false ;
    }

    if( flag == true ){
        cout << "Same" ;
    }

    else{
        cout << "Differrent" ;
    }

    return 0 ;
}