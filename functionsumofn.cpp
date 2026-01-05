#include<iostream>
using namespace std;

int sum(int a){
    int s=0;
    for (int i=1;i<=a;i++){
       
        s=s+i;}
    return s;
}

int main(){
    int s=sum(50);
    cout<< s;
}
