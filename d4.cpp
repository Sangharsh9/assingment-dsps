#include <iostream>
#include <cstring>
using namespace std;
int  length( char s[]){
int c=0;
for(int i=0;s[i]!='\0';i++){
c++;
}
return c;
}

bool   com( char s1[], char s2[]){
int len1=length(s1);
int len2=length(s2);
if(len1!=len2){
return false;
}
for(int i=0;i<len1;i++){
if(s1[i]!=s2[i]){

return false;
}

}
return true;
}

void con(char s1[],char s2[]){
int len1=length(s1);
int len2=length(s2);
int len3=len1+len2;
char *ans;
ans=new char;

int j=0;
for(int i=0;i<len1;i++){
ans[j]=s1[i];
j++;

}
for(int k=0;k<len2;k++){
ans[j]=s2[k];
j++;
}
cout<<" ans"<<endl;
cout<<ans<<endl;
}

void reverse(char S[]){
int c=0;
for(int i=0;S[i]!='\0';i++){
c++;
}

int i=0;
int e=c-1;
while(i<e){

char temp=S[i];
S[i]=S[e];
S[e]=temp;
i++;
e--;
}
cout<<" reverse string is"<<S<<endl;




}
void copy( char s1[],char s2[]){

s2=s1;


}
void count(){

char *a;
a=new char;
int *an;
an=new int;
int c=0;
for(int i=0;a[i]!='\0';i++){
c++;
}
cout<<"enter the string"<<endl;
cin>>a;
int count=0;
for(int i=0;a[i]!='\0';i++){
 count=0;

for(int j=0;a[j]!='\0';j++){
if(a[i]==a[j]){
count++;
}
}
an[i]=count;

}
for(int i=0;a[i]!='\0';i++){

cout<<"count of"<<a[i]<<" is "<<an[i]<<endl;
}




}
void lower(){

char *a;
a=new char;
cout<<"enter the string"<<endl;
cin>>a;
for(int i=0;a[i]!='\0';i++){
if(a[i]>='A' &&a[i]<='Z'){
int an=a[i]-'A';
a[i]=an+ 'a';


}

}
cout<<" lowercase string is   "<<a<<endl;



}
void upper(){
char *a;
a=new char;
cout<<"enter the string"<<endl;
cin>>a;
for(int i=0;a[i]!='\0';i++){

if(a[i]>='a' && a[i]<='z'){
int an=a[i]-'a';
a[i]=an +'A';

}

}
cout<<"upper case string is  "<<a<<endl;


}

void panlin(){
char *a;
a=new char;
cout<<" enter the string "<<endl;
cin>>a;
int j=0;
while(a[j]!='\0'){

j++;

}
j--;
int f=0;
int i=0;
while(i<j){
if(a[i]!=a[j]){
cout<<"not palindrom"<<endl;
f=1;
break;
}
i++;
j--;


}
if(f==0){
cout<<" string is palindrome"<<endl;

}

}
int main(){
int ch;

cout<<"1 to length"<<endl<<"2 to concat"<<endl<<"3 to compare"<<endl<<" 4 to copy"<<endl<<" 5 to reverse"<<endl<<" 6 to count"<<endl<<"7 to paindrome"<<endl<<"8 to lowercase "<<endl<<" 9 to uppercase "<<endl;
cin>>ch;
while(ch!=0){

switch(ch){

case 1:
char *s0;
s0=new char;
cout<<" enter 1 st string"<<endl;
cin>>s0;

cout<<length(s0)<<endl;

break;
case 2:
char  *s1,*s2;
s1=new char;
s2=new char;
cout<<" enter 1 st string"<<endl;
cin>>s1;
cout<<"enter 2nd string"<<endl;
cin>>s2;
con(s1,s2);
break;
case 3:
char  *s7,*s8;
s7=new char;
s8=new char;
cout<<" enter 1 st string"<<endl;
cin>>s7;
cout<<"enter 2nd string"<<endl;
cin>>s8;
if(com(s7,s8)==true){

cout<<"strings are equals"<<endl;
}
else{
cout<<"string are not equals"<<endl;
}
break;
case 4:
char *s5,*s6;
s5=new char;
s6=new char;

cout<<" enter 1 st string"<<endl;
cin>>s5;
copy(s5,s6);
cout<<"s1 is"<<s5<<endl<<" s2 is "<<s6;
break;
case 5:
char *a;
a=new char;
cin>>a;
reverse(a);
break;
case 6:
count();
break;
case 7:
panlin();
break;
case 8:
lower();
break;
case 9:
upper();
break;
}
cout<<"1 to length"<<endl<<"2 to concat"<<endl<<"3 to compare"<<endl<<" 4 to copy"<<endl<<" 5 to revese"<<endl<<"6 to count"<<endl<<"7 to palindrome"<<endl<<"8 to lowercase"<<endl<<"9 to uppercase "<<endl;

cin>>ch;

}
return 0;


}

