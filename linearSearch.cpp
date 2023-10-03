#include<iostream>
using namespace std;

void search(int *num, int x, int n)
{
    int z;

    for (int i=0; i < n ; i++)
    {
       if(num[i]==x)
       {
        cout<<x<<" is present at "<<i+1<<" position"<<endl;
        z=1;
       }  

    }

    if (z!=1)
       {
        cout<<"element not found";
       }
       

}
int main ()
{
    int x;
    int num[]={1,3,5,7,9};
    int n= sizeof(num)/sizeof(int);
    cout<<"Search for a number : ";
    cin>>x;

    search(num,x,n);


}