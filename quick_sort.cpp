#include <iostream>
#include <algorithm>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low -1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<arr[high])
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    i++;
    int temp =arr[high];
    arr[high]=arr[i];
    arr[i]=temp;
    return i;
}
void quicksort(int arr[],int low , int high)
{
    if(low<high)
    {
    int pivIndx= partition(arr,low,high);
    quicksort(arr,low,pivIndx-1);
    quicksort(arr,pivIndx+1,high);
    }
}


int main()
{
    int arr[10];
    int n;
    cout<<"enetr the num of element :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter the roll num of present student:";
        cin>>arr[i];
    }
    
    quicksort(arr,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;

    }
    cout<<" program ended ";
    return 0;
}