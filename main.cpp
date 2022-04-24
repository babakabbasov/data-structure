#include <iostream>
using namespace std;
#define max_size 10
int queue[max_size];
int rear,front;
int isEmpty(){
  return (rear==-1&&front==-1);
  //if(rear==-1&&front==-1) return 1; else return 0;
}
int isFull(){
  return (rear+1) % max_size == front ? true : false;
  //if((rear+1==front)) return true; else return false;
}
void Enqueue(int data){
  if(isFull()){
    cout<<"Novbe doludur"<<endl;
    return;
  }
  if(isEmpty()){
    rear = front = 0;
    queue[front] = data;
  }
  else{
    rear = (rear+1) % max_size;
    queue[rear] = data;
  }
}
void Dequeue(){
  if(isEmpty()){
    cout<<"Novbe bosdur"<<endl;
    return;
  }
  if(front==rear){
    rear=front=-1;
  }else
  {
    front=(front+1) % max_size;
  }
}
int Front(){
  if(isEmpty()){
    cout<<"Novbe bosdur"<<endl;
    return -1;
  }else
    return queue[front];
}
void printAll(){
  int count = 0,index = 0;
  if(isEmpty()){
    cout<<"Novbe bosdur"<<endl;
  }else {
      count = (rear - front + max_size) % max_size + 1;
      for(int i=0; i<count;i++){
        index = (front + i) % max_size;
        cout<<queue[index]<<" ";
    }
    }
}
int main() {
  rear = front = -1;
  Enqueue(5); 
  Enqueue(3); 
  Enqueue(7); 
  Enqueue(2); 
  Enqueue(9); 
  Dequeue();
  Dequeue();
  Dequeue();
  Dequeue();
  Dequeue();
  Enqueue(6); 
  Enqueue(0); 
  Enqueue(4); 
  Enqueue(1); 
  Enqueue(6); 
  Enqueue(11); 
  Enqueue(4);
  Enqueue(12);
  Enqueue(31);
  printAll();
  
}