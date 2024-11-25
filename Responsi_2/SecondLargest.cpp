#include <iostream>
using namespace std;

int main()
{
    int n, largestnumber, secondlargest, number;
    
    cout<<"Enter number of elements in a list: ";
    cin>>n;
    
    if(n<2)
    {
        cout<<"Require 2 or more values to find the second largest";
    }else{
        cout<<"Enter "<<n<<" numbers: ";
        cin>>number;
        
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
        }
