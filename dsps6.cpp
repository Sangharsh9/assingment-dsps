#include <iostream>
using namespace std;


class  queue{

int front=-1;
int rare=-1;
int arr[10];

public:
void enqueue(){
int data;

if(front==-1 && rare=-1){
cout<<"enter hte dsats"<<endl;
cin>>data;
front=0;
rare=0;
arr[rare]=data;
rare=(rare+1)%10;



}
else if(front ==0 && rare==10-1  || rare==front-1){

cout<<"queue is full"<<endl;
}
else {
cout<<"enter hte dsats"<<endl;
cin>>data;

}

}

void dequeue(){
if(front==-1 && rare==-1){
cout<<"queue is emrty"<<endl;
}
else{

cout<<"item deleted is "<<arr[front]<<endl;
front=(front+1) %10;
}
}





}q;


int main() {

q.enqueue();
q.dequeue();

return 0;





}
