#include <iostream>

using namespace std;
class LMS {

public:
LMS *start=NULL;
string tt,pp,au;
int prize;
LMS *next;
void accept(){
LMS *nnode=new LMS;
LMS *temp;
cout<<"enter book title,author,pub"<<endl;
cin>>nnode->tt;
cin>>nnode->au;
cin>>nnode->pp;
cout<<"enter the prize"<<endl;
cin>>nnode->prize;
if(start==NULL){
nnode=start;
start=temp;


}
else {
while(temp!=NULL){
temp=temp->next;
}
temp->next=nnode;


}
}
void display () {
LMS *temp=start;
while(temp!=NULL){
cout<<temp->tt<<"\t"<<temp->au<<"\t"<<temp->pp<<"\t"<<temp->prize<<endl;
temp=temp->next;


}





}

                                             


}s;

int main () {
int ch;
cout<<"1 to accept"<<endl<<"2 to display"<<endl;
cin>>ch;
while(ch!=0){
switch (ch) {
case 1 :
s.accept();
break;
case 2 :
s.display();
break;
cout<<"1 to accept"<<endl<<"2 to display"<<endl;
cin>>ch;

}
}






return 0;
}

