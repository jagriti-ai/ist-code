 //find if the character is lower case or upper case through ASCII value
 #include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter character"<<endl;  //enter the character you want to check 
    cin>>ch;

    if(ch>='65' && ch<='90'){
        cout<<"upper case\n";
    }else{ 
        cout<<"lower case\n";
    }
    
return 0;
    
}