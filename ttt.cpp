#include <iostream>
#include <vector>
 
//game board itself
class board3x3{
    private:
        int matrix[3][3] = {};
    public:

        int checkBoard(){
            //check for a win
            for(int i = 0; i < 3; i++){
                if((matrix[i][0] != 0 && matrix[i][0] == matrix[i][1]) && (matrix[i][1] == matrix[i][2])){
                    return 1;
                }
            }
            for(int j = 0; j < 3; j++){
                if((matrix[0][j] != 0 && matrix[0][j] == matrix[1][j]) && (matrix[1][j] == matrix[2][j])){
                    return 1;
                }
                }
            
            if ((matrix[0][0] != 0 && matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2])){
                return 1;
            }
            if ((matrix[0][2] != 0 && matrix[0][2] == matrix[1][1]) && matrix[1][1] == matrix[2][0]) {
                return 1;
            }
            //check tie
            int full = 0;
            for (int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if (matrix[i][j] != 0){
                        full++;
                    }
                }
            }
            //check tie
            if(full == 9){
                return 2;
            }

            return 0;

        }            
        bool put(int r, int c, int player){
            if (matrix[r][c] != 0) return false; // occupied, reject
            matrix[r][c] = player;
            return true;
        }



        

        int gameEnd(int winner){
            return winner;
            //interact with JS to show winner
        }

        void tie(){
            //interact to have a tie with js
        }

};

//put functions



bool p1turn(board3x3 &board, int r, int c){
    if (!board.put(r, c, 1)) {
        return false; // invalid move — caller should ask again / report error
    }
    int status = board.checkBoard();
    if (status == 1) {
        board.gameEnd(1);
        }   
    else if (status == 2) {
        board.tie();
    }
}



bool p2turn(board3x3 &board, int r, int c){
    if (!board.put(r, c, 2)) {
        return false; // invalid move — caller should ask again / report error
    }
    int status = board.checkBoard();
    if (status == 1) {
        board.gameEnd(2);
        }   
    else if (status == 2) {
        board.tie();
    }
}


void game(){

    
}
int main(){
      

    
    

}

