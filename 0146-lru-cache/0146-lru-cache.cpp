struct Node { // struct Node{}
  int key; // int key;
  int value; // int value;
  shared_ptr<Node> prev; // shared_ptr<Node> prev;
  shared_ptr<Node> next;  // shared_ptr<Node> next;
  Node(int key, int value) : key(key), value(value) {} // Node(int key, int value)
};

class LRUCache { // class LRUCache
 public: // public:
  LRUCache(int capacity) : capacity(capacity) {
    join(head, tail); // join(head, tail)
  }

  int get(int key) { // int  get(int key)
    const auto it = keyToNode.find(key); // const aut it = keyToNode.find(key);
    if (it == keyToNode.cend()) // if (it == KeyToNode.cend())
      return -1; // return -1

    shared_ptr<Node> node = it->second; // shared_ptr<Node> node = it->second
    remove(node); // remove(node);
    moveToHead(node); // moveToHead(node);
    return node->value; // return node->value;
  }

  void put(int key, int value) { // void put(intkey, int value)
    if (const auto it = keyToNode.find(key); it != keyToNode.cend()) {
      shared_ptr<Node> node = it->second; // shared_ptr<Node> node = it->secong;
      node->value = value; // node->value = value;
      remove(node); // remove(node);

      moveToHead(node); // moveToHead(node);
      return; // return ;
    }

    if (keyToNode.size() == capacity) { // if (keyToNode.size() == capacity)
      shared_ptr<Node> lastNode = tail->prev; // shared_ptr<Node> lastNode = tail->prev;
      keyToNode.erase(lastNode->key); // KeyToNode.erase(lastNode->key);
      remove(lastNode); // remove(lastNode);
    }

    moveToHead(make_shared<Node>(key, value)); // moveToHead(make_shared<node>(key, value));
    keyToNode[key] = head->next; // keyToNode[key] = head->next;
  }

 private: // private: 
  const int capacity; // const int capacity;
  unordered_map<int, shared_ptr<Node>> keyToNode; // unordered_map<int, shared_ptr<Node>> keyToNode;
  shared_ptr<Node> head = make_shared<Node>(-1, -1);// shared_ptr<Node> head = make_shared<Node>(-1, -1)
  shared_ptr<Node> tail = make_shared<Node>(-1, -1); // shared_ptr<Node> tail = make_shared<Node>(-1, -1)

  void join(shared_ptr<Node> node1, shared_ptr<Node> node2) { // void join(shared_ptr<node> node1, shared_ptr<Node> node2)
    node1->next = node2; // node->next = node2;
    node2->prev = node1; // node2->prev = node1;
  }

  void moveToHead(shared_ptr<Node> node) { // void moveToHead(shared_ptr<node> node)
    join(node, head->next); // join(node, head->next);
    join(head, node); // join(head, node);
  }

  void remove(shared_ptr<Node> node) { // void remove(shared_ptr<Node> node)
    join(node->prev, node->next); // join(node->prev, node->next);
  }
};