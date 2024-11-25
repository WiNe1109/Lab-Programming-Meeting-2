#include <iostream>
using namespace std;

int main()
{
    int n, largestnumber, secondlargest, number;
    
    
    n=4;
    
    if(n<2)
    {
        
    }else{
        
        number=70; 40; 60; 90;
        
        for(int i = 1; i<n;i++)
        {
            if(number > largestnumber)
            {
                secondlargest = largestnumber;
                largestnumber = number;
            }else if (number > secondlargest){
                secondlargest = number;
            }
            }
            }
            cout<<"The second largest number is: "<<secondlargest<<endl;
            cout<<"Test Succesful!";
        }
