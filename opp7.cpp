/*create a class television thst as data member which hold model numbeer ,screen size and the prize.member funtion overloaded inserstion and exterstion operator .if more 4 digit are enter for model number,if screen size smaller 12 ||>17 or prize is negative  or grster than 5000 than throw an interger writwe main function crwate television object ,allow uers to enter hte data and display data member if exception is cougth replace the all value with zero*/
#include  <iostream>
using namespace std;
class television {
int e;
class television
{
int mn,pz,ss;
public:
void accept();
};

istream operator>>(istream &sin, television &t)
{
cout<<"Enter the model name,size,price";
cin>>t.mn>>t.ss>>t.pz;
try{
if(t.mn>9999 || t.ss>70 ||t.ss<12 || t.pz<0 || t.pz>5000)
{
throw e;
}
}
catch(int e)
{
cout<<"Exception is caught";
t.ss=0;
t.pz=0;
t.mn=0;;
}
}
ostream operator<<(ostream &sout,television &t)
{
sout<<"Moddel number:"<<t.mn<<endl;
sout<<"size:"<<t.ss<<"inches"<<endl;
sout<<"price: $"<<t.pz<<endl;
return sout;
}
int main()
{
television tv;
cin>>tv;
cout<<tv;
return 0;
}












};

