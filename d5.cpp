#include <iostream>
#include <stack>
#include <cstring>

using namespace std;
int pre(char a){
if( a=='+' || a=='-' ){

return 1; }
else if(a=='*' ||a=='/'){

return 2;
}
else if( a=='^'){
return  3;
}
return 0;

}

string intopost(string s){

stack<char>a;
string post="";

for(int i=0;i<s.length();i++){
char ans=s[i];

if(isalnum(ans)){
post+=ans;



}
else if(!a.empty() && pre(a.top())>=pre(ans)){

post+=a.top();
a.pop();
a.push(ans);

}
else{
a.push(ans);
}




}
while(!a.empty()){
post+=a.top();
a.pop();
}


return post;









}








int main(){

string s;
cout<<" enter the string"<<endl;
cin>>s;
 string a=intopost(s);
 cout<<" string is "<<a<<endl;

return 0;

}
