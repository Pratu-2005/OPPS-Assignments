#include<iostream>
using namespace std;
int n;
template < class t>
void selsort(t a[10],int n)
{
cout<<"\n enter the size of array:";
cin>>n;
cout<<"\n enter the array elements:\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
 
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
t temp;
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
   }
 }
 
 cout<<"\n the sorted array is :\n";
 for(int i=0;i<n;i++)
 {
  cout<<a[i]<<"\t";
  }
  
  }
  
  
  int main()
  {
  
 int ch;
 int a[n];
 float b[n];
 char c[n];
 do{
 cout<<"menu:\n 1.sort the integer array\n 2.sort the float array\n 3.sort the char array";
 cout<<"enter your choice:";
 cin>>ch;
 
 switch(ch)
 {
 case 1:
          selsort(a,n);
          break;
 case 2:
         selsort(b,n);
         break;
 case 3:
        selsort(c,n);
        break;
 default:
     cout<<"invalid cvhoice";
     
   }
   }while(ch!=0);
    return 0;
    }
   
  
