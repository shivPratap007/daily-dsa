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
        if(index>size || index<1){
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
    void addAtSpecific(int index, int data){
        if(size==0){
            Node* newNode=new Node();
            size++;
            newNode->data=data;
            newNode->next=nullptr;
            head=tail=newNode;
            
        }else if(index>size || index<1 ){
            cout << "Invalid index values" << endl;
            return ;
        }else if(size==index){
            Node* newNode=new Node();
            size++;
            newNode->data=data;
            newNode->next=nullptr;
            tail->next=newNode;
            tail=newNode;
        }else{
            Node* newNode=new Node();
            size++;
            Node* temp=head;
            int count=1;
            while(count!=index){
                count++;
                temp=temp->next;
            }
            newNode->data=data;
            newNode->next=temp->next;
            temp->next=newNode;
        }
        
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
    myList.addAtSpecific(2,0);
    myList.printLinkedList();

    
    
    
}