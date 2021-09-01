/*Given an array of non negative integers , design a linear algorithm and implement it using a program 
  to find whether given key element is present in the array or not */

//THIS PROGRAM IS NOT USER FRIENDLY AND DESIGNED TO PASS THE TEST CASES
#include<iostream>
using namespace std;
void linear_search(int [],int ,int);
int main()
{
    int n,t,key;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
             cin>>A[i];
        }
            cin>>key;
            linear_search(A,n,key);
    }
    return 0;
}

void linear_search(int A[],int n,int key)
{
     int flag=0,comp=0;
     for(int i=0;i<n;i++)
     {
         if(A[i]==key)
         {
             flag++;
             comp++;
             break;
         }
         comp++;
     }
     if(flag==0)
     {
         cout<<"Not Present "<<comp<<endl;
     }
     else
     {
        cout<<"Present "<<comp<<endl;
     }
}