#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){

        vector<string>board(8);

        for(int i=0; i<8; i++){
            cin>>board[i];
        }

        for(int i=1; i<7; i++){
            for(int j=1; j<7; j++){
                if(board[i][j] == '#' && board[i+1][j-1] == '#' && board[i-1][j-1] == '#'
                && board[i-1][j+1] == '#' && board[i+1][j+1] == '#'){

                    cout<<i+1<<" "<<j+1<<endl;
                    break;

                }
            }
        }
    }
    return 0;
}