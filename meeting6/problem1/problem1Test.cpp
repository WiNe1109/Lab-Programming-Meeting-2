#include <iostream>
using namespace std;

struct datamahasiswa{
        float nim; 
        float uts; 
        float uas;
        float avgscore;
    
};

int main(){
    int n = 1;
    int i;
    datamahasiswa student[n];
    
    
    
    for(int i = 0; i<n; i++){
    
    student[i].nim = 001 + i;
    student[i].uts = 80;
    student[i].uas = 90;
    student[i].avgscore = (student[i].uts+student[i].uas)/2;
}
    for(int i = 0;i<n;i++){
        cout<<  student[i].nim << endl;
        cout<<  student[i].avgscore << endl;
        cout<<"----------------"<<endl;
}
}
