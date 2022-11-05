#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char s[100];
int st[10][3]={0}, n, t=1, i, j, is, fs, cs, k;
cout<<"there are two symbols in our DFA: a and b\n";
cout<<"Lets DESIGN DFA FOR ACCEPTING EVEN NO. OF 'a' AND EVEN NO. OF 'b'\n";
cout<<"Enter no. of states:";
cin>>n;
for(i=0; i<n; i++)      
  st[i+1][0]=i+1;
cout<<"TRANSITIONS FOR EACH STATE:\n";
while(t!=n+1)
{   cout<<"enter transitions states over a & b for : "<<t;
     cout<< &st[t][1]<<&st[t][2];
     t++;
}
t=1;
cout<<"transition table is: \n";
cout<<"state\ta\tb\n";
for(i=1; i<=n; i++,t++)
cout<<st[t][0]<<st[t][1]<<st[t][2];
cout<<"enter initial state and final state: ";
 cin>>is>>fs; 
 cs=is;
cout<<"\nInput character string consisting only a and b: ";
cin>>s;
 k=strlen(s); 
s[k]='\0';
cout<<"\nstring is: %s \n"<<s;

i=0;
while(s[i]!='\0' && s[i]=='a' || s[i]=='b')
{
for(j=i+1; s[j]!='\0'; j++) 
cout<<s[j];
 cout<<"!";

if(s[i]=='a')
 { cs=st[cs][1]; 
 cout<<"\n" <<cs; }
else if(s[i]=='b'){
cs=st[cs][2];
 cout<<"\n ",cs; }
i++;
}
if(cs==fs) 
cout<<"* string is ACCEPTED by the DFA!! *  ";
else 
cout<<"* string is NOT ACCEPTED by the DFA!! *  ";

}
