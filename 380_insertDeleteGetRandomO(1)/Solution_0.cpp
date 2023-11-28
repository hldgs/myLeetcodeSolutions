// This is the version from official answer. 
class RandomizedSet {
public:
    RandomizedSet() {
        srand((unsigned)time(0));
    }
    
    bool insert(int val) {
        if(indices.count(val)){
            return false;
        }
        indices[val] = nums.size();
        nums.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(indices.count(val) == 0){
            return false;
        }
        int last = nums.back();
        int index = indices[val];
        indices[last] = index;
        nums[index] = last;
        nums.pop_back();
        indices.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand() % nums.size();
        return nums[index];
    }
private:
    vector<int> nums;
    unordered_map<int, int> indices;
};