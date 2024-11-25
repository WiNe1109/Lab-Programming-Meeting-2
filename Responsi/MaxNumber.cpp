#include <iostream>
using namespace std;
int main()
{
    int n, number, maxnumber;
    
    cout<<"Enter elements for the list: ";
    cin>>n;
    
    if(n<=1)
    {
        cout<<"Element should be greater than 1 to find maxnumber";
    }else{
        cout<<"Enter "<<n<<" numbers: ";
        cin>>maxnumber;
        for(int i = 0; i<n; i++)
        {
            if(number > maxnumber)
            {
               maxnumber = number; 
            }
        
        }
    }
    cout<<"The max number is: "<<maxnumber<<endl;
    
}
