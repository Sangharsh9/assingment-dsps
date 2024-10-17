
#include <iostream>
int n=0;
using namespace std;
class bank{


int account;
int amount;
char name[10];
public:
bank(){
account=0;
amount=0;


}
void accept(){

cout<<"enter the account no"<<endl;
cin>>account;
cout<<"enter the name"<<endl;
cin>>name;
cout<<"enter the amount"<<endl;
cin>>amount;

}
void display(){

cout<<"name"<<name<<endl;
cout<<"amout is"<<amount<<endl;

}
void add(){

cout<<"enter the amount to be add"<<endl;
int a;
cin>>a;
amount+=a;
}
void withdraw(){
int a;
cout<<"enter the amount to be withdraw"<<endl;
cin>>a;
if(a>amount){
cout<<"amount not sufficir"<<endl;
}
else{
amount-=a;
}
cout<<"amount is"<<amount<<endl;

}
};
int main(){

bank b[100];
int a;
cout<<"enter 1for create acount"<<endl;
cout<<"enter 2 for login account"<<endl;
cin>>a;
while(a!=-1){
if(a==1){
cout<<"your account no is"<<n<<endl;
int i=n;
n++;
b[i].accept() ;


}
else if( a==2){
cout<<"enter 1 deposit"<<endl;
cout<<"enter 2 withdraw"<<endl;
cout<<"enter 3 to display"<<endl;
int a1;
cin>>a1;
if(a1==1){
cout<<"enter the account no"<<endl;
int acc;
cin>>acc;
b[acc].add();
}
else if(a1==2){
cout<<"enter the account no"<<endl;
int acc;
cin>>acc;
b[acc].withdraw();

}
else if(a1==3){
cout<<"enter the account no"<<endl;
int acc;
cin>>acc;
b[acc].display();
}


}
cout<<"1 to create acc"<<endl<<"enter2 to login"<<endl;
cin>>a;
}
return 0;
}

