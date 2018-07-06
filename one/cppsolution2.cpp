class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //Map of compliments and their locations w/ iterator
        map<int, int> m;
        map<int, int>::iterator it = m.begin();

        int complement = 0;

        //The vector we will return
        vector<int> vec;

        for(int i = 0; i<nums.size(); i++){

            //Value of the target minus current value of nums
            complement = target-nums.at(i);

            //Iterates through m looking for key complement O(n)
            it = m.find(nums.at(i));

            //If iterator doesn't hit end of map - return locations
            if(it != m.end()){

                vec.push_back(i);
                vec.push_back(it->second);

                return vec;
            }//end if

            //Add complement as key and location as value
            m.insert(pair<int,int>(complement, i));
        }//end for

        return vec;
    }//end function
};//end class
