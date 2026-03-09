#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct Node{
    double rating;
    string comments;
    Node *next;
};

void addNode(Node *&, Node *&, int);
void output(Node*);


int main(){
    Node *head = nullptr;
    char revChoice = 'Y';
    int choice;

    cout << "Which linked list method should we use?\n";
    cout << "\t[1] New nodes are added to the head of the list\n";
    cout << "\t[2] New nodes are added to the tail of the list\n";
    cout << "\tChoice: ";
    cin >> choice;

    //loop for adding more nodes
    while (revChoice == 'Y'){
        Node *temp = new Node;
        cout << "Enter review rating 0-5: ";
        cin >> temp -> rating;
        cin.ignore();
        cout << "Enter review comments: ";
        getline(cin, temp -> comments);
        cout << "Enter another review? Y/N: ";
        cin >> revChoice;
        revChoice = (char)toupper(revChoice);
        addNode(head, temp, choice);
    }


    
    return 0;
}

void addNode(Node *&head, Node *&current, int choice){
   //if list is empty
    if (!head){
        head = current;
        current -> next = nullptr;
    }
    //conditional for add method
    if (choice == 1){
        Node *temp = head -> next;
        head -> next = current;
        current -> next = temp;
    }
    else {
        Node *temp = head;
        while (temp -> next){
            temp = temp -> next;
        }
        temp -> next = current;
    }
}

void output(Node *head){
    Node *temp = head;
    int count;
    int revTotal;
    cout << "Outputting Reviews:\n";
    while (temp){
        count++;
        cout << "\t> Review #" << count << ": " << temp -> rating;
        cout << ": " << temp -> comments << endl;
        revTotal += temp -> rating;
        temp = temp -> next;
    }
    
}