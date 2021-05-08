#include<iostream>
#include <vector>
using namespace std;

int row(char **ar,char move){
    int count = 0;
    for (int i = 0; i < 3; ++i) {
        if (ar[i][0]==ar[i][1] && ar[i][2]==ar[i][1] && ar[i][0]==move){
            count++;
        }
    }
    return count;
}
int column(char **ar,char move){
    int count=0;
    for (int i = 0; i < 3; ++i) {
        if (ar[0][i]==ar[1][i] && ar[2][i]==ar[1][i] && ar[0][i]==move){
            count++;
        }
    }
    return count;
}
int diagonal(char **ar,char move){
    int count=0;
    if (ar[0][0]==ar[1][1] && ar[1][1]==ar[2][2] && ar[0][0]==move){
        count++;
    }
    if (ar[0][2]==ar[1][1] && ar[1][1]==ar[2][0] && ar[0][2]==move){
        count++;
    }
    return count;
}

int gameOver(char **ar,char move){
    return row(ar,move) + column(ar,move) + diagonal(ar,move);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int countX = 0;
        int countO = 0;
        int count_ = 0;
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
                }
            }
        }
        int isGameOverX = gameOver(ar,'X');
        int isGameOverO = gameOver(ar,'O');
        if (countX<countO || countX>countO+1 ||(isGameOverX && isGameOverO) ||(isGameOverX && countX==countO) || (isGameOverO && countX>countO)){
            cout<<"3\n";
        } else if (isGameOverO || isGameOverX || count_==0){
            cout<<"1\n";
        } else{
            cout<<"2\n";
        }
    }
}