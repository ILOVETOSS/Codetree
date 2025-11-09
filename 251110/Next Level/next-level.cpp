#include <iostream>
#include <string>
using namespace std;

class game {
public:
    string user1_id = "codetree"; 
    int user1_level = 10;         

    string user2_id;
    int user2_level;

    game(string user2_id, int user2_level) {
        this->user2_id = user2_id;
        this->user2_level = user2_level;
    }
};

int main() {
    string user2_id;
    int user2_level;
    cin >> user2_id >> user2_level;

    game g(user2_id, user2_level); // 객체 생성

    // 객체 g를 통해 user1과 user2 정보 출력
    cout << "user " << g.user1_id << " lv " << g.user1_level << endl;
    cout << "user " << g.user2_id << " lv " << g.user2_level << endl;

    return 0;
}
