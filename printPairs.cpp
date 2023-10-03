#include <iostream>
using namespace std;

int pp(int arr[], int n)
{
    
   for (int i=0; i<n-1; i++)
   {
       for(int j=i+1; j<n; j++)
       {
       cout<< arr[i]<<", "<<arr[j]<< endl;
       }
       cout<<endl;
   }

}

int main()
{
    int n;
    int arr[]={1,2,3,4,5};
    n = sizeof(arr)/sizeof(int);
    pp(arr, n);
   

    
}