public class CountNode {
    // Node class
    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    // count node of a tree
    public static int countNode(Node root){
        // base case
        if(root == null){
            return 0;
        }

        int lCount = countNode(root.left);
        int rCount = countNode(root.right);
        int totalNode = lCount + rCount + 1;
        return totalNode;
    }

    public static void main(String[] args) {
          /*
                    1
                   / \
                  2   3
                 / \ / \
                4  5 6  7
        */

        // creating tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.left = new Node(6);
        root.right.right = new Node(7);

        System.out.println("The total Node is : " + countNode(root));
    }
}
