#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> bucket;
    
    for(int i=0; i<moves.size(); i++) {
        for(int j=0; j<board.size(); j++) {
            int item = board[j][moves[i]-1];
            if(item != 0) {
                board[j][moves[i]-1] = 0;
                if(!bucket.empty() && bucket.back() == item) {
                    bucket.pop_back();
                    answer += 2;
                } else {
                    bucket.push_back(item);
                }
                break;
            }
        }
    }
    return answer;
}