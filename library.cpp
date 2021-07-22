#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct book
{
    char name[50],author[50];
    float price;
    int quantity;
};
book b[10];

int main()
{
    int ch,num,i;
    while(1)
    {
        cout<<"WELCOME"<<endl;
        cout<<"Enter option number\n1.Enter book details\n2.Display\n3.Search by name\n4.Search by author\n"
        "5.Alphabetical order of books\n6.Exit ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Number of books to enter ";
            cin>>num;
            for(i=0;i<num;i++)
            {
                cout<<"Enter details for book "<<i+1 <<endl;
                cout<<"Enter name of book ";
                cin>>b[i].name;
                cout<<"Enter author's name ";
                cin>>b[i].author;
                cout<<"Enter price ";
                cin>>b[i].price;
                cout<<"Enter quantity ";
                cin>>b[i].quantity;
            }
            break;
            case 2:
            for(i=0;i<num;i++)
            {
                cout<<"Details of book "<<i+1;
                cout<<"\nName: "<<b[i].name;
                cout<<"\nAuthor: "<<b[i].author;
                cout<<"\nPrice: "<<b[i].price;
                cout<<"\nCopies present: "<<b[i].quantity<<endl;
            }
            break;
            case 3:
            char bn[50];
            cout<<"Enter the name of the book ";
            cin>>bn;
            for(i=0;i<num;i++)
            {
                if(strcmp(bn,b[i].name)==0)
                {
                    cout<<"Copies available "<<b[i].quantity<<endl;
                    break;
                }
            }
            if(strcmp(bn,b[i].name)!=0)
            {
                cout<<"No records found"<<endl;
            }
            break;
            case 4:
            char an[50];
            int ptr;
            cout<<"Enter the author's name ";
            cin>>an;
            for(i=0;i<num;i++)
            {
                if(strcmp(an,b[i].author)==0)
                {
                    cout<<"Name of book "<<b[i].name<<endl;
                    cout<<"Copies available "<<b[i].quantity<<endl;
                    ptr++;
                }
            }
            if(ptr==0)
            {
                cout<<"No record found"<<endl;
                break;
            }
            break;
            case 5:
            book temp;
            int j;
            for(i=0;i<num;i++)
            {
                for(j=i+1;j<num;j++)
                {
                    if(strcmp(b[i].name,b[j].name)>0)
                    {
                        temp=b[i];
                        b[i]=b[j];
                        b[j]=temp;
                    };
                }
            }
            cout<<"Names of books in alphabetical order are"<<endl;
            for(j=0;j<num;j++)
            {
                cout<<b[j].name<<endl;
            };
            break;
            default: cout<<"Invalid choice";
            case 6: exit(1);
        }
    }
}
