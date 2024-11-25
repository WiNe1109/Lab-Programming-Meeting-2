#include <iostream>
using namespace std;
int main()
{
    int n, number, maxnumber;
    
    cout<<"Enter elements for the list: ";
    cin>>5;
    
    if(n<=1)
    {
        cout<<"Element should be greater than 1 to find maxnumber";
    }else{
        cout<<"Enter "<<n<<" numbers: ";
        cin>>60 40 50 20;
        for(int i = 1; i<n; i++)
        cin>>number;
        {
            if(number > maxnumber)
            {
               maxnumber = number; 
            }
        
        }
    }
    cout<<"The max number is: "<<maxnumber<<endl;
    
}
