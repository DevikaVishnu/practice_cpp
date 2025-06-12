#include <iostream>
#include <vector>
#include <algorithm>
#include "cart.h"

using std::cout;
using std::string;
using std::vector;

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
