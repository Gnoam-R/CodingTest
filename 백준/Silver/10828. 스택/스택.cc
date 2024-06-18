#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int aa_input = 0;
    string bb_input;
    int dd_output = 0;
    stack<int> s;
    
    cin >> aa_input;

    for(int start = 0; start < aa_input; start++){
        cin >> bb_input;
        
        if(bb_input == "push"){
            int cc = 0;
            cin >> cc;
            s.push(cc);
        }
        else if(bb_input == "pop"){
            if(s.empty()){
                cout << -1 << endl;
            }
            else {
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if(bb_input == "empty"){
            if(s.empty()){
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        else if(bb_input == "top"){
            if(s.empty()){
                cout << -1 << endl;
            }
            else {
                cout << (s.top() ? s.top() : -1) << endl;
            }
        }
        else if(bb_input == "size"){
            cout << s.size() << endl;
        }
    }

    return 0;
}