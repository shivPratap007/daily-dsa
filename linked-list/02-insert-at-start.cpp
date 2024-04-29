#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node* head;
        int size;
    
    public:
        
    LinkedList():head(nullptr),size(0){}
    
    void insertAtEnd(int data){
        Node* newNode=new Node();
        size++;
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
    
    void insertAtStart(int data){
        Node* newNode=new Node();
        newNode->data=data;
        newNode->next=head;
        head=newNode;
        size++;
    }
    
    void printLinkedList(){
        Node* temp=head;
        while(temp!=nullptr){
            cout << temp->data << " -> ";
            temp=temp->next;
        }
    }
    
    int getSize() const{
        return size;
    }
};

int main(){
    LinkedList myList;
    myList.insertAtEnd(20);
    myList.insertAtEnd(10);
    myList.insertAtEnd(50);
    myList.insertAtStart(10);
    myList.printLinkedList();
    cout << endl;
    cout << myList.getSize() << endl;
    
}