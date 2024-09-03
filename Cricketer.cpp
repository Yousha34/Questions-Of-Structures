#include<iostream>
#include<cstring>
using namespace std ;

int main(){

    struct cricketer{

        char name[50] ;
        int age ;
        int number_of_matches ;
        float average_runs ;

    } ;

    cricketer arr[3] ;

    for( int i = 0; i < 3; i++ ){

        cout << "Enter name of " << i+1 << " cricketer : " ;
        cin >> arr[i].name ;

        cout << "Enter age of " << i+1 << " cricketer : " ;
        cin >> arr[i].age ;

        cout << "Enter number od matches of " << i+1 << " cricketer : " ;
        cin >> arr[i].number_of_matches ;

        cout << "Enter average runs of " << i+1 << " cricketer : " ;
        cin >> arr[i].average_runs ;

    }

    cout << endl << endl  ;

    for( int i = 0; i < 3; i++ ){

        cout << "Name of " << i+1 << " cricketer is : " << arr[i].name << endl
             << "Age of " << i+1 << " cricketer is : " << arr[i].age << endl
             << "Number od matches of " << i+1 << " cricketer is : " << arr[i].number_of_matches << endl
             << "Average runs of " << i+1 << " cricketer is : " << arr[i].average_runs << endl ;
             
    }

    return 0 ;
}