#include <iostream>
#include <vector>
 

class board3x3{
    private:
        int matrix[3][3] = {};
    public:

        bool checkBoard(){
            for(int i = 0; i < 3; i++){
                if((matrix[i][0] == matrix[i][1]) && (matrix[i][1] == matrix[i][2])){
                    return true;
                }
            }
            for(int j = 0; j < 3; j++){
                if((matrix[0][j] == matrix[1][j]) && (matrix[1][j] == matrix[2][j])){
                    return true;
                }
                }
            
            if ((matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2])){
                return true;
            }
            if ((matrix[0][2] == matrix[1][1]) && matrix[1][1] == matrix[2][0]) {
                return true;
            }
            return false;
        }            
        void put(int r, int c, int player){
            //prompt something about inputting where you'll put your x/o
            if (matrix[r][c] == 0){
                matrix[r][c] = player;
            }
            else{
                put(r, c, player);
            }



        }

        void gameEnd();

};

void p1turn(board3x3 board, int r, int c){

    board.put(r,c,1);
    if(board.checkBoard() == false){
        board.gameEnd();
    }

}

void p2turn(board3x3 board, int r, int c){

    board.put(r,c,2);

}


int main(){

    

}

