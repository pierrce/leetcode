class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		int complement = 0;

		for (int i = 0; i<nums.size(); i++) {

			for (int j = 0; j<nums.size(); j++) {

				if (nums.at(i) + nums.at(j) == target && i != j) {

					array<int, 2> ar = { i, j };

					vector<int> vec(ar.begin(), ar.end());

					return vec;
				}//if end
			}//for end
		}//for end
	}//public end
};//class end
