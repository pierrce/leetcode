class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<char> str (s.c_str(), s.c_str() + s.size());
        vector<char> longest;
        vector<char> current;

        for(int i = 0; i<str.size(); i++){

            for(vector<char>::iterator ci = current.begin(); ci != current.end(); ++ci){

                if(*ci == str.at(i)){

                    cout << "Match Found!\n";
                    if(current.size() > longest.size())
                        longest = current;

                    current.erase(current.begin(), ci+1);
                    break;
                }//end if
            }//end for

            current.push_back(str.at(i));
        }//end for

        if(longest.size() < current.size()){
            return current.size();
        }//end if

        return longest.size();
    }
};
