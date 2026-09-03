class MyHashMap {
private:
    struct TreeNode {
        int key, value;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int k, int v) : key(k), value(v), left(nullptr), right(nullptr) {}
    };

    class BST {
    private:
        TreeNode* root;

        TreeNode* insert(TreeNode* node, int k, int v) {
            if (!node) return new TreeNode(k, v);
            if (k < node->key) node->left = insert(node->left, k, v);
            else if (k > node->key) node->right = insert(node->right, k, v);
            else node->value = v; // update existing key
            return node;
        }

        TreeNode* minValueNode(TreeNode* node) {
            while (node->left) node = node->left;
            return node;
        }

        TreeNode* deleteNode(TreeNode* node, int k) {
            if (!node) return nullptr;
            if (k < node->key) {
                node->left = deleteNode(node->left, k);
            } else if (k > node->key) {
                node->right = deleteNode(node->right, k);
            } else {
                if (!node->left) {
                    TreeNode* temp = node->right;
                    delete node;
                    return temp;
                } else if (!node->right) {
                    TreeNode* temp = node->left;
                    delete node;
                    return temp;
                }
                TreeNode* succ = minValueNode(node->right);
                node->key = succ->key;
                node->value = succ->value;
                node->right = deleteNode(node->right, succ->key);
            }
            return node;
        }

        TreeNode* search(TreeNode* node, int k) {
            if (!node || node->key == k) return node;
            return k < node->key ? search(node->left, k) : search(node->right, k);
        }

    public:
        BST() : root(nullptr) {}

        void add(int key, int val) {
            root = insert(root, key, val);
        }

        void remove(int key) {
            root = deleteNode(root, key);
        }

        int get(int key) {
            TreeNode* node = search(root, key);
            return node ? node->value : -1;
        }
    };

    static const int SIZE = 10000;
    vector<BST> buckets;

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashMap() : buckets(SIZE) {}

    void put(int key, int value) {
        buckets[hash(key)].add(key, value);
    }

    int get(int key) {
        return buckets[hash(key)].get(key);
    }

    void remove(int key) {
        buckets[hash(key)].remove(key);
    }
};