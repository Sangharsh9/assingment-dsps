/* pizza parlour accepting m max m order order are serve on basis of first in first out .order cannnot be cancelledwrite a cpp program which simulates the given system by using circular quque*/
#include <iostream>
using namespace std;
int front=-1;
int rare=-1;
class food{
public:
char *name;
char *address;
int count=0;
food(){
name=new char;
address=new char;

}
~food(){
int flag=0;
if(flag==0) {
cout<<"destructor is called"<<endl;
flag=1;
}

}
//accepting the order
void acceptorder(){

cout<<"enter name and address"<<endl;
cin>>name>>address;
cout<<"enter the quatity"<<endl;
cin>>count;
cout<<"your order will ready is "<<count*5<<"   minutes"<<endl;


}
//serve the order
void serveorder() {
cout<<"name :"<<name<<endl;
cout<<"addresss :"<<address<<endl; 
cout<<"quantity :"<<count<<endl;
if(front==0){
cout<<"cost :"<< count*100<<endl;
cout<<" discount price is "<<(count-1)*100<<endl;
}
else {
cout<<"cost is : "<<100 *count<<endl;}
}
// display is total order of shop
void display() {

cout<<name<<"\t"<<address<<"\t"<<count<<"\t\t"<<100* count<<endl;





}


}b[10];

int main(){
int ch;cout<<"1 to accept "<<endl<<" 2 to serveorder"<<endl<<"3 to display "<<endl;
cin>>ch;

while(ch!=0){

switch(ch){
case 1:
if(rare==-1 && front==-1){
front=0;
rare=0;
b[rare].acceptorder();


}
else if(front ==0 && rare==10-1  || rare==front-1){

cout<<"store  is full"<<endl;
}
else{
rare=(rare+1)%10;
b[rare].acceptorder();


}
break;
case 2:
if(front==-1 || front==(rare+1)){
cout<<"order is not available "<<endl;



}
else if (front==rare){
cout<<"there is no order"<<endl;
}
else{
b[front].serveorder();
front =front+1 %10;
}
break;
case 3:
cout<<"name"<<"\t"<<"address"<<"\t"<<"quantity"<<"\t"<<"total "<<endl;
for(int i=front;i<=rare;i++){
b[i].display();
}







}
cout<<"1 to accept "<<endl<<" 2 to serveorder"<<endl<<"3 to display "<<endl;
cin>>ch;


}
return 0;
}
