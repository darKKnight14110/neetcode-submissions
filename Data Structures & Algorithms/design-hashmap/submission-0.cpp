class MyHashMap {
    int size = 1000;
    vector<list<pair<int,int>>> buckets;   // each bucket: list of (key, value)

    int hash(int key) { return key % size; }

public:
    MyHashMap() : buckets(size) {}

    void put(int key, int value) {
        int idx = hash(key);
        for (auto& p : buckets[idx]) {
            if (p.first == key) { p.second = value; return; }  // update existing
        }
        buckets[idx].push_back({key, value});  // new key
    }

    int get(int key) {
        int idx = hash(key);
        for (auto& p : buckets[idx]) {
            if (p.first == key) return p.second;
        }
        return -1;
    }

    void remove(int key) {
        int idx = hash(key);
        buckets[idx].remove_if([key](pair<int,int>& p) { return p.first == key; });
    }
};