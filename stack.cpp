#include <iostream>
using namespace std;
int arr[50], n=50, top=-1;
void push(int data) {
   if(top>=n-1)
   cout<<" Overflow"<<endl;
   else {
      top++;
      arr[top]=data;
   }
}
void pop() {
   if(top<=-1)
   cout<<" Underflow"<<endl;
   else {
      cout<<" popped element is "<< arr[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"data elements are:";
      for(int i=top; i>=0; i--)
      cout<<arr[i]<<" ";
      cout<<endl;
      } else
   cout<<"empty";
}
int main() {
   int ch, data;
   cout<<"1) Push in data"<<endl;
   cout<<"2) Pop from data"<<endl;
   cout<<"3) Display data"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"your choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter data for pushed:"<<endl;
            cin>>data;
            push(data);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
             break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Not found"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
