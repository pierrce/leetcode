/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public bool HasCycle(ListNode head) {

        if(head == null) return false;

        if(head.next == head) return true;

        Dictionary<ListNode, int> dict = new Dictionary<ListNode, int>();

        //If there's a cycle return true, else add the node to hashmap of nodes
        while(head.next != null){

            if(dict.ContainsKey(head))
                return true;

            dict.Add(head, head.val);

            head = head.next;
        }//end while

        return false;
    }//end function
}// end class
