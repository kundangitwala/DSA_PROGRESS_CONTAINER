class MyHashSet {
    vector<bool> t;

public:
    MyHashSet() {
        t.resize(1000001, false);
    }

    void add(int key) {
        t[key] = true;
    }

    void remove(int key) {
        t[key] = false;
    }

    bool contains(int key) {
        return t[key];
    }
};