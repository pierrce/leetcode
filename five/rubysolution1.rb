# @param {String} s
# @return {String}
def longest_palindrome(s)

    started = false
    backwards = 0
    longest = ''

    for i in s.chars

        # Start conditions of palindrome
        if !started
            if s.chars[s.chars.index(i) - 2] == i
                backwards = 2
                started = true
            end

            if s.chars[s.chars.index(i) - 1] == i
                backwards = 1
                started = true
            end
        end

        # End and continue conditions of palindrome
        if started
            if i != s.chars[s.chars.index(i) - backwards]

                started = false

                if backwards*2 > longest.length
                   longest = Array.new[s.chars[s.chars.index(i)-backwards..s.chars[s.chars.index(i)]]]
                end

                backwards = 0
            else
                backwards += 1
            end
        end
    end

    # No palindrome solution
    if longest == ""
       longest = s.chars[0]
    end

    return longest
end
