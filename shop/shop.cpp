#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct cartItem {
	string name;
	int serialNo;
	int price;
};

class Cart {
	public:
		Cart();
		void addItem(cartItem);
		void deleteItem(int);
		void displayCart();
		~Cart();
	private:
		vector<cartItem> items;
};

int main() {
	Cart myCart;
	cartItem myItem = {"dress1", 1234, 500};
	cartItem myItem2 = {"dress2", 4567, 500};
	
	myCart.addItem(myItem);
	myCart.addItem(myItem2);
	myCart.displayCart();
	cout << "After deletion\n";

	myCart.deleteItem(1234);
	myCart.displayCart();

	return 0;
}

Cart::Cart() {
	cout << "in constructor " << "\n";
}

Cart::~Cart() {

}

void Cart::addItem(cartItem newItem) {
	items.push_back(newItem);
}

void Cart::deleteItem(int serialNoToDelete) { 
	//std::vector<int>::iterator position = std::find(items.begin(), items.end(), 8);
//	items.erase(remove_if(begin(items), end(items), [&](const auto& i) {return serialNoToDelete == items[i].serialNo}, end(items)));
	items.erase(remove_if(items.begin(), items.end(), [&](const cartItem& item) { return item.serialNo == serialNoToDelete; }), items.end());
}

void Cart::displayCart() {
	for(int i=0; i < items.size(); i++) {
		cout << items[i].serialNo << "\n";
		cout << items[i].name << "\n";
		cout << items[i].price << "\n";
	}
}