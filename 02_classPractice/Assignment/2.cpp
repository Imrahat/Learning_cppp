#include <iostream>
using namespace std;

class Book
{   
    int number;
    string book, author;

public:
    Book(int n=0,string b="", string a=""){
        number = n;
        book = b;
        author = a;
    }
    void input(){
        cout<<"Enter Serial number, Book Name and Author"<<endl;
        cin>>number>>book>>author;
    }
    void display(){
        cout<<"Serial Number:: "<<number<<"\nBook Name:: "<<book<<"\nAuthor Name:: "<<author<<endl<<endl;
    }
    ~Book(){
        cout<<"Destructor used\n";
    }
    
};


int main()
{
   Book b1(1,"book1","Author1");
   Book b2(2, "book2", "Author2");
   Book b3;
   b3.input();
    cout<<"Library Record\n";
   b1.display();
   b2.display();
   b3.display();
}
