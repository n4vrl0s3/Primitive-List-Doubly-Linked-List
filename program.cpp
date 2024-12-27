#include <iostream>
#include <string>

using namespace std;

struct Node {
    int NIP;
    string nama;
    string alamat;
    string goal;
    int gaji;
    Node* next;
    Node* prev;
};

struct Node* head = NULL;

void add_at_beginning(int NIP, string nama, string alamat, string goal, int gaji) {
    Node* new_node = new Node;
    new_node->NIP = NIP;
    new_node->nama = nama;
    new_node->alamat = alamat;
    new_node->goal = goal;
    new_node->gaji = gaji;
    new_node->next = head;
    new_node->prev = NULL;
    if(head != NULL) {
        head->prev = new_node;
    }
    head = new_node;
}

void display() {
    struct Node* ptr;
    ptr = head;
    while(ptr != NULL) {
        cout<<ptr->NIP<<" "<<ptr->nama<<" "<<ptr->alamat<<" "<<ptr->goal<<" "<<ptr->gaji<<endl;
        ptr = ptr->next;
    }
}

int main() {
    int choice, NIP, gaji;
    string nama, alamat, goal;

    while(1) {
        cout<<"1. Add employee at beginning"<<endl;
        cout<<"2. Display all employees"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter NIP: ";
                cin>>NIP;
                cout<<"Enter name: ";
                cin>>nama;
                cout<<"Enter address: ";
                cin>>alamat;
                cout<<"Enter goal: ";
                cin>>goal;
                cout<<"Enter salary: ";
                cin>>gaji;
                add_at_beginning(NIP, nama, alamat, goal, gaji);
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                cout<<"Wrong choice. Try again."<<endl;
        }
    }
    return 0;
}