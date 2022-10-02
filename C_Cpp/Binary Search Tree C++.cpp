class BST{
private:
	struct Node{
		int data;
		Node* left;
		Node* right;

		Node(int value){
			data = value;
			left = right = nullptr;
		}
	};

	Node* root = nullptr;

	void addHelper(Node* temp, int value){
		if (value <= temp->data){
			if (temp->left == nullptr){
				temp->left = new Node(value);
			}
			else{
				addHelper(temp->left, value);
			}
		}
		else{
			if (temp->right == nullptr){
				temp->right = new Node(value);
			}
			else{
				addHelper(temp->right, value);
			}
		}
	}

	int getMaxHelper(Node* temp){
		if (temp->right == nullptr)
			return temp->data;
		else
			return getMaxHelper(temp->right);
	}

	int getMinHelper(Node* temp){
		if (temp->left == nullptr)
			return temp->data;
		else
			return getMinHelper(temp->left);
	}

	int getHeightHelper(Node* temp){
		if (temp == nullptr)
			return -1;

		int Left_SubTree = getHeightHelper(temp->left);
		int Right_SubTree = getHeightHelper(temp->right);

		return 1 + max(Left_SubTree, Right_SubTree);
	}

	void inOrder(Node* temp){
		if (temp == nullptr)
			return;

		inOrder(temp->left);
		cout << temp->data << " ";
		inOrder(temp->right);
		
	}

	Node* removeHelper(Node* root, int data){
		if (root == nullptr) return root;
		else if (data < root->data)
			root->left = removeHelper(root->left, data);
		else if (data > root->data)
			root->right = removeHelper(root->right, data);
		else{
			if (root->left == nullptr){
				Node* temp = root->right;
				delete root;
				return temp;
			}
			else if (root->right == nullptr){
				Node* temp = root->left;
				delete root;
				return temp;
			}
			else{
				int maxValue = this->getMaxHelper(root->left);
				root->data = maxValue;
				root->left = removeHelper(root->left, maxValue);
			}
			
		}
		return root;
	}

	void DestroyBST(Node* temp){
		if (temp == nullptr)
			return;
		DestroyBST(temp->left);
		DestroyBST(temp->right);
		delete temp;
	}

public:

	void add(int value){
		if (root == nullptr){
			root = new Node(value);
		}
		else{
			addHelper(root, value);
		}
	}

	int getMax(){
		if (root == nullptr)
			return -1;
		else
			return getMaxHelper(root);
	}

	int getMin(){
		if (root == nullptr)
			return -1;
		else
			return getMinHelper(root);
	}

	int getHeight(){
		if (root == nullptr)
			return -1;
		else
			return getHeightHelper(root);
	}

	//BFS
	void display_levelOrder(){
		if (root == nullptr) return;

		queue<Node*> q;
		q.push(root);

		while (!q.empty()){
			Node* current = q.front();
			q.pop();

			cout << current->data << " ";
			if (current->left != nullptr) q.push(current->left);
			if (current->right != nullptr) q.push(current->right);

		}

		cout << endl;
	}

	void display_inOrder(){
		if (root != nullptr)
			inOrder(root);

		cout << endl;
	}

	void remove(int data){
		root = removeHelper(root, data);
	}

	~BST(){
		DestroyBST(root);
	}
};
