#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"enter a alphabet:";
    cin>>a;

    if(int(a) >=65 && int(a) <=90){
        cout<<"the entered alphabet is uppercase"<<endl;
    }
    else if(int(a) >=97 && int(a) <=122){
        cout<<"the entered alphabet is lowercase"<<endl;
    }
    else{
        cout<<"the entered character is not an alphabet"<<endl;
    }
}
