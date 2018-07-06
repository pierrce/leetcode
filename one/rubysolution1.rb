# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)

   # Hash map for int complement pairs.
    map = Hash.new
    counter = 0

    for i in nums do

        # Store complement
        complement = target-i

        # Fill hashmap
        if map.has_key?(complement)
            return Array[map[complement], counter]
        end

        map[i] = counter
        counter += 1
    end
end
