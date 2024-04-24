#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node* head;
    
    public:
        
    LinkedList():head(nullptr){}
    
    void insertAtEnd(int data){
        Node* newNode=new Node();
        newNode->data=data;
        newNode->next=nullptr;
        if(head==nullptr){
            head=newNode;
        }else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    
    void printLinkedList(){
        Node* temp=head;
        while(temp!=nullptr){
            cout << temp->data << " -> ";
            temp=temp->next;
        }
    }
};

int main(){
    LinkedList myList;
    myList.insertAtEnd(20);
    myList.insertAtEnd(10);
    myList.insertAtEnd(50);
    myList.printLinkedList();
}