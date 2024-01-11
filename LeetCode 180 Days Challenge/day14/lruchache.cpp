class LRUCache {
public:
    int capacity;
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int, int>>::iterator> m;
    
    
    void updatePosition(int key, int value){
        cache.erase(m[key]);
        cache.push_front(make_pair(key, value));
        m[key] = cache.begin();
    }
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
       if(m.find(key) != m.end()){
           updatePosition(key, m[key]->second);
           return m[key]->second;
       }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            updatePosition(key, value);
        }
        else{
            cache.push_front(make_pair(key, value));
            m[key] = cache.begin();
            if(m.size() > capacity){
                m.erase(cache.back().first);
                cache.pop_back();
            }
        }
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
