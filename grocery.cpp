#include <iostream>
using namespace std;


class item {
    private:
        string items[5];
        int s;
    public:
        item() {
            s =5;
        }

        void insert() {
            for(int i=0; i<5; i++) {
                cout<<"Enter an item: "<<endl;
                cin>>items[i];
            }
        }

        void display() {
            for(int i=0; i<5; i++) {
                cout<<items[i]<<endl;
            }

        }

        int search() {
            string x;
            cout<<"Enter the item to search for: "<<endl;
            for(int i=0; i<5; i++) {
                if(items[i] == x) {
                    cout<<"found"<<endl;
                    return 0;
                }

            }
            cout<<"Item"<<x<<"not found"<<endl;
            return 0;
        }

        void highest() {
           string high = items[0];
            for(int i=0; i<s; i++) {
                if(items[i]> high){
                    high = items[i];
                }
                
            }
            cout<<"The last name alphabetically is:"<<high;
        }
};

int main() {
    item item1;
    item1.insert();
    //item1.display();
    item1.highest();
    return 0;

}