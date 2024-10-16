#include <iostream>
using namespace std;

struct datamahasiswa{
        float nim; 
        float uts; 
        float uas;
        float avgscore;
    
};

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    if(n>50){
        cout<<"Value exceeds the limit of 50"<<endl;
    }
    datamahasiswa student[n];
    
    
    
    for(int i = 0; i<n; i++){
    
    cout<<"Enter your student ID number (NIM): ";
    cin>>student[i].nim;
    cout<<"Enter your UTS score: ";
    cin>>student[i].uts;
    cout<<"Enter your UAS score: ";
    cin>>student[i].uas;
    student[i].avgscore = (student[i].uts+student[i].uas)/2;
   
}
    for(int i = 0;i<n;i++){
        cout<<"NIM: "<< student[i].nim<<endl;
        cout<<"Average Score: "<<student[i].avgscore<<endl;
        cout<<"----------------"<<endl;
}
}