/* Given an already sorted array of posititve integers , design an algorithm and implement it using a 
    program and implement it using a program to find whether given key element is present in the array or
    not .Also find total number of comparisons for each input case. */

    #include<iostream>
    using namespace std;
    void binary_search(int [],int ,int);
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
            binary_search(A,n,key);
        }
        return 0;
    }

    void binary_search(int A[],int n,int key)
    {
        int l=0,r=n-1,mid=0,flag=0,comp=0;
        for(int i=0;i<n;i++)
        {
           mid=(l+r)/2;
           if(A[mid]==key)
           {
                flag++;
                comp++;
                break;
           }
           else if(A[mid]<key)
           {
               l=mid+1;
               comp++;
           }
           else if(A[mid]>key)
           {
               r=mid-1;
               comp++;
           }
        }
        
        if(flag==0)
        {
            cout<<"Not present "<<comp<<endl;
        }
        else
        {
            cout<<"Present "<<comp<<endl;
        }
    }