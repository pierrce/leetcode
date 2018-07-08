class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        //All possible codes
        string totCodes[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        //Vector holding all string codes.
        vector<string> codes;

        //Vector holding temp string of code and its iterator
        string tempString;
        vector<string>::iterator iter;

        //Get words in array words.
        for(int i = 0; i<words.size(); i++){

            tempString = "";

            //Get chars in word.
            for(int j = 0; j<words.at(i).length(); j++){

                //cout << totCodes[words.at(i).at(j) - 'a'];
                tempString.append(totCodes[(words.at(i).at(j) - 'a')]);

            }//end for

            iter = find(codes.begin(), codes.end(), tempString);

            //Fill codes.
            if(iter == codes.end()){

                iter = codes.begin();
                iter = codes.insert(iter, tempString);
            }

        }//end for

        return codes.size();

    }//end function
};//end class
