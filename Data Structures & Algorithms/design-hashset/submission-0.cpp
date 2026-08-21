class MyHashSet {
    int size = 1000000;
    vector<list<int>> buckets;
    
    int hash(int key) { return key % size; }

public:
    MyHashSet() : buckets(size) {}

    void add(int key) {
        int idx = hash(key);
        for (int k : buckets[idx]) if (k == key) return;  // already present
        buckets[idx].push_back(key);
    }

    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove(key);  // list::remove erases matching elements
    }

    bool contains(int key) {
        int idx = hash(key);
        for (int k : buckets[idx]) if (k == key) return true;
        return false;
    }
};