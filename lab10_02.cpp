#include <iostream>
#include <string>

using namespace std;

class Hero{
private:
    string name;
    int level;
public:
    Hero(string n,int l){
        name = n;
        level = l;
    }
    string getName(){
        return name;
    }
    int getLevel(){
        return level;
    }
};

int main()
{   
    string n;
    int l;
    cin >> n >> l;
    Hero a(n,l);
    cout << a.getName() << '' << a.getLevel() << endl;
}