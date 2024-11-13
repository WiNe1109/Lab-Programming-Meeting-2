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
    cout <<"Enter value for a: ";
    cin>>a;
    cout <<"Enter value for b: ";
    cin>>b;
    
    int result = gcd(a, b);
    cout <<"The GCD for "<< a <<" and " <<b<<" is "<<result<<endl;
    
    return 0;
}
