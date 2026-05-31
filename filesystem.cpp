#include<bits/stdc++.h>
using namespace std;

//Basic Unit of file
class Node
{
    protected:
    string name;
    Node* ptr2parent;
    //string type;
    public:
    Node()
    {}
    virtual ~Node(){};
    virtual void show()=0;

};


class Folder : public Node
{
    protected:
    vector<Node*> list;
    public:

    Folder(string name, Node* ptr2parent)
    {
        this->name = name;
        //type = "Folder";
        this->ptr2parent = ptr2parent;
    }
    void show() override{
    cout << "Folder: " << name << endl;
    cout << "Contains: " << list.size() << endl;

    }

};
class File : public Node
{
    public:
    File(string name, Node* ptr2parent)
    {
        this->name = name;
        //type = "File";
        this->ptr2parent = ptr2parent;
    }
    void show() override{
        cout << "File: " << name << endl;
    }
};
// Controls every action
class FileSystem
{
    Folder* Home;
    Folder* current;

    public:
    FileSystem()
    {
        Home = new Folder{"Home", nullptr};
        current = Home;
    }
};
int main()
{

    return 0;
}