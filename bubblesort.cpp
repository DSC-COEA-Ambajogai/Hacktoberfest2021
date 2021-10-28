#include<iostream>

#include<stdlib.h>

using namespace std;

int main()

{
  
 int a[100],i,s,j,temp,nochanges;
  cout<<"ENTER THE SIZE OF ARRAY : "<<endl;
  cin>>s;
  cout<<"Enter The Elememnt In Array \n"<<endl;
  for(i=0;i<s;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<s;++i)
  {
   nochanges=0;
    for(j=0;j<(s-1);++j)
        {
     if(a[j]>a[j+1])
      {
      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
      nochanges++;
      }
      
     }
     if(nochanges==0)
    break;
    }
   cout<<"\nSorted Array In Accending Order \n"<<endl;
   
 for(i=0;i<s;i++) 
   {
    cout<<a[i]<<" ";
 }
 
 cout<<"\n\nSorted Array In Decending Order \n"<<endl;
   
 for(i=s-1;i>=0;i--) 
   {
    cout<<a[i]<<" ";
 }
 return 0;
}
