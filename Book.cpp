#include <iostream>
#include <cstring>
using namespace std ;
int main(){

    struct books{

        float price;
        int pages ;
        char name[90] ; 

    } book1, book2 ;

    book1.price = 100.5 ;
    book1.pages = 300 ;
    strcpy( book1.name, "Jab Zindagi Shuru Hogi" ) ;
    
    book2.price = 200.5 ;
    book2.pages = 250 ;
    strcpy( book2.name, "Qasam Us Waqt Ki" ) ;

    cout << "The price is : " << book1.price << endl ;
    cout << "Pages are : " << book1.pages << endl ;
    cout << "THe name is : " << book1.name << endl << endl ;

    cout << "The price is : " << book2.price << endl ;
    cout << "Pages are : " << book2.pages << endl ;
    cout << "THe name is : " << book2.name << endl ;

    return 0 ;
}