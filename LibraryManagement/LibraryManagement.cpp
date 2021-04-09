#include <iostream>
#include <string>
#include <ctime>
#include <process.h>
using namespace std;
void menu();
void menuRepeat();
void bookSection();
void memberSection();

class Books
{
private:
    int number_of_books;
    string bookName;
    string bookId;
    string authorName;
    string publication;
    float price;

public:
    void addBooks();
    void issueBook();
    void returnBook();
    void listOfBooks();
    float fine();
};
Books b[10];

class Members
{
public:
    int number_of_members;
    string name;
    string university;
    string course;
    string enrollmentNo;

public:
    void addMembers();
    void removeMember();
    void listOfMembers();
};
Members members[10];

void Books::addBooks()
{
    string bookName;
    string bookId;
    string authorName;
    string publication;
    float price;

    cout << "Enter number of books to be added-:" << endl;
    cin >> number_of_books;
    for (int i = 0; i < number_of_books; i++)
    {
        cout << "Enter Book Name-:" << endl;
        cin >> bookName;
        cout << "Enter Book Id-:" << endl;
        cin >> bookId;
        cout << "Enter Author Name-:" << endl;
        cin >> authorName;
        cout << "Enter Publication Name-:" << endl;
        cin >> publication;
        cout << "Enter Price of book ($)-:" << endl;
        cin >> price;
        cout << endl;
        cout << "-----------------------" << endl;
        b[i].bookName = bookName;
        b[i].bookId = bookId;
        b[i].authorName = authorName;
        b[i].publication = publication;
        b[i].price = price;
    }
    cout << "Books Added To Library Successfully!!!" << endl;
}
void Books::issueBook()
{
    {
        string bookId;
        string name;
        int size = *(&members + 1) - members;
        time_t now = time(0);
        char *currentDate = ctime(&now);
        tm *date = localtime(&now);
        cout << "Enter book id of book you want-:" << endl;
        cin >> bookId;
        cout << "Enter Your Name-:" << endl;
        cin >> name;
        for (int i = 0; i < size; i++)
        {
            if (b[i].bookId == bookId)
            {
                cout << "Book Name-:" << b[i].bookName << "----> Book Issued" << endl;
                cout << "Date of Issue-:" << currentDate << endl;
                cout << "Date of return -:" << date->tm_mday << "/" << date->tm_mon << endl;
                break;
            }
            else
            {
                cout << "Sorry Book not Found!!" << endl;
            }
        }
    }
}
void Books::returnBook()
{
    string bookId;
    time_t now = time(0);
    char *currentDate = ctime(&now);
    tm *date = localtime(&now);
    int size = *(&members + 1) - members;
    cout << "Enter Book Id of Book You want to return-:" << endl;
    cin >> bookId;
    for (int i = 0; i < size; i++)
    {
        if (b[i].bookId == bookId)
        {
            cout << b[i].bookName << " Book Returned." << endl;
            cout << "Date of return-:" << currentDate << endl;
        }
    }
}
void Books::listOfBooks()
{
    int size = *(&members + 1) - members;
    cout << "List Of All Books!!" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Book Name-:" << b[i].bookName << endl;
        cout << "Book Id-:" << b[i].bookId << endl;
        cout << "Author Name-:" << b[i].authorName << endl;
        cout << "Publication name-:" << b[i].publication << endl;
        cout << "Price is-:" << b[i].price << "$" << endl;
        cout << endl;
        cout << "-----------------------" << endl;
    }
}
void Members::addMembers()
{
    {
        cout << "Enter number of members to be added-:" << endl;
        cin >> number_of_members;
        for (int i = 0; i < number_of_members; i++)
        {
            cout << "Enter member Name-:" << endl;
            cin >> name;
            cout << "Enter University Name-:" << endl;
            cin >> university;
            cout << "Enter course Name-:" << endl;
            cin >> course;
            cout << "Enter Enrollment Number-:" << endl;
            cin >> enrollmentNo;
            cout << endl;
            cout << "-----------------------" << endl;
            members[i].name = name;
            members[i].university = university;
            members[i].course = course;
            members[i].enrollmentNo = enrollmentNo;
        }
        cout << "Members added Successfully!!" << endl;
    }
}
void Members::removeMember()
{
    string name;
    int size = *(&members + 1) - members;
    int count = 0;
    cout << "Enter Name of Member to be Removed-:" << endl;
    cin >> name;
    for (int i = 0; i < size; i++)
    {
        if (members[i].name == name)
        {
            for (int j = i; j < (size - 1); j++)
            {
                members[j] = members[j + 1];
            }
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Member not found..!!";
    }
    else
    {
        cout << "Member Removed From Library successfully..!!\n";
    }
}
void Members::listOfMembers()
{
    int size = *(&members + 1) - members;
    cout << "List Of All The Members -:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Member Name-:" << members[i].name << endl;
        cout << "University" << members[i].university << endl;
        cout << "course-:" << members[i].course << endl;
        cout << "Enrollment Number-:" << members[i].enrollmentNo << endl;
        cout << endl;
        cout << "-----------------------" << endl;
    }
}

void menu()
{
    char choice;
    cout << "**********LIBRARY MANAGEMENT SYSTEM**********" << endl;
    cout << endl;
    cout << "             MADE BY-: DINKY KUKREJA" << endl;
    cout << "             ROLL NO.-: 05516412819" << endl;
    cout << endl;
    cout << "1.) Book" << endl;
    cout << "2.) Members" << endl;
    cout << "3.) Exit" << endl;
    cout << "Enter your choice!! " << endl;
    cin >> choice;
    if (choice == '1')
    {
        bookSection();
    }
    else if (choice == '2')
    {
        memberSection();
    }
    else if (choice == '3')
    {
        exit(0);
    }
    else
    {
        cout << "Invalid Choice!! Plz Try Again."
             << endl;
        menu();
    }
}
void menuRepeat()
{
    char ch;
    cout << "Want to continue!! y/n-: ";
    cin >> ch;
    if (ch == 'y')
    {
        menu();
    }
    else if (ch == 'n')
    {
        cout << "Bye!!!";
        exit(0);
    }
    else
    {
        cout << "Wrong Input!!" << endl;
        exit(0);
    }
}

void bookSection()
{
    int choice;
    Books b;

    cout << "   Welcome in Book Section!!   " << endl;
    cout << "    1.)Add a book " << endl;
    cout << "    2.)Issue a book " << endl;
    cout << "    3.)Return book" << endl;
    cout << "    4.)List of books " << endl;

    cout << "Enter Your Choice!! " << endl;
    cin >> choice;
    switch (choice)

    {
    case 1:
        b.addBooks();
        menuRepeat();
    case 2:
        b.issueBook();
        menuRepeat();
    case 3:
        b.returnBook();
        menuRepeat();
    case 4:
        b.listOfBooks();
        menuRepeat();
    default:
        cout << "Invalid choice!!" << endl;
        menuRepeat();
    }
}

void memberSection()
{
    int choice;
    Members members;

    cout << "   Welcome in Administrator Section!!   " << endl;
    cout << "    1.)Add Member " << endl;
    cout << "    2.)Remove Member" << endl;
    cout << "    3.)List of members" << endl;

    cout << "Enter Your Choice!! " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        members.addMembers();
        menuRepeat();
        break;

    case 2:
        members.removeMember();
        menuRepeat();
    case 3:
        members.listOfMembers();
        menuRepeat();
    default:
        cout << "Invalid choice!!!" << endl;
        menuRepeat();
    }
}
int main()
{
    menu();
    return 0;
}