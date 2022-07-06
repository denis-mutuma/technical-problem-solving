class Trie
{
private:
    struct TrieNode
    {
        bool endOfWord;
        TrieNode *child[26];
    };

    TrieNode *root;

    TrieNode *getNode(int index)
    {
        TrieNode *node = new TrieNode;
        node->endOfWord = false;
        for (int i = 0; i < 26; i++)
        {
            node->child[i] = nullptr;
        }
        return node;
    }

public:
    Trie()
    {
        root = getNode('/' - 'a');
    }

    void insert(string word)
    {
        TrieNode *curr = root;
        int index = 0;
        for (int i = 0; word[i] != '\0'; i++)
        {
            index = word[i] - 'a';
            if (curr->child[index] == nullptr)
                curr->child[index] = getNode(index);
            curr = curr->child[index];
        }
        curr->endOfWord = true;
    }

    bool search(string word)
    {
        TrieNode *curr = root;
        int index;
        for (int i = 0; word[i] != '\0'; i++)
        {
            index = word[i] - 'a';
            if (curr->child[index] == nullptr)
                return false;
            curr = curr->child[index];
        }
        return curr->endOfWord;
    }

    bool startsWith(string prefix)
    {
        TrieNode *curr = root;
        int index;
        for (int i = 0; prefix[i] != '\0'; i++)
        {
            index = prefix[i] - 'a';
            if (curr->child[index] == nullptr)
                return false;
            curr = curr->child[index];
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