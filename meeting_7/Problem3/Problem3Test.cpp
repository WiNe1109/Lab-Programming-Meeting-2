#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (b==0){
        return a;
    }
    return gcd (b, a % b);
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    
    int result = gcd(a, b);
    cout <<"The GCD for "<< a <<" and " <<b<<" is "<<result<<endl;
    cout <<"Test is succesful"<<endl;
    
    return 0;
}
