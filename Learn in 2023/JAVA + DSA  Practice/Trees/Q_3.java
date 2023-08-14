/*
    Q.3 :- Min distance between two nodes
*/

package Rivision;

public class Q_3 {
    // create Node class
    static class Node{
        int data;
        Node left;
        Node right;

        public Node(int data){
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    // lca fnx (helper fnx)
    public static Node lca(Node root, int n1, int n2){
        // base case
        if(root == null || root.data == n1 || root.data == n2){
            return root;
        }

        Node leftLca = lca(root.left, n1, n2);  // find left subtree lca
        Node rightLca = lca(root.right, n1, n2); // find right subtree lca

        // left == val but right == null
        if(rightLca == null){
            return leftLca;
        }

        // right == val but left == null
        if(leftLca == null){
            return rightLca;
        }

        // if both return value then
        return root;
    }

    // lcaDist fnx (helper fnx)
    public static int lcaDist(Node root,int n){
        // base case
        if(root == null){
            return -1;
        }

        if(root.data == n){
            return 0;
        }

        // call left subtree
        int leftDist = lcaDist(root.left, n);
        // call right subtree
        int rightDist = lcaDist(root.right, n);

        // both value -1 --> leftDist and rightDist
        if(leftDist == -1 && rightDist == -1){
            return -1;
        }
        else if(leftDist == -1){
            return rightDist+1;
        }
        else{
            return leftDist+1;
        }
    }


    // fnx that find min distance between two nodes
    public static int minDist(Node root,int n1,int n2){
        Node lca = lca(root,n1,n2);
        int dist1 = lcaDist(lca,n1);
        int dist2 = lcaDist(lca,n2);

        return dist1 + dist2;
    }


    public static void main(String[] args) {
        /*
            tree will be
                    1
                   / \
                  2   3
                 / \ / \
                4  5 6  7  
        */

        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);
        root.right.left = new Node(6);
        root.right.right = new Node(7);

        int n1 = 4;
        int n2 = 6;
        System.out.println(minDist(root, n1, n2));
    }
}
