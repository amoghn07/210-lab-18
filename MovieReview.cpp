#include <iostream>
#include <string>
#include <cctype>
using namespace std;

struct Node{
    double review;
    string comments;
    Node *next;
};

void addNodeHEAD(Node *, Node *);
void addNodeTAIL(Node *, Node*);
void output(Node*);


int main(){
    Node *head = nullptr;
    

    return 0;
}