#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    queue <int> Card;
    int input_loop_cnt;
    
    cin >> input_loop_cnt;
    for(int loop_cnt = 1; loop_cnt <= input_loop_cnt; loop_cnt++){
        Card.push(loop_cnt);
    }

    while(Card.size() > 1) {
        int card_front = Card.front();
        Card.pop();
        card_front = Card.front();
        Card.pop();
        Card.push(card_front);
    }
    cout << Card.front();
}