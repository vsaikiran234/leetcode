class Solution {
        public ListNode swapPairs(ListNode head) {
                ListNode dummy = new ListNode(0);
                dummy.next = head;
                ListNode cur = dummy;
                while(cur != null && cur.next != null && cur.next.next != null){
                        ListNode temp = cur.next;
                        ListNode next = temp.next.next;
                        cur.next = temp.next;
                        cur.next.next = temp;
                        temp.next = next;
                        cur = cur.next.next;
                }
                return dummy.next;
    	}
}














