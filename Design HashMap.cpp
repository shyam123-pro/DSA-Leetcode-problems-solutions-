class MyHashMap {
public:
    vector<int>map;
    MyHashMap() {
        map.resize(1e6+1,-1);
    }
    
    void put(int key, int value) {
        map[key]=value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key]=-1;
    }
};
