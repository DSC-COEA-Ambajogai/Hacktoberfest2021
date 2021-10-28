#include <bits/stdc++.h>
using namespace std;

struct books
{
    char title[25];
    char pub[25];
    int year;
    int status;
};

int main()
{
   int i, n;
   
 cout<<"Enter Number Of Books : ";
   cin>>n;
    
    struct books a[n];
    
   cout<<"Enter The Book Details : \n";
   cout<<"-------------------------\n";
  
   for(i=0;i<n;i++)
   {
   cout<<"Title : ";
   cin>>a[i].title;
   
   cout<<"Publication : ";
   cin>>a[i].pub;
   
 cout<<"Year : ";
   cin>>a[i].year;
   
 cout<<"Status : ";
   cin>>a[i].status;
   cout<<"----------------------\n";
    }
    
 cout<<"=====================================================\n";
    cout<<"Book Title \t|Publication \t|Year \t\t|Status\n";

 

    cout<<"=====================================================\n";
    
 for(i=0;i<n;i++)
    {
   cout<<"\n"<<a[i].title<<"\t\t|"<<a[i].pub<<"\t\t|"<<a[i].year<<"\t\t|";
 if(a[i].status <=1990)
 {
 cout<<"Outdated";
 }
 else if(a[i].status >= 1991 && a[i].status <=2000)
 {
 cout<<"Medium";
 }
 else
 {
 cout<<"Lates";
 }
    }
    cout<<"\n\n=================================================";
  
    return 0;

}
