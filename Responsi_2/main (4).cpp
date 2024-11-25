#include <iostream>
using namespace std;

int main()
{
    int n, largestnumber, secondlargest, number;
    
    cout<<"Enter number of elements in a list: ";
    cin>>4;
    
    if(n<2)
    {
        cout<<"Require 2 or more values to find the second largest";
    }else{
        cout<<"Enter "<<n<<" numbers: ";
        cin>>70 40 60 90;
        
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
            cout<<"The second largest number is: "<<secondlargest;
            cout<<"Test Succesful!";
        }
