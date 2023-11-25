// This solution is an easy implementation of Trie.
// Notice: We ignore release of the heap memory.

class Trie {
public:
    Trie() {}
    
    void insert(string word) {
        Trie* node = this;
        for(int i = 0; i < word.size(); i++){
            int indexChild = word[i] - 'a';
            if(node->children[indexChild]){
                node = node->children[indexChild];
            }else{
                Trie *tmpNode = new Trie;
                node->children[indexChild] = tmpNode;
                node = node->children[indexChild];
            }
        }
        node->isEnd = true;
    }
    
    bool search(string word) {
        bool isExist = true;
        Trie *node = this;
        for(int i = 0; i < word.size(); i++){
            int indexChild = word[i] - 'a';
            if(node->children[indexChild]){
                node = node->children[indexChild];
            }else{
                isExist = false;
                break;
            }
        }
        return isExist && node->isEnd;
    }
    
    bool startsWith(string prefix) {
        bool isExist = true;
        Trie *node = this;
        for(int i = 0; i < prefix.size(); i++){
            int indexChild = prefix[i] - 'a';
            if(node->children[indexChild]){
                node = node->children[indexChild];
            }else{
                isExist = false;
                break;
            }
        }
        return isExist;
    }
private:
    Trie *children[26] = {nullptr};
    bool isEnd = false;
};