class RandomizedSet {
public:
    unordered_set<int> us;
    RandomizedSet() {}
    
    bool insert(int val) {
        if(us.count(val) == 1)
            return false;
        us.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(us.count(val) == 0)
            return false;
        us.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand() % us.size();
        return *next(us.begin(), index);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */