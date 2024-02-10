/*Bubble sort----compare and swap in 
modified bubble sort we introduce a flag 
best time complexity=0(n) */
#include<iostream>
using namespace std;
class MBubble{
private:
int size,flag;
int *ptr;
public:
MBubble();
~MBubble();
int bubbleSort();
void display();
};
MBubble::~MBubble()
{
    delete []ptr;
}
MBubble::MBubble()
{ 
    int n;
    cout<<"enter the size of array."<<endl;
    cin>>n;
    size=n;
    ptr=new int[n];
    for(int i=0;i<n;i++)
{
    cout<<"enter the array element no "<<i+1<<" : "<<endl;
    cin>>ptr[i];
}
}
void MBubble::display()
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}
int MBubble::bubbleSort()
{  
    for(int i=1;i<=size-1;i++)
    { 
        flag=0;                       //outer loop flag =0
        for(int j=0;j<=size-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                int c;
                c=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=c;
                flag=1;  //flag 1 if swap
            }
            }
        if(flag==0)  //to check weather swap is done atleast once or array is already sorted
          return 0;
    }
    return 0;
}
int main()
{
    MBubble obj;
    obj.display();
    obj.bubbleSort();
    obj.display();
    return 0;
}