#include <iostream>

template<typename T>
class Node {
    private:
        T data;
        Node* right_pointer;
        Node* left_pointer;

    public:
        Node(T d, Node* lp = NULL, Node* rp = NULL) {
            data = d;
            right_pointer = rp;
            left_pointer = lp;
        }

        T get_data() {
            return data;
        }

        Node* get_left_pointer() {
            return left_pointer;
        }

        Node* get_right_pointer() {
            return right_pointer;
        }

        void set_left_pointer(Node* lp) {
            left_pointer = lp;
        }

        void set_right_pointer(Node* rp) {
            right_pointer = rp;
        }
};

template <typename T>
void left_left_rotation(Node<T>*& root) {
    Node<T>* left_node = root->get_left_pointer();
    if (left_node == NULL || left_node->get_left_pointer() == NULL) return; 

    Node<T>* left_left_node = left_node->get_left_pointer();
    Node<T>* left_right_node = left_node->get_right_pointer();

    // Perform rotation
    root->set_left_pointer(left_right_node);  // Update root's left pointer
    left_node->set_right_pointer(root);      // Make root right child of left_node
    root = left_node;                        // Update root to new root
}

int main() {
    // Build a tree
    Node<int>* node3 = new Node<int>(5);
    Node<int>* node2 = new Node<int>(10, node3);
    Node<int>* node1 = new Node<int>(15, node2);

    Node<int>* root = node1;

    // Print tree after rotation
    std::cout << "Before Rotation" << std::endl;
    std::cout << "Root: " << root->get_data() << std::endl;
    std::cout << "Root left: " << (root->get_left_pointer() ? root->get_left_pointer()->get_data() : -1) << std::endl;
    std::cout << "Left left: " << (root->get_left_pointer()->get_left_pointer() ? root->get_left_pointer()->get_left_pointer()->get_data() : -1) << std::endl;

    // Perform left-left rotation
    left_left_rotation(root);

    // Print tree after rotation
    std::cout << "After Rotation" << std::endl;
    std::cout << "Root: " << root->get_data() << std::endl;
    std::cout << "Root left: " << (root->get_left_pointer() ? root->get_left_pointer()->get_data() : -1) << std::endl;
    std::cout << "Root right: " << (root->get_right_pointer() ? root->get_right_pointer()->get_data() : -1) << std::endl;

    // Clean up
    delete node3;
    delete node2;
    delete node1;

    return 0;
}
