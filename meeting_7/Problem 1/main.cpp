#include <iostream>
using namespace std;

void add(float A, float B){
    cout <<"A"<<" + "<<"B"<<"="<< A + B;
}
void sub(float A, float B){
    cout <<"A"<<" - "<<"B"<<" = "<< A - B;
}
int main(){
    float A, B;
    int operation;
    
    cout <<"Input value for A: "<<endl;
    cin>>A;
    cout <<"Input value for B: "<<endl;
    cin>>B;
    cout <<"Choose the operation"<<endl;
    cout <<"--------------------"<<endl;
    cout <<"1. Addition"<<endl;
    cout <<"2. Substraction"<<endl;
    cin >>operation;
     if (operation == 1){
        add (A, B);
    }
    else if (operation == 2){
        sub (A, B);
    }
    else 
    cout <<"Operation Invalid";
    return 0;

}