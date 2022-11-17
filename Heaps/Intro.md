What is a heap?
Heap is a complete binary tree( all levels are completely filled except the last level. Nodes always lean towards left) that comes with heap order property.

1. Max Heap: Node apne child se badi hogi. Root will be greater than all the elements present in its subtree.

2. Min Heap: Node apne child se choti hogi.Root will be smaller than all the elements present in its subtree.

#Insertion: (Time complexity: O(log n))

If any node is at i th index then

1. its left child will be at 2\*i th index
2. Right child will be at (2\*i +1)th index

I- Insert at end
II- Take it to correct position by swapping(This process is called heapify): Compare it with its parent.(Conditions of maxheap and minHeap will be checked)

#Deletion

1. Swap first and last nodes. [Basically root node ki jagah last node ki value rakhdo.]
2. Remove last node(jo previously root node thi)
3. Propagate root node to its correct place.
