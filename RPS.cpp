#include<iostream>
int main() {
 
    int limit;
    std::cout << "\nEnter the  score\t:";
    std::cin >> limit;
    int pc = 0, user = 0;
    do {
    label:
        int random = 1 + (rand() % 3);
        int button, choose;
        std::cout << "\n****ENTER YOUR CHOICE****\n 1. ROCK \n 2. PAPER \n 3.SCISSOR\n";
        std::cin >> choose;
 
        if (random == choose) {
            std::cout << "\n!!!![SAME CHOICE]!!!!";
            goto label;
        }
        if (random < choose) {
            if ((random + choose) == 4) {
                ++pc;
                continue;
            }
            ++user;
        }
        if (random > choose) {
            if ((random + choose) == 4) {
                ++user;
                continue;
            }
            ++pc;
        }
    std::cout << "\n\n PC SCORE\t:\t" <<pc ;
    std::cout << "\n\n USER SCORE\t:\t" <<user;
    } 
    while ((pc != limit) && (user != limit));
    if (pc == limit)
        std::cout << "\n\n!!!!PC WINS!!!!";
    else
        std::cout << "\n\n!!!!USER WINS!!!!";
    return 0;
 
}
