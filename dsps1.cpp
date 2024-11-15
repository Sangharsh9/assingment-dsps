#include <iostream>
using namespace std;
class find{
int arr[100],n,target;


public:

void accept(){

cout<<"enter the size"<<endl;
cin>>n;
cout<<"enter the array elsement"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the target"<<endl;
cin>>target;

}
int search(){
for(int i=0;i<n;i++){
if(arr[i]==target){

cout<<"element present at "<<i<<endl;
return 0;
}
}
cout<<"element is not present"<<endl; 
return 0;
}

void  count(){
int first =-1;
int last=-1;
int c=0;
for(int i=0;i<n;i++){

if(arr[i]==target){
c+=1;

if(first==-1){
first=i;
}
last=i;
}

}
cout<<"number of occurance is"<<c<<endl;
cout<<"fist position is "<<first<<endl;
cout<<"last position is "<<last<<endl;
}
}b;


int  main(){
b.accept();
int a;
cout<<"enter one for search"<<endl;
cout<<"enter two for occurance"<<endl;
cout<<"enter two for fisrt and last positon"<<endl;
cin>>a;
if(a==1){
b.search();}
else if(a==2){
b.count();
}
return 0;
}










