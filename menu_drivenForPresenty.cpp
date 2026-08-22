#include <iostream>
#include <algorithm>
using namespace std;

void linsearch(int n,int A[]) 
{    
    
    char ch;
    int key,i,comparision;
    do 
    {  
        
        int found =0;
        comparision = 0;
        cout<<"\nenter the roll number we want to find:";
        cin>>key;
        for(i=0;i<n;i++)
        {
            comparision++;
            if(A[i]==key)
            {
                found =1;
                cout<<" \nis present";
                break;
            }
        }   
    
        comparision++;    
        if(found == 0)
            {
                cout<<key<<" is absent:";

            }
            cout<<" \nnumber of comparision is:\n"<<comparision;
            cout<<"\ndo u want continue y/n:";
            cin>>ch;
    }       while(ch =='y');
}         

        
void binsearch(int n, int A[])
{
    char ch;
    int key,comparison;
    
    do
    {
        int found =0;
        comparison=0;
        cout<<"enter the roll num to search:";
        cin>>key;
    
        
        int low = 0;
        int high =n-1;
        while (low<=high)
        {
            int mid = (low+high)/2;

            comparison++;
            if (A[mid]==key)
            {
                found=1;
                cout<<key<<" is present";
                break;
            }
            comparison++;
            if (A[mid]<key)
            {
                low = mid+1;
            }
        
            else
            {
                high = mid-1;
            }
        }
        comparison++;
        if(found ==0)
        {
            cout<<"student is absent:";
        }
        cout<<" \nnumber of comparision:\n"<<comparison;
        cout<<"\ndo u wanna continue y/n?";
       cin>>ch;
       
    }  while(ch=='y'); 

}
int main()
{   int n;
    int A[10];
    int choice;
    cout<<"enter the total number of roll num:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the roll num of present student:\n";
        cin>>A[i];
    }
    sort(A,A+n);
    cout<<"ascending order is :\n";
    for (int i=n-1;i>=0;i--)
   
    {
        cout<<A[i]<<" ";

    }
   do
   {
   
   
        cout<<"\n Menu";
        cout<<"\n\n1.linear search";
        cout<<"\n2.binary search";
        cout<<"\n3.exit";
        cout<<" \nEnter choice";
        cin>>choice;
        
    
        if(choice == 1)
        {
            linsearch(n,A);
        }
        else if (choice == 2)
        {
            binsearch(n,A);
        }
        else if(choice ==3)
        {
            cout<<" program is finished";
        }
        
        else
        {
            cout<<" unavailable choice";
        }
    
    } while(choice!=3);
    
      return 0;
   
}