# @param {Integer[]} nums1
# @param {Integer[]} nums2
# @return {Float}
def find_median_sorted_arrays(nums1, nums2)

    # Add arrays together and sort
    nums1 = (nums1 << nums2).flatten!.sort

    # Check if center is full of zeros
    if nums1[(nums1.length/2).to_f.floor] == 0
        return 0.to_f
    end

    # Check if there's an even amount of ints
    if nums1.length % 2 == 0
        return (nums1[(nums1.length)/2]+nums1[(nums1.length/2)-1])/2.to_f
    end

    # Return center int
    return nums1[(nums1.length/2).to_f.floor]
end
