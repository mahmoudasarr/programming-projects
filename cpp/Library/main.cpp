#include <iostream>
#include <vector>
#include <string>

class Book
{
public:
    std::string title;
    std::string author;
    std::string isbn;
    int totalCopies;
    int availableCopies;

    Book(std::string t, std::string a, std::string i, int copies)
    {
        title = t;
        author = a;
        isbn = i;
        totalCopies = copies;
        availableCopies = copies;
    }
};
std::vector<Book> library;

void deleteBook(std::string isbnToDelete)
{
    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].isbn == isbnToDelete)
        {
            library.erase(library.begin() + i);
            std::cout << "Book deleted successfully!\n";
            return;
        }
    }
    std::cout << "Book not found!\n";
}

void librarianMenu()
{
    int choice = 0;
    std::cout << "1. Add book\n";
    std::cout << "2. Display avalible copies\n";
    std::cout << "3. Delete book\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {
        std::string title, author, isbn;
        int copies;

        std::cout << "Enter title: ";
        std::cin >> title;
        std::cout << "Enter author: ";
        std::cin >> author;
        std::cout << "Enter isbn: ";
        std::cin >> isbn;
        std::cout << "Enter number of copies: ";
        std::cin >> copies;

        Book newBook(title, author, isbn, copies);
        library.push_back(newBook);

        std::cout << "Book added successfully!\n";
        break;
    }
    case 2:
    {
        if (library.empty())
        {
            std::cout << "No books to display.\n";
        }
        else
        {
            for (int i = 0; i < library.size(); i++)
            {
                std::cout << "Title: " << library[i].title << '\n';
                std::cout << "Author: " << library[i].author << '\n';
                std::cout << "ISBN: " << library[i].isbn << '\n';
                std::cout << "Available copies: " << library[i].availableCopies << " / " << library[i].totalCopies << '\n';
            }
        }
        break;
    }
    case 3:
    {
        std::string isbnToDelete;
        std::cout << "Enter the ISBN of the book to delete: ";
        std::cin >> isbnToDelete;
        deleteBook(isbnToDelete);
        break;
    }

    default:
        break;
    }
}

void memberMenu()
{
    if (library.empty())
    {
        std::cout << "No books to display.\n";
    }
    else
    {
        for (int i = 0; i < library.size(); i++)
        {
            std::cout << "Title: " << library[i].title << '\n';
            std::cout << "Author: " << library[i].author << '\n';
            std::cout << "ISBN: " << library[i].isbn << '\n';
            std::cout << "Available copies: " << library[i].availableCopies << " / " << library[i].totalCopies << '\n';
        }
    }
}

void login()
{
    int choice = 0;
    std::cout << "1. Login as Librarian\n";
    std::cout << "2. Login as Member\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        librarianMenu();
        break;
    case 2:
        memberMenu();
        break;
    default:
        break;
    }
}

int main()
{
    login();
    return 0;
}