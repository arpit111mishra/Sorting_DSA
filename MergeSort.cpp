#include<iostream>
using namespace std;
void conqure(int a[],int si,int mid,int ei)
{
      int merger[ei-si+1];
      int idx1=si;
      int idx2=mid+1;
      int x=0;
      while(idx1<=mid && idx2<=ei)
      {
       if(a[idx1]<=a[idx2])
       {
         merger[x]=a[idx1];
         x++;idx1++;
       }
       else{
              merger[x]=a[idx2];
              x++,idx2++;
       }
      }
      while(idx1<=mid)
      {
       merger[x]=a[idx1];
         x++;idx1++;
      }      
      while(idx2<=ei)
      {
              merger[x]=a[idx2];
              x++,idx2++;
      }
      for(int i=0,j=si;i<(ei-si+1); i++,j++)
      {
      a[j]=merger[i];
      }
}
void divide(int a[],int si,int ei)
{    
       if(si>=ei)
{
       return ;
}
       int mid;
   mid=si+(ei-si)/2;
   divide(a,si,mid);
   divide(a,mid+1,ei);
   conqure(a,si,mid,ei);
}
int main()
{     
       int a[]={6,3,9,5,2,8};
       int n=6;
       divide(a,0,n-1);
       for(int i=0;i<n;i++)
       {
              cout<<a[i]<<" ";
       }
       return 0;
}