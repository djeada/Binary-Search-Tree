class BST {
private:
	struct node {
		int key;
		node* left;
		node* right;
	};

	node* root;
	void AddLeafPrivate(int key, node* Ptr);
	void PrintInorderPrivate(node* Ptr);
	node* ReturnNodePrivate(int key, node* Ptr);
	int FindSmallestPrivate(node* Ptr);

public:
	BST();
	node* CreateLeaf(int key);
	void AddLeaf(int key);
	void PrintInorder();
	node* ReturnNode(int key);
	int ReturnRootKey();
	void PrintChildren(int key);
	int FindSmallest();
}; 
