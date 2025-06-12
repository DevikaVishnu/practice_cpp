#include <iostream>
#include "cart.h"

using std::cout;
using std::string;
using std::vector;

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
	//items.erase(remove_if(items.begin(), items.end(), [&](const cartItem& item) { return item.serialNo == serialNoToDelete; }), items.end());
}

void Cart::displayCart() const {
	for(int i=0; i < items.size(); i++) {
		cout << items[i].serialNo << "\n";
		cout << items[i].name << "\n";
		cout << items[i].price << "\n";
	}
}