class LRUCache {
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
                                            
    int get(int key) {
        if(!g.count(key) || g[key] == -1) return -1;
        p.push_back(key);
        visited[key]++;
        return g[key];
    }

    void put(int key, int value) {
        if(!g.count(key)|| g[key] == -1) count++;
        else visited[key]++;
        if(count > capacity){
            while(visited[p.front()]) visited[p.front()]--, p.pop_front();
            g[p.front()] = -1;
            p.pop_front();
            count--;
        }
        p.push_back(key);
        g[key] = value;
    }

private:
    unordered_map<int, int>g;
    unordered_map<int, int>visited;
    deque<int>p;
    int count = 0;
    int capacity = 0;
};



                                                                       
                                                                      
                                                                            

                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                       


   


    



    
  
        








