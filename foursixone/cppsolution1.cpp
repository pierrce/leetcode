class Solution {

public:
    int hammingDistance(int x, int y) {

        bitset<31> bx (static_cast<make_unsigned<decltype(x)>::type>(x));
        bitset<31> by (static_cast<make_unsigned<decltype(y)>::type>(y));

        cout << bx << "\n" << by;

        int difs = 0;

        for(int i = 0; i<32; i++){

            if(bx[i] != by[i])
                difs++;

        }//end for

        return difs;
    }//end function
};// end class
