# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} l1
# @param {ListNode} l2
# @return {ListNode}
def add_two_numbers(l1, l2)

    # Store the sum of the current nodes
    curSum = l1.val + l2.val

    # Rewrite current l1 node to store remainder
    l1.val = curSum % 10

    # If its the last node and the sum is less than 10 return
    if curSum < 10 && l1.next == nil && l2.next == nil
        return l1
    end

    # Add carry to next l1 node value
    if curSum > 9 && l1.next != nil
        l1.next.val += 1
    end

    # Create new node for carry if it doesn't exist
    if curSum > 9 && l1.next == nil
        l1.next = ListNode.new(1)
    end

    # If l1 is larger than l2, extend l2
    if (l1.next != nil && l2.next == nil)
        l2.next = ListNode.new(0)
    end

    # If l2 is larger than l1, extend l1
    if (l2.next != nil && l1.next == nil)
        l1.next = ListNode.new(0)
    end

    # Recursively go through nodes until none are left
    l1.next = add_two_numbers(l1.next, l2.next)

    return l1
end
