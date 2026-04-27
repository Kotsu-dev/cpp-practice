#include <iostream>
using namespace std;
enum class ItemType {
    Weapon,
    Miscellaneous,
    Potion,
    Quest,
    Upgrade_material,
    Ascension,
    Lore
};
class Item {
    private:
        string name;
        string description;
        int rarity;
        ItemType type;
    public:
        Item (string n,string d,int r,ItemType t): name(n), description(d), type(t), rarity(r) {
            cout<<"An item created!: "<<name<<endl;
            while (r<1 || r>5){
                cout<<"Invalid rarity value. Please enter a number (1-5): ";
                cin>>r;
            }
            rarity=r;
        }
        string getName() const {
            return name;
        }
        string getDescription() const {
            return description; 
        }
        int getRarity() const {
            return rarity;
        }
        ItemType getType() const {
            return type;
        }
        void setDescription(string description){this->description=description;}
        void setType(ItemType type){
            this->type=type;}
};