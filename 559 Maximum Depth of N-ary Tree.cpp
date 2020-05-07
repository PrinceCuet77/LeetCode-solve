/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if ( root == NULL ) 
            return 0;
        
        queue < Node* > q;
        q.push(root);
        
        int ans = 0; 
        
        while ( !q.empty() ) {
            int sz = q.size(); 
            
            while ( sz-- ) {
                auto u = q.front(); 
                q.pop();
                
                for ( auto v : u->children ) 
                    q.push(v);
            }
            ans++;
        }
        
        return ans; 
    }
};
