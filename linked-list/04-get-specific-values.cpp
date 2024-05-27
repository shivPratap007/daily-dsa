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
            
        }
        else{
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
    
    int getSize() const{
        return size;
    }
    void removeFirst(){
        Node* temp=head;
        if(head==nullptr){
            return;
        }else if(head==tail){
            head=nullptr;
            tail==nullptr;
            size--;
        }
        head=head->next;
        temp->next=nullptr;
        delete temp;
        size--;
    }
    int getLast(){
        if(tail!=nullptr){
            return tail->data;
        }
        return -1;
    }
    int getFirst(){
        if(head!=nullptr){
            return head->data;
        }
        return -1;
    }
    int getSpecific(int index){
        if(index>size){
            return -1;
        }
        int count=1;
        Node* temp=head;
        while(count!=index){
            count++;
            temp=temp->next;
        }
        return temp->data;
    }
};

int main(){
    LinkedList myList;
    myList.insertAtEnd(20);
    myList.insertAtEnd(10);
    myList.insertAtEnd(50);
    myList.insertAtStart(10);
    myList.removeFirst();
    myList.printLinkedList();

    cout << endl;
    cout << "Size is : " << myList.getSize() << endl;
    cout << "First value " << myList.getFirst() << endl;
    cout << "Last value" << myList.getLast() << endl;
    cout << "Get 8  " << myList.getSpecific(8) << endl;
    
    
}