/*Bubble sort----compare and swap*/
#include<iostream>
using namespace std;
class Bubble{
private:
int size;
int *ptr;
public:
Bubble();
~Bubble();
void bubbleSort();
void display();
};
Bubble::~Bubble()
{
    delete []ptr;
}
Bubble::Bubble()
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
void Bubble::display()
{
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}
void Bubble::bubbleSort()
{  int c;
    for(int i=1;i<=size-1;i++)
    {
        for(int j=0;j<=size-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                c=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=c;
            }
        }
    }
}
int main()
{
    Bubble obj;
    obj.display();
    obj.bubbleSort();
    obj.display();
    return 0;
}