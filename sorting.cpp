#include <iostream>
#include <algorithm>
using namespace std;
void bubblesort( int n, float A[])
{
  for(int p=1;p<n;p++)
  {
    for(int i=0;i<=n-1-p;i++)
    {
      if(A[i]>A[i+1])
      {
        float temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
      }
    }
  }
}

void selectionsort( int n, float A[])
{
  for(int i=0;i<n-1;i++)
  {
    int min =i;
    for(int j=i+1;j<n;j++)
    {
      if(A[j]<A[min])
      {
        min =j;
      }
    }
   float temp =A[i];
   A[i]=A[min];
   A[min]=temp;
  }
}

int main()
{
  float A[10];
  int n,choice;
  cout<< "Enter the total number of percentages:";
  cin>>n;
   for(int i=0;i<n;i++)
    {
        cout<<"enter the percentages  of  student:\n";
        cin>>A[i];
    }
  
  cout<<"menu";
  cout<<"\n\n1.bubble sort search";
  cout<<"\n2.selection sort search";
  cout<<"\nenter the choice";
  cin>>choice;
  if (choice ==1)
  {
    bubblesort(n,A);
  }
  else if (choice==2)
  {
    selectionsort(n,A);
  }
  else
  {
    cout<<" unavailable choice";
  }

   for (int i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }
  
  
  
  return 0;  

}    
  