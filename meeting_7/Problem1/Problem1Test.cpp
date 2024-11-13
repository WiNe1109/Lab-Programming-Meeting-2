#include <iostream>
using namespace std;

void add(float A, float B){
    cout <<"A"<<" + "<<"B"<<" = "<< A + B;
}
void sub(float A, float B){
    cout <<"A"<<" - "<<" B "<<" = "<< A - B;
}
int main(){
    float A, B;
    int operation;
    A = 2000;
    B = 1000;
    operation = 1;
    
   
     if (operation == 1){
        add (A, B);
    }
    else if (operation == 2){
        sub (A, B);
    }
    else 
    cout <<"Operation Invalid";
    cout <<endl;
    cout <<"Test is succesful"<<endl;
    return 0;
    

}
