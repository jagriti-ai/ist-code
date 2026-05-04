#include<iostream>    //command for giving grades to the students
using namespace std;

int main(){

    int marks;
    cout<<"Enter marks:"<<endl; //here you can enter only numerical value
    cin>>marks;
    if(marks>=90){
        cout<<"A"<<endl;
        cout<<"STAR PERFORMER\n";  
        cout<<"CONGRATS\n";
    }else if(marks>=80 && marks<=90){
        cout<<"B"<<endl; 
        cout<<"GOOD PERFORMER"<<endl;
        cout<<"CONGRATS\n";
    }else if(marks>=70 && marks<=80){
        cout<<"C"<<endl;
        cout<<"CAN PERFORM BETTER"<<endl;
        cout<<"CONGRATS"<<endl;
    }else{
        cout<<"D\n";
        cout<<"FAIL\n";
        cout<<"DO HARDWORK NEXT TIME\n";
    }
    return 0; 
    }
//RESULT FOR CLASS 10==> CONGRATULATIONS TO THE CHILDREN ARE PARENTS
// FAILURES MAY VISIT MAM MS.SEEMA KATARIA










