#include <iostream>
#include <vector>
#include <algorithm>
#include "cart.h"

using std::cout;
using std::string;
using std::vector;

int main(int argc, char* argv[]) {
	string csv(argc > 1 ? argv[1] : "");
	
	Cart myCart(csv);
	myCart.readFromCSV();
//	cartItem myItem = {"dress1", 1234, 500};
//	cartItem myItem2 = {"dress2", 4567, 500};
	
//	myCart.addItem(myItem);
//	myCart.addItem(myItem2);
	//myCart.displayCart();

//	myCart.deleteItem(1234);
	myCart.displayCart();

	return 0;
}
