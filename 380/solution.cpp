class RandomizedSet {
    std::unordered_map<int, size_t> s;
    std::vector<int> v;

public:  
    bool insert(int val) {
        if (s.contains(val)) {
            return false;
        }

        s[val] = v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (not s.contains(val)) {
            return false;
        }

        size_t index = s[val];
        int lastValue = v.back();
        v[index] = lastValue;
        v.pop_back();
        s[lastValue] = index;
        s.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[std::rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
 