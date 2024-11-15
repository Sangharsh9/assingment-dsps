#include <iostream>
using namespace std;

class MNL {
public:
    string name;
    string singer;
    int year;
    MNL* next;
    MNL* prev;

    MNL() : next(nullptr), prev(nullptr) {}  // Constructor to initialize pointers

    void accept();  
    void display(); 
};


MNL* start = nullptr;


void MNL::accept() {
    MNL* nnode = new MNL; 
    cout << "Enter the music name, singer, and year of release: " << endl;
    cin >> nnode->name >> nnode->singer >> nnode->year;
    nnode->prev = nullptr;
    nnode->next = nullptr;

    if (start == nullptr) {
        start = nnode;  
    } else {
        MNL* temp = start;
        while (temp->next != nullptr) {  
            temp = temp->next;
        }
        temp->next = nnode;  
        nnode->prev = temp; 
    }
}


void MNL::display() {
    if (start == nullptr) {
        cout << "The list is empty!" << endl;
        return;
    }

    MNL* temp = start;
    cout << "Song Name \t Singer Name \t Year " << endl;
    while (temp != nullptr) {
        cout << temp->name << "\t" << temp->singer << "\t" << temp->year << endl;
        temp = temp->next; 
    }
}


void search() {
    cout << "Enter the song name to search: ";
    string n;
    cin >> n;
    MNL* temp = start;
    bool found = false;

    while (temp != nullptr) {
        if (temp->name == n) {  
            cout << temp->name << "   " << temp->singer << "   " << temp->year << endl;
            found = true;
            break;
        }
        temp = temp->next;  
    }

    if (!found) {
        cout << "Song not found!" << endl;
    }
}

int main() {
    int ch;
    do {
        cout << "1 to accept" << endl
             << "2 to display" << endl
             << "3 to search" << endl
             << "0 to exit" << endl;

        cin >> ch;

        switch (ch) {
            case 1:
              
                if (start == nullptr) {
                    MNL m;  
                    m.accept();
                } else {
                    start->accept();  
                }
                break;

            case 2:
                
                if (start == nullptr) {
                    cout << "The list is empty!" << endl;
                } else {
                    start->display(); 
                }
                break;

            case 3:
                search(); 
                break;

            case 0:
                cout << "Exiting program..." << endl;
                break;

            
        }
    } while (ch != 0);

    return 0;
}

