class Tree
{
   int countLeaves(Node node) 
   {
        int count = 0;
        if (node == null) return 0;
        
        else if (node.left == null && node.right == null) return 1;
        
        else {
            count = countLeaves(node.left) + countLeaves(node.right);
        }
        
        return count;
   }
}
