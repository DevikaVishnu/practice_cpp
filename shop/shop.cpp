#include <iostream>

// uses a static array to store cart elements

using namespace std;

struct cartItem {
	string name;
	int serialNo;
	int price;
};

class Cart {
	public:
		Cart(int);
		bool addItem(cartItem);
		bool deleteItem(int);
		void displayCart();
		~Cart();
	private:
		cartItem items[5];
		int numItems;
		int itemsSize;
};

int main() {
	Cart myCart(5);
	cartItem myItem = {"dress1", 1234, 500};
	myCart.addItem(myItem);

	myCart.displayCart();
	return 0;
}

Cart::Cart(int cartSize) {
	itemsSize = cartSize;
	numItems = 0;
	cout << "in constructor " << itemsSize << "\n";
}

Cart::~Cart() {

}

bool Cart::addItem(cartItem newItem) {
	if (numItems < itemsSize) {
//		items[numItems + 1] = newItem;
		items[numItems].name = newItem.name;
		items[numItems].serialNo = newItem.serialNo;
		items[numItems].price = newItem.price;
		//cout << "newItem.name " << items[numItems + 1].name << "\n";

		numItems++;
		return true;
	}
	return false;
}

bool Cart::deleteItem(int serialNoToDelete) {
	for(int i=0; i < numItems; i++) {
		if (items[i].serialNo == serialNoToDelete) {
			//shift left all items in the array;
			return true;
		}
	}
	return false;
}

void Cart::displayCart() {
	for(int i=0; i < numItems; i++) {
		cout << items[i].serialNo << "\n";
		cout << items[i].name << "\n";
		cout << items[i].price << "\n";
	}
}