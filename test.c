#include <stdio.h>
#include <string.h>
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"c语言", "clang", "编程语言", 123456};

int main()
{
    struct Books book2;

    strcpy(book2.title, "Python");
    strcpy(book2.author, "van");
    strcpy(book2.subject, "python tutorial");
    book2.book_id = 1234567;

    printf("title: %s\nauthor: %s\nsubject: %s\nbookid: %d\n\n", book.title, book.author, book.subject, book.book_id);
    printf("title: %s\nauthor: %s\nsubject: %s\nbookid: %d\n", book2.title, book2.author, book2.subject, book2.book_id);
}
