#include <string>
#include <vector>

using std::string;
using std::vector;
using std::stoi;

struct cartItem {
	string name;
	int serialNo;
	int price;

	cartItem(const string& name,
			const string& serialStr,
			const string& priceStr)
			: name(name),
			serialNo(stoi(serialStr)),
			price(stoi(priceStr)) {};
};

class Cart {
	public:
		Cart(string&);
		int readFromCSV();
		void addItem(cartItem);
		void deleteItem(int);
		void displayCart() const;
		~Cart() = default;
	private:
		vector<cartItem> items;
		string csvFile;
};

