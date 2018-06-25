# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}

nums = Array[3,3]
target = 6

# Hash map for int complement pairs.
map = Hash.new
counter = 0

for i in nums do

    # Store complement
    complement = target-i

    # Fill hashmap
    if map.has_key?(complement)
        puts Array[map[complement], counter]
    end

    map[i] = counter
    counter += 1
end
