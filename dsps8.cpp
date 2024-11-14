#include <iostream>
using namespace std;

class D{
int front=-1;
int rare=-1;
int q[20];
 
public:
void insertfront() {
 
if(front==0 ){
cout<<"cannot insert element from front"<<endl;}
 
else  if(front==-1 && rare==-1){
 front=0;
 rare=0;
 cout<<"enter the element "<<endl;
 cin>>q[front];
 
 }
 else {
 front--;
 cout<<"enter the element "<<endl;
 cin>>q[front];
 
 
 
 }
 }
 
 void insertrare () {
 if(rare==19){
 
 cout<<"cannot insert from rare end"<<endl;
 }
 else if(front==0 && rare==19){
 cout<<"queue is full"<<endl;
 }
 else {
 cout<<"enter the element"<<endl;
 rare++;
 cin>>q[rare];
 
 }
 
 
 
 }
 void deletefront () {
 if(front==rare){
 cout<<q[front]<<"is deleted"<<endl;
 front=-1;
 rare=-1;
 
 }
 else if(front==-1 && rare==-1){
 cout<<"queue is emprty<<"<<endl;
 
 }
 else {
 cout<<"element is deleted"<<q[front]<<endl;
 front++;
 }
 
 
 }
 void deleterare() {
 if(front==-1 && rare==-1){
 cout<<"queue is empty:"<<endl;
 }
 else if(rare==front){
 cout<<"element delted is "<<q[rare]<<endl;
 rare=-1 ;
 front=-1;
 }
 else {
 cout<<"element is deleted "<<q[rare]<<endl;
 rare--;
 
 
 }
 
 
 
 
 
 
 
 }
 void display() {
 for(int i=front;i<=rare;i++){
 cout<<"\t"<<q[i];
 }
 cout<<endl;
 
 }




}Q;
int main() {
int ch;
cout<<"1 to insertfront "<<endl<<"2 to insertrare"<<endl;
cin>>ch;
while(ch!=0){
switch(ch) {
case 1:
Q.insertfront();
break;
case 2 :
Q.insertrare();
break;
case 3:
Q.deletefront();
break;
case 4:
Q.deleterare();
break;
case 5 :
Q.display();


}
cout<<"1 to insertfront "<<endl<<"2 to insertrare"<<endl<<" 3 to deletefront"<<endl<<"4 to deleterare"<<endl<<"5 to display"<<endl;
cin>>ch;

}
return 0;
}



