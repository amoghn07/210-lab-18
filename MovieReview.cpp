#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct Node{
    double review;
    string comments;
    Node *next;
};

void addNode(Node *, Node *, int);
void output(Node*);


int main(){
    Node *head = nullptr;

    int choice;

    cout << "Which linked list method should we use?\n";
    cout << "\t[1] New nodes are added to the head of the list\n";
    cout << "\t[2] New nodes are added to the tail of the list\n";
    cout << "\tChoice: ";
    cin >> choice;

    

    return 0;
}

void addNode(Node *head, Node *current, int choice){
    if (head -> next = nullptr){
        head -> next = current;
    }

    if (choice == 1){
        Node *temp = head -> next;
        head -> next = current;
        current -> next = temp;
    }
    else {
        Node *temp = head;
        while (temp){
            temp = temp -> next;
        }
    }
}