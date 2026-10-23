#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x)
{
    for(int i =0; i<n; i++)
    {
        if(a[i]==x)
        return(1);
    }
    return(-1);

}
int main()
{
    int a[20];
    int n;
    cout<<" How many elements";
    cin>>n;
    cout<<"Enter"<<n<<"elements";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
int x;
cout<<"Enter element to search";
cin>>x;
int location=linear_search(a,n,x);
if(location==-1)cout<<"Element not found";
else
cout<<"Element Found at index" <<location;
return(0);
}

//output
/*PS D:\shrutika007> cd "d:\shrutika007\" ; if ($?) { g++ linnearsrarch.cpp -o linnearsrarch } ; if ($?) { .\linnear
How many elements5
Enter5elements1 2 3 5 5
Enter element to search 2
Element Found at index1*/


