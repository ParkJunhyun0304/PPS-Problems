#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int card_num = 0, pred_num = 0;

    cin >> card_num;
    unordered_set<int> real_card;
    
    for(int i=0; i<card_num; i++) {
        int num;
        cin >> num;
        real_card.insert(num);
    }
    
    cin >> pred_num;
    vector<int> pred_card(pred_num);
    
    for(int i=0; i<pred_num; i++) {
        cin >> pred_card[i];
    }

    for(int i=0; i<pred_num; i++) {
        if(real_card.count(pred_card[i])) pred_card[i] = 1;
        else pred_card[i] = 0;
    }

    for(int i=0; i<pred_num; i++) {
        cout << pred_card[i] << " ";
    }

}