/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode ReverseBetween(ListNode head, int m, int n) {

        if(head == null) return null;

        ListNode headIter = head;
        int tempN = n;

        //Go to node m-1
        for(int i = 1; i<m-1; i++)
            headIter = headIter.next;

        ListNode headIter2 = headIter.next;

        //Reverse the order between nodes m and n
        for(int i = 1; i<tempN-m; i++){

            //Set tail to m then iterate to n
            ListNode tailIter = headIter2;

            for(int j = 0; j < n; j++)
                tailIter = tailIter.next;

            //Set m-1.next to n
            headIter.next = tailIter;
            n--;

            headIter2 = headIter2.next;
            headIter = headIter.next;
        }

        return head;
    }
}
