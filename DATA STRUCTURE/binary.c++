#include <iostream>
using namespace std;

public
class BinaryTreesYT
{
    static class node
    {
        int data;
        node left;
        node right;

        node(int data)
        {
            this->data = data;
            this.left = nullptr;
            this.right = nullptr;
        }
    } static class BinaryTree
    {
        static int idx = -1;
    public
        static node buildTree(int node[])
        {
            idx++;
            if (node[idx] == -1)
            {
                return NULL;
            }
            node newNode = new node(nodes[idx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);
            return newNode;
        }
    }
}

/// @brief 
/// @param args 
public static void main(string args[])
{
    int nodes[] = {1, 2, 4, -1, -1, 5, -1, -, -1, 3, -1, 6, -1, -1};
    BinaryTree tree = new BinaryTree();
    node root = tree.buildTree(nodes);
    system.out.print1n(root.data);
}