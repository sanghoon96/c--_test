#include <iostream>
#include <string>
using namespace std;

int main(){
// struct [structure tag] {
//     member definition;
//     ...
// }[one or more structure variables];

struct Book
{
    char title[50], author[50];
    string subject;
    int book_id;
};
struct Books
{
    struct Book BookList[5];
    string category;
    void print_booklist()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << i << ". " << BookList[i].title << ", " << BookList[i].author << endl;
        }
    };
};
struct Books books;
books.print_booklist();

};