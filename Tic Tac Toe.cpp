#include<iostream>
#include <vector>
using namespace std;

bool row(char **ar,char move){
    for (int i = 0; i < 3; ++i) {
        if (ar[i][0]==ar[i][1] && ar[i][2]==ar[i][1] && ar[i][0]==move){
            return true;
        }
    }
    return false;
}
bool column(char **ar,char move){
    for (int i = 0; i < 3; ++i) {
        if (ar[0][i]==ar[1][i] && ar[2][i]==ar[1][i] && ar[0][i]==move){
            return true;
        }
    }
    return false;
}
bool diagonal(char **ar,char move){
    if (ar[0][0]==ar[1][1] && ar[1][1]==ar[2][2] && ar[0][0]==move){
        return true;
    }
    if (ar[0][2]==ar[1][1] && ar[1][1]==ar[2][0] && ar[0][2]==move){
        return true;
    }
    return false;
}

bool gameOver(char **ar,char move){
    return row(ar,move) || column(ar,move) || diagonal(ar,move);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int countX = 0;
        int countO = 0;
        int count_ = 0;
        vector<pair<int,int>> v;
        char **ar = new char *[3];
        for (int i = 0; i < 3; ++i) {
            ar[i] = new char [3];
        }
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin>>ar[i][j];
                if (ar[i][j]=='X'){
                    countX++;
                } else if (ar[i][j]=='O'){
                    countO++;
                } else{
                    count_++;
                    v.emplace_back(i,j);
                }
            }
        }
        bool isGameOverX = gameOver(ar,'X');
        bool isGameOverO = gameOver(ar,'O');

        if ((isGameOverO && isGameOverX) || countO>countX){
            cout<<"3\n";
        }else if (isGameOverX || isGameOverO || count_==0){
            cout<<"1\n";
        }else {
            char move;
            if (countX == countO) {
                move = 'X';
            } else {
                move = 'O';
            }
            bool isGameOver = false;
            for (auto & i : v) {
                ar[i.first][i.second] = move;
                if (gameOver(ar,move)){
                    isGameOver = true;
                    break;
                }
                ar[i.first][i.second] = '_';
            }
            if (isGameOver){
                cout<<"1\n";
            } else{
                cout<<"2\n";
            }
        }
    }
}