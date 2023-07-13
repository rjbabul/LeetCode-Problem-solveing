
class MyHashMap {
public:
     int a[1000005];
    MyHashMap() {

        memset(a, -1, sizeof(a));
    }

    void put(int key, int value) {
        a[key]= value;
    }

    int get(int key) {
        return a[key];
    }

    void remove(int key) {
        a[key]= -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
