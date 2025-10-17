#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    double BookPrice;

public:
   
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore(); // Ignore leftover newline from previous input
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    
    void displayDetails() const {
        cout << "Book ID: " << BookID << ", Book Name: " << BookName << ", Book Price: $" << BookPrice << endl;
    }

    // Function to calculate total cost for n copies
    double total_cost(int n) const {
        return BookPrice * n;
    }

    
    void displayTotalCost() {
        int copies;
        cout << "Enter number of copies: ";
        cin >> copies;
        double cost = total_cost(copies);
        cout << "Total cost for " << copies << " copies: $" << cost << endl;
    }
};

int main() {
    Book book1, book2, book3;

    cout << "Enter details for Book 1:\n";
    book1.inputDetails();
    cout << "\nEnter details for Book 2:\n";
    book2.inputDetails();
    cout << "\nEnter details for Book 3:\n";
    book3.inputDetails();

    cout << "\n--- Book Details and Purchase Costs ---\n";

    cout << "\nBook 1 details:\n";
    book1.displayDetails();
    book1.displayTotalCost();

    cout << "\nBook 2 details:\n";
    book2.displayDetails();
    book2.displayTotalCost();

    cout << "\nBook 3 details:\n";
    book3.displayDetails();
    book3.displayTotalCost();

    return 0;
}
