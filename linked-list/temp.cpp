#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    private:
        Node* head;
        Node* tail;
        int size;
    
    public:
        
    LinkedList():head(nullptr),tail(nullptr),size(0){}
    
    void insertAtEnd(int data){
        Node* newNode=new Node();
        size++;
        newNode->data=data;
        newNode->next=nullptr;
        if(head==nullptr && tail==nullptr){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
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
    
    void removeFirst(){
        if(head==nullptr){
            return;
        }
        Node* temp=head;
        head=temp->next;
        temp->next=nullptr;
        delete temp;
        size--;
        
    }
    
    void removeLast() {
    if (tail == nullptr) {
        return;
    } else if (size == 1) {
        delete head;
        head = nullptr;
        tail = nullptr;
        size = 0;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    
    delete temp->next;
    temp->next = nullptr;
    tail = temp;
    size--;
}

    
    int getLastNode(){
        return tail->data;
    }
    
    int getFirstNode() const{
        return head->data;
    }
    
    int getSpecificNode(int val) const{
        if(val>size){
            return -1;
        }else{
            int count=1;
            Node* temp=head;
            while(count!=val){
                
                temp=temp->next;
                count++;
            }
            return temp->data;
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
    myList.insertAtStart(5);
    myList.printLinkedList();
    cout << endl;
    myList.removeFirst();
    myList.printLinkedList();
    myList.removeLast();
    cout << endl;
    myList.printLinkedList();

    cout << endl;
    cout << myList.getSize() << endl;
    
}