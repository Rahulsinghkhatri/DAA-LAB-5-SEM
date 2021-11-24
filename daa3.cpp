/*Givrn an 

  

      */

#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int key;
        cin>>key;
        int count=0,flag=0;
        int m=sqrt(n);
        int start=0;
        while(A[m]<=key && m<n)
        {
            count++;
            start=m;
            m+=sqrt(n);
            if(m>n-1)
            {
                m=n;
            }
            for(int i=start;i<m;i++)
            {
                if(A[i]==key)
                {
                    count++;
                    flag=1;
                    break;
                }
                count++;
            }
            
        }
        if(flag==1)
            {
                cout<<"Present"<<" "<<count<<endl;
            }
            else
            {
                 cout<<"Not Present"<<" "<<count<<endl;
            }
    }
}