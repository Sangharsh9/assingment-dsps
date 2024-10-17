#include <iostream>
using namespace std;
int n=0;
class student{
public:
int roll;
char name[10];
char add[10];
int r1,r2,r3,r4,r5;
public:
void accept(){

cout<<"enter roll no ,name,address"<<endl;
cin>>roll>>name;
n++;
cout<<"5 for very good"<<endl<<"4 for good"<<"3 for average"<<endl<<"2 for bad"<<endl<<"1 foe very bad"<<endl;

cout<<" how was tranning session"<<endl;
cin>>r1;
cout<<" is session was usefull "<<endl;
cin>>r2;
cout<<" was voice audiable "<<endl;
cin>>r3;
cout<<"should this type session should be done in future"<<endl;
cin>>r4;
cout<<" rate the session"<<endl;
cin>>r5;

}
void display(){

cout<<roll<<"\t"<<name<<"\t"<<endl;


}





}b[100];




void linear(){

int r;
cout<<"enter the roll no to  search"<<endl;
cin>>r;
int flag=0;
for(int i=0;i<n;i++){
if(b[i].roll==r){
cout<<"roll no "<<r<<"was present for traning"<<endl;
flag=1;
break;
}


}
if(flag==0){
cout<<"roll no "<<r<<"was not present"<<endl;
}
}

void binary(){

int r;
cout<<"enter the roll no to search"<<endl;
cin>>r;
student temp;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(b[i].roll>b[j].roll){
temp=b[i];
b[i]=b[j];
b[j]=temp;

}

}

}
int flag=0;
int s=0;
int e=n-1;
while(s<=e){
int mid=s+e/2;
if(b[mid].roll==r){
cout<<"roll no  "<<r<<"is present"<<endl;
flag=1;
break;

}
else if(b[mid].roll>r){
e=mid-1;

}
else{
s=mid+1;
}


}

if(flag==0){
cout<<"roll no"<<r<<"is not present"<<endl;

}

}

void calculate(){

float total=0;
float  ans=0;

for(int i=0;i<n;i++){
ans+=b[i].r1+b[i].r2+b[i].r3+b[i].r4+b[i].r5;
total+=25;


}


float  percent=(ans/total)*100;
if(percent<80){

cout<<"there is no need this type of session"<<endl;

}
cout<<percent<<" % student has shown positive response"<<endl;






}

int main(){
int ch;
cout<<"1 to accept "<<endl<<"2 to display"<<endl<<"3 to linear search"<<endl<<"4 to binary search"<<endl<<" 5 for feedback";
cin>>ch;
while(ch!=0){
switch(ch){
case 1:b[n].accept();
break;
case 2:
cout<<"roll no"<<"\t"<<"name"<<"\t"<<"address"<<endl;
for(int i=0;i<n;i++){
b[i].display();

}
break;
case 3:
linear();
break;
case 4:
binary();
break;


case 5:
calculate();
}
cout<<"enter the chioce"<<endl;
cin>>ch;



}

return 0;




}
