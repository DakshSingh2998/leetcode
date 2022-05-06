//https://leetcode.com/problems/implement-trie-prefix-tree/
class Trie {
public:
    
    class Node{
        public:
            Node* data[26];
            bool finished=false;
    };
    Node* root;
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            //cout<<word[i];
            if(temp->data[word[i]-'a']==NULL){
                Node* node=new Node();
                temp->data[word[i]-'a']=node;
            }
            temp=temp->data[word[i]-'a'];
            
        }
        temp->finished=true;
        
    }
    
    bool search(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            //cout<<word[i];
            if(temp->data[word[i]-'a']==NULL){
                return false;
            }
            temp=temp->data[word[i]-'a'];
            
        }
        return temp->finished;
        
    }
    
    bool startsWith(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            //cout<<word[i];
            if(temp->data[word[i]-'a']==NULL){
                return false;
            }
            temp=temp->data[word[i]-'a'];
            
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
