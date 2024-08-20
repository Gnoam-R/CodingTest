#include <iostream>
#include <string>
// #include <queue>
#include <deque>

using namespace std;

void deque_func(string input_deque_func, deque <int> *myDequeu);

int main() {
    deque <int> myDeque;
    
    int input_loop_cnt;
    string input_deque_func;
    
    // 6을 입력
    cin >> input_loop_cnt;
    // cout << "start" << "\n";

    for(int loop_cnt = 1; loop_cnt <= input_loop_cnt; loop_cnt++){
        cin >> input_deque_func;
        deque_func(input_deque_func, &myDeque);
    }
    
}

void deque_func(string input_deque_func, deque<int> *myDequeu) {
    if(input_deque_func == "push_front"){
        int input_num;
        cin >> input_num;
        myDequeu->push_front(input_num);
    }
    else if(input_deque_func == "push_back"){
        int input_num;
        cin >> input_num;
        myDequeu->push_back(input_num);
    }
    else if(input_deque_func == "pop_front"){
        if (myDequeu->empty()) {
            cout << "-1" << '\n';
            return;
        }
        int dequeValue = myDequeu->front();
        cout << dequeValue << '\n';
        myDequeu->pop_front();
    }
    else if(input_deque_func == "pop_back"){
        if (myDequeu->empty()) {
            cout << "-1" << '\n';
            return;
        }
        int dequeValue = myDequeu->back();
        cout << dequeValue << '\n';
        myDequeu->pop_back();
    }
    else if(input_deque_func == "size"){
        cout << myDequeu->size() << '\n';
    }
    else if(input_deque_func == "empty"){
        if (myDequeu->empty()) {
            cout << "1" << '\n';
            return;
        }
        cout << "0" << '\n';
    }
    else if(input_deque_func == "front"){
        if (myDequeu->empty()) {
            cout << "-1" << '\n';
            return;
        }
        cout << myDequeu->front() << '\n';
    }
    else if(input_deque_func == "back"){
        if (myDequeu->empty()) {
            cout << "-1" << '\n';
            return;
        }
        cout << myDequeu->back() << '\n';
    }
}