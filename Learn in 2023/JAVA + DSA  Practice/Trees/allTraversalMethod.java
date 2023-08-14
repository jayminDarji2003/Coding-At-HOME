public class allTraversalMethod {
    // create Node
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

            // building a new tree using array
        public Node buidTree(int nodes[]) {
            idx++;
            if (nodes[idx] == -1) {
                return null;
            }

            Node newNode = new Node(nodes[idx]);
            newNode.left = buidTree(nodes);
            newNode.right = buidTree(nodes);

            return newNode;
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

        // inorder traversal
        public void inorder(Node root){
            // base case
            if(root == null){
                return;
            }
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }

        // post order traversal
        public void postorder(Node root){
            // base case
            if(root == null){
                return ;
            }

            postorder(root.left);
            postorder(root.right);
            System.out.print(root.data + " ");
        }

    }

    public static void main(String[] args) {
        int nodes[] = {7,9,8,-1,-1,5,-1,-1,1,-1,-1};
        BinaryTree tree = new BinaryTree();
        Node root = tree.buidTree(nodes);

        // System.out.println(tree.buidTree(nodes).data); 

        System.out.println(" Preorder traversal");
        tree.preorder(root);

        System.out.println("\n inorder traversal");
        tree.inorder(root);

        System.out.println("\n postorder traversal");
        tree.postorder(root);
    }
}
