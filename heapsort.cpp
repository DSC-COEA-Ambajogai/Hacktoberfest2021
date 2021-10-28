#include <iostream>
#include <conio.h>
using namespace std;
void max_heap(int *a, int i, int n)
{

    int j, temp;
    temp = a[i];
    j = 2*i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j+1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j/2] = a[j];
            j = 2*j;
        }
    }
    a[j/2] = temp;
    return;
}
void heapsort(int *a, int n)
{
    int i,temp;
    for (i=n;i>=2;i--)
    {
        temp = a[i];
        a[i] = a[1];
        a[1] = temp;
        max_heap(a,1,i-1);
    }
}
void maxheap(int *a, int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        max_heap(a,i,n);
    }
}
int main()
{
    int s,i,x;
    cout<<"ENTER THE SIZE OF ARRAY\n";
    cin>>s;
    int a[20];
    for (i =1;i<=s;i++)
    {
        cout<<"ENTER THE ELEMENT : "<<i<<" ";
        cin>>a[i];
    }
    maxheap(a,s);
    heapsort(a, s);
    cout<<"\nSORTED ARRAY IN ACCENDING ORDER: \n\n";
    for (i=1;i<=s;i++)
    {
        cout<<a[i]<<"  ";
    }
}
