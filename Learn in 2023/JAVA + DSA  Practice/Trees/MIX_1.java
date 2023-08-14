/*
    1. Height of tree
    2. Count No of nodes
    3. Sum of tree  
*/

public class MIX_1 {

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

    // height of a tree
    public static int height(Node root){
        // base case
        if(root == null){
            return 0;
        }

        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        return Math.max(leftHeight, rightHeight) + 1;
    }


    // count no of nodes
    public static int countNode(Node root){
        // base case
        if(root == null){
            return 0;
        }

        int lCount = countNode(root.left);
        int rCount = countNode(root.right);
        return lCount + rCount + 1;
    }


    // SUM of tree
    public static int sumTree(Node root){
        // base case
        if(root == null){
            return 0;
        }

        int leftSum = sumTree(root.left);
        int rightSum = sumTree(root.right);
        return leftSum + rightSum + root.data;
    }

    public static void main(String[] args) {
        /*
                    1
                   / \
                  2   3
                 / \  / \ 
                4   5 6  7   
        */

        // creating a tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.left = new Node(6);
        root.right.right = new Node(7);

        System.out.println("The height of a tree is : " + height(root));
        System.out.println("The no of nodes in a tree is : " + countNode(root));
        System.out.println("The sum of tree is : " + sumTree(root));
    }
}
