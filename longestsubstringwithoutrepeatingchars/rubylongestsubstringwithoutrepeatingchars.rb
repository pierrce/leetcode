# @param {String} s
# @return {Integer}
def length_of_longest_substring(s)

    current = Array.new
    longest = Array.new

    for i in s.chars

        # Check if a duplicate exists
        if current.include?(i)

            # Check if current is longer than longest
            if current.length > longest.length
                longest = current
            end

            # Drop everthing to the left of the duplicate char
            current = current.drop(current.index(i)+1)
        end

        # Append next char
        current << i
    end

    # Check if current is longer than longest after appending last char
    if longest.length < current.length
        return current.length
    end

    return longest.length
end
