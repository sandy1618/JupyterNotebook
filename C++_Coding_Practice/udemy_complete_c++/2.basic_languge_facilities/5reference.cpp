#include <iostream>
int main(){
    using namespace std;
   //referent
    int x = 10;
     //  reference 
    int &ref = x ;// requires an l-value and reference by copy assignment.

    int y = 2 ;
    ref = y ;
    cout << "x : " << x << endl ;
    cout << "ref: " << ref << endl ;

    return 0 ;
}
// x : 2
// ref: 2
