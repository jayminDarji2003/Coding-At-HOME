/*
    1. Build a tree
    2. Traversal of a tree
        a. preorder traversal
        b. inorder traversal
        c. postorder traversal
        d. levelordre traversal
*/

import java.util.*;

public class MixTree {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinaryTree {
        static int idx = -1;

        // build tree
        public Node buildTree(int nodes[]) {
            idx++;
            if (nodes[idx] == -1) {
                return null;
            }
            Node newnNode = new Node(nodes[idx]);
            newnNode.left = buildTree(nodes);
            newnNode.right = buildTree(nodes);
            return newnNode;
        }

        // preorder traversal
        public void preorder(Node root){
            // base case
            if(root == null){
                return;
            }

            System.out.print(root.data + " ");
            preorder(root.left);
            preorder(root.right);
        }

        // Inorder traversal
        public void inorder(Node root){
            // base case
            if(root == null){
                return;
            }

            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }

        // Postorder Traversal
        public void postorder(Node root){
            // base case
            if(root == null){
                return;
            }

            postorder(root.left);
            postorder(root.right);
            System.out.print(root.data + " ");
        }


        // LevelOrder Traversal
        public void LevelOrder(Node root){
            // base case
            if(root == null){
                return;
            }

            Queue<Node> q = new LinkedList<>();
            q.add(root);
            q.add(null);

            while(!q.isEmpty()){
                Node currNode = q.remove();
                if(currNode == null){
                    System.out.println();
                    if(q.isEmpty()){
                        break;
                    }else{
                        q.add(currNode);
                    }
                }else{
                    System.out.print(currNode.data + " ");
                    if(currNode.left != null){
                        q.add(currNode.left);
                    }
                    if(currNode.right != null){
                        q.add(currNode.right);
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        int nodes[] = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        BinaryTree tree = new BinaryTree();
        Node root = tree.buildTree(nodes);

        // print root node of data
        System.out.println("-----------------Print root -----------");
        System.out.println("Root node of data is : " + root.data);

        // Preorder Traversal
        System.out.println("------------------ Preorder traversal -----------");
        tree.preorder(root);
        System.out.println();

        // Inorder Traversal
        System.out.println("------------------Inorder traversal-----------");
        tree.inorder(root);
        System.out.println();

        // Postorder Traversal
        System.out.println("------------------ Postorder traversal-----------");
        tree.postorder(root);
        System.out.println();

        // Level order Traversal
        System.out.println("------------------ Level order traversal-----------");
        tree.LevelOrder(root);
        System.out.println();
    }
}
