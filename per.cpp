#include <iostream>
#include <cstring>

int n;
int i=0;
using namespace std;
class pld{
public:
char *name,*add,*dn,*In,b[3];
int num,ht,wt;


public:
pld(){

name=new char;
add=new char;
dn=new char;
In=new char;
strcpy(name,"ganesh");
strcpy(add,"loni");
strcpy(dn,"nodriving");
strcpy(In,"noinsurreance");
num=12344;
ht=45;
wt=50;

}
~pld(){
cout<<"detractor called"<<endl;



}
pld(int h,int d){
ht=h;
wt=d;

}
static int cnt;
void accept(){
cnt++;
cin>>name>>add>>dn>>In>>b>>num>>ht>>wt;

}
void display(){
cout<<name<<"\t"<<add<<"\t"<<dn<<"\t"<<In<<"\t"<<num<<"\t"<<ht<<"\t"<<wt<<endl;

}
static void dcnt(){
cout<<"count is :"<<cnt;

}





friend void search(pld[],int );
}p[100];
int pld::cnt;
void search(pld[],int i){
int pn;
cout<<"enter the policy number to searched"<<endl;
cin>>pn;
int flag=0;
for(int i=0;i<n;i++){
if(p[i].num==pn){
flag=1;
p[i].display();
break;
}


}
if(flag==0){
cout<<"record not found"<<endl;
}

}

void Delete(){

int q;
cout<<" enter the polciy nuber"<<endl;
cin>>q;
int f=0;
for(int i=0;i<n;i++){
if(p[i].num==q){
f=1;
do{
p[i]=p[i+1];
i++;


}while(i<n);
n--;

break;
}
}
if(f==1){
cout<<" record not found"<<endl;

}
}
void update(){
cout<<"enter the policy number to searched"<<endl;
int q;
cin>>q;
int f=0;
for(int i=0;i<n;i++){
if(p[i].num==q){
f=1;
cout<<" record found"<<endl;
p[i].accept();
break;
}
}
if(f==1){
cout<<" record not founds"<<endl;
}

}

int main(){
cout<<"enter the number of record"<<endl;
cin>>n;
int ch;
cout<<"1 to accept"<<endl<<"2 to display"<<endl<<"3 to search"<<endl<<"4 to cnt"<<endl<<" 5 to upate "<<endl<<"6 to delete";
cin>>ch;

while(ch!=0){
switch(ch){
case 1:

cout<<" name	"<<"add	"<<"dn		"<<"in		"<<"num	"<<"ht		"<<"wt"<<endl;
for(int i=0;i<n;i++){
cout<<"i"<<i<<endl;
p[i].accept();

}

break;
case 2:
for(int i=0;i<n;i++){
p[i].display();

}
break;
case 3:
search(p,i);
break;
case 4:
pld::dcnt();
break;
case 5:
update();
break;
case 6:
Delete();
}
cout<<"1 to accept"<<endl<<"2 to display"<<endl<<"3 to search"<<endl<<"4 to cnt"<<endl<<"5 to upadate"<<endl<<" 6 to delete";
cin>>ch;


}

return 0;



}











