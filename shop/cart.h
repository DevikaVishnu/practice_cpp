#include <string>
#include <vector>

using std::string;
using std::vector;

struct cartItem {
	std::string name;
	int serialNo;
	int price;
};

class Cart {
	public:
		Cart();
		void addItem(cartItem);
		void deleteItem(int);
		void displayCart() const;
		~Cart();
	private:
		vector<cartItem> items;
};

