// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;
    int n;
 

class book{
    public:
    
    int i;
    int prize,copies;
    char *author,*publisher;
    void accept();
        void display();
        void search();
        book();
        ~book();
        
    
    
}b[100];
book::book(){
    author=new char[50];
    publisher=new char[50];
    
}
book::~book(){
    delete[] author;
    delete[] publisher;
}

void book::accept(){
    cout<<"enter author name";
    cin>>author;
     cout<<"enter publisher name";
    cin>>publisher;
     cout<<"enter prize";
    cin>>prize;
    cout<<"enter copies";
    cin>>copies;
}
void book::display()
{
    cout<<author<<publisher<<prize<<endl;
}
void book::search(){
    char aut[50],pub[50];
    int f=0;
    int pri,cp;
    cout<<"enter the author name"<<endl;
    cin>>aut;
    cout<<"enter the Publisher name";
    cin>>pub;
    {
    for(int i=0;i<n;i++)
    {
    if(strcmp(aut,b[i].author)==0 && strcmp(pub,b[i].publisher)==0)
    
    
        f=1;
        cout<<"book is available"<<endl;
        cout<<"enter the no of copies";
        cin>>cp;
        {
         if(cp=b[i].copies)
         {
             b[i].copies= b[i].copies-cp;
          
             cout<<"remaining "<<b[i].copies<<endl;
         }
         
    
    
    else
    
        cout<<"copis are not available";
         break;
    }
    }
    }
if(f==0){
    cout<<"np";
}

}


int main() {
    book b[100];
       cout<<"enter the no of books ";
    cin>>n;
    int i;
    int ch;
    do{
        cout<<"1.accpet"<<"\n"<<"2.display"<<"\n"<<"3.search"<<endl;
        cout<<"enter choice"<<endl;
        cin >>ch;
        switch(ch)
        {
            
            case 1:
            for(int i=0;i<n;i++)
            {
            b[i].accept();
            }
            break;
            
            case 2:
            for(int i=0;i<n;i++)
            {
            
                b[i].display();
                
            }
            break;
            
            case 3:
            b[i].search();
            
        }
    }
    while(ch!=0);
    
    
    
    // Write C++ code here
  

  return 0;
}