 //find if the character is lower case or upper case
 #include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter character"<<endl;  //enter the character you want to check 
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"character is lower case\n";
    }else{ 
        cout<<"character is upper case\n";
    }
    
return 0;
    
}