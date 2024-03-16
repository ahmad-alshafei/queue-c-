#include <iostream>
using namespace std;
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value);
void dequeue();
void display();
void peek();
void print();
void search();








int main() {
    
    
   /* enqueue(5);
    enqueue(7);
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();
    
    dequeue();
    
    display();
    peek();*/
    
    print();
    return 0;
}






void enqueue(int value){
    if ( rear != SIZE -1 ){
        if ( front == -1 && rear == -1 ){
            front++;
            queue[++rear] = value;
        }
        else {
            queue[++rear] = value;
        }
    }
    else {
        cout << "Queue is Full" << endl;
    }
}


void dequeue(){
    if ( front != -1 && rear != -1 && rear >= front){
        front++;
    }
    else {
        cout << "Queue is Empty" << endl;
    }
}


void display(){
    cout << endl;
    if ( front != -1 && rear != -1 && front <= rear){
        for ( int i = rear ; i >= front ; i--){
            cout <<" "<< queue[i] <<" ";
        }
    }
    else {
        cout << "Queue is Empty" << endl;
    }
    cout << endl;


}
int arr[SIZE];
void copy(){
    for (int i = front ; i <= rear ; i++){
        arr[i] = queue[i];
    }
    
    for (int i = front ; i <= rear ; i++){
       cout  <<" " << arr[i] <<" " ;
    }

}

void peek(){
    cout << endl;
    if ( front != -1 && rear != -1 && front <= rear){
            cout <<"The last value is : "<< queue[rear] <<" ";
    }
    else {
        cout << "Queue is Empty" << endl;
    }
    cout << endl;


}

void print(){
    char c;
    int y;
    bool o=1;

    while(o ==1 ){

        if ( o== 1){
            cout << endl;
            cout << "if you want to add Write 1 " << endl<<"if you want to Remove Write 2 " << endl<<"if you want to see the last value Write 3 " << endl<<"if you want to see all value Write 4 "<< endl << "if you want to search Write 5 " << "Write 6 to print copy array "<< endl<< ": ";
            cin >> c;
            
            switch (c) {

                case '1':
                    cout <<"Enter the value you want to add : ";
                    cin >>y;
                    enqueue(y);
                    break;
                case '2':
                    dequeue();
                    break;
                case '3':
                    peek();
                    break;
                case '4':
                    display();
                    break;
                case '5':
                    search();
                    break;
                case '6':
                    copy();
                    break;

                default:
                    cout << "The number you entered is incorrect" << endl;
                    break;
            }
        }
        else{
            break;
        }
        cout << endl;
        cout << "Enter 1 To continue , 0 to  Exit : ";

        cin >>o;

    }
    
}

void search(){
    string p="yes";
    int val;
    while(p == "yes"||"Yes"){
        cout << "Enter the number you want to search for : ";
        cin >> val;
        for ( int i = 0 ; i <= rear ; i++){
            if ( val == queue[i] ){
                cout << "The "<<val << " is Existing " << endl;
            }
            else{
                cout << "The "<<val << " is NOT Existing " << endl;
                
            }
        }
        cout << "Do you want to search for something else? yes or no : ";
        cin >>p;
    }
}
