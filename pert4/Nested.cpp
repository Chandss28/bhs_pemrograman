#include <iostream>

using namespace std;

void postfix(){
    int a = 1;
    cout << a << " Ini nilai awal i" << endl;
    cout << ++a << " Ini nilai prefix" << endl;
    cout << a++ << " Ini nilai postfix" << endl
}

int main(){
      cout << "iteration statement "<< endl;
      cout << "penggunaan for "<< endl;

      int a = 1;
      int b = 1;
     //  apa bedanya int a = 1 itu di luar for dengan di dalam for 

     for( a; a <= 5; a++)// a++ postfix
     {
         for(b ; b <= a; ++b)// ++b prefix
         {
             cout << b << endl;
         }
     }

     cout << endl;


     cout << "ini postfix prefix "<< endl;
     postfix();
     cout << "ini nested if "<< endl;
     nestedif();
     cout << "ini nested if "<< endl;

    


     return 0;

}

void nestedfor(){}
int main(){
    int i = 1;
    int j = 1;
    for(i; i<=3; i++){ //++dibelakang dsbt postfix increment
        for(j; j<=1;++j){ //++didepan dsbt prefix increment
            cout << j << " ";
        }
    }
    cout << endl; 
    return 0;
}