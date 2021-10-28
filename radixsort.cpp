#include <iostream>
#include <cstdlib>
using namespace std;
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i &lt; n; i++)
        if (arr[i] &gt; max)
            max = arr[i];
    return max;
}

void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i &lt; n; i++)
        count[(arr[i] / exp) % 10]++;
    for (i = 1; i &lt; 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i &gt;= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i &lt; n; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int n)
{
    int m = getMax(arr, n);
    for (int exp = 1; m / exp &gt; 0; exp *= 10)
        countSort(arr, n, exp);
}


int main()
{
    int arr[100],n,i;
    cout&lt;&lt;"\n------------ RADIX SORT ------------ \n\n";

     cout&lt;&lt;"Enter No. of Elements : ";
     cin&gt;&gt;n;

     cout&lt;&lt;"\nEnter Elements : \n";
     for(i=0;i    {
      cin&gt;&gt;arr[i];
    }
    radixsort(arr, n);
    cout&lt;&lt;"\nsorted Elements : \n";
    for (int i = 0; i &lt; n; i++)
        cout &lt;&lt; arr[i] &lt;    return 0;
}
