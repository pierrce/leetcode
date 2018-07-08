class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        //Flip image and invert values
        for(int i = 0; i<A.size(); i++){

            //Flip
            reverse(begin(A[i]), end(A[i]));

            //Invert
            replace(A[i].begin(), A[i].end(), 0, 5);
            replace(A[i].begin(), A[i].end(), 1, 0);
            replace(A[i].begin(), A[i].end(), 5, 1);
        }//end for

        return A;
    }//end function
};//end class
