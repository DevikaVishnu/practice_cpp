#include <iostream>
#include <fstream>
#include <sstream>
#include "cart.h"

using std::cout;
using std::string;
using std::vector;
using std::endl;
using std::stringstream;
using std::ifstream;
using std::getline;

Cart::Cart(string& csvFile) {
	cout << "in constructor:" << "\n";
    if (csvFile.empty()) {
        this->csvFile = "items.csv";
    } else {
        this->csvFile = csvFile;
    }
}

int Cart::readFromCSV() {
    cout << csvFile << endl;
    ifstream file(csvFile);
    if (!file.is_open()) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, serialStr, priceStr;

        if(!getline(ss, name, ',')) continue;
        if(!getline(ss, serialStr, ',')) continue;
        if(!getline(ss, priceStr, ',')) continue;
        
        items.emplace_back(name, serialStr, priceStr);
    }

    file.close();
    return 0;
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
		cout << items[i].serialNo << " ";
		cout << items[i].name << " ";
		cout << items[i].price << "\n";
	}
}