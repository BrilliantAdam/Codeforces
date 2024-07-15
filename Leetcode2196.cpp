class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodes;
        unordered_set<int> children;

        for (auto& desc : descriptions) {
            int parentVal = desc[0], childVal = desc[1], isLeft = desc[2];

            if (nodes.find(parentVal) == nodes.end()) {
                nodes[parentVal] = new TreeNode(parentVal);
            }
            TreeNode* parent = nodes[parentVal];

            if (nodes.find(childVal) == nodes.end()) {
                nodes[childVal] = new TreeNode(childVal);
            }
            TreeNode* child = nodes[childVal];

            if (isLeft) {
                parent->left = child;
            } else {
                parent->right = child;
            }
     
            children.insert(childVal);
        }

        TreeNode* root = nullptr;
        for (auto& node : nodes) {
            if (children.find(node.first) == children.end()) {
                root = node.second;
                break;
            }
        }
        
        return root;
    }
};
