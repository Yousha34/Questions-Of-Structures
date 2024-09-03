#include <iostream>
#include <cstring>
using namespace std ;

int main (){

    struct base_pokemon{

        char name[50] ;
        int power ;
        char level ;

    } ;

    struct rare_pokemon{

        base_pokemon basic ;
        char ability[100] ;

    } ;

    struct legendary_pokemon{

        rare_pokemon legend ;
        char spaciality[100] ;

    } ;

    base_pokemon pikachu ;

    strcpy( pikachu.name, "Pikachu" ) ;
    pikachu.power = 80 ;
    pikachu.level = 'A' ;

    rare_pokemon dratini ;

    strcpy( dratini.basic.name, "Dratini" ) ;
    dratini.basic.power = 60 ;
    dratini.basic.level = 'S' ;
    strcpy( dratini.ability, "Very Powerful in Water" ) ;

    legendary_pokemon mew ;

    strcpy( mew.legend.basic.name, "mew" ) ;
    mew.legend.basic.power = 600 ;
    mew.legend.basic.level = 'F' ;
    strcpy( mew.legend.ability, "Very Powerful outside water" ) ;
    strcpy( mew.spaciality, "Mewtwo is originated form MEW" ) ;

    cout << "Name of base pokemon is : " << pikachu.name << endl ;
    cout << "Power of " << pikachu.name << " is : " << pikachu.power << endl ;
    cout << "Level of " << pikachu.name << " is : " << pikachu.level << endl << endl ;

    cout << "Name of rare pokemon is : " << dratini.basic.name << endl ;
    cout << "Power of " << dratini.basic.name << " is : " << dratini.basic.power << endl ;
    cout << "Level of " << dratini.basic.name << " is : " << dratini.basic.level << endl ;
    cout << "Ability of " << dratini.basic.name << " is : " << dratini.ability << endl << endl ;
    
    cout << "Name of legendary pokemon is : " << mew.legend.basic.name << endl ;
    cout << "Power of " << mew.legend.basic.name << " is : " << mew.legend.basic.power << endl ;
    cout << "Level of " << mew.legend.basic.name << " is : " << mew.legend.basic.level << endl ;
    cout << "Ability of " << mew.legend.basic.name << " is : " << mew.legend.ability << endl ;
    cout << "Spaciality of : " << mew.legend.basic.name << " is : " << mew.spaciality << endl << endl ;

    return 0 ;
}