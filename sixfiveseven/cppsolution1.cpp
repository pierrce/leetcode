class Solution {
public:
    bool judgeCircle(string moves) {

        int horizontal = 0;
        int vertical = 0;

        for(int i = 0; i<moves.length(); i++){

            switch(moves[i]){
                case 'U':
                    vertical++;
                    break;
                case 'D':
                    vertical--;
                    break;
                case 'R':
                    horizontal++;
                    break;
                case 'L':
                    horizontal--;
                    break;
            }//end switch
        }//end for

        if(vertical == 0 && horizontal == 0)
            return true;

        return false;
    }//end function
};//end class
