#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
struct Product {
    double price;
    double rating;
    string name;

    Product(double p, double r, string n) : price(p), rating(r), name(n) {}
};

bool compareByPrice(const Product& a, const Product& b) {
    return a.price < b.price; 
}

bool compareByRating(const Product& a, const Product& b) {
    return a.rating > b.rating; 
}

bool compareByName(const Product& a, const Product& b) {
    return a.name < b.name; 
}

int main() {
    vector<Product> products = {
        {499.99, 4.5, "Smartphone"},
        {1299.99, 4.7, "Laptop"},
        {299.99, 4.1, "Headphones"},
        {99.99, 4.3, "Mouse"},
        {19.99, 4.0, "USB Cable"}
    };
    sort(products.begin(), products.end(), compareByPrice);
    cout << "Products sorted by price (ascending):\n";
    for (const auto& p : products) {
        cout << p.name << " - $" << p.price << " - Rating: " << p.rating << "\n";
    }
    cout << "\n";
    sort(products.begin(), products.end(), compareByRating);
    cout << "Products sorted by rating (descending):\n";
    for (const auto& p : products) {
        cout << p.name << " - $" << p.price << " - Rating: " << p.rating << "\n";
    }
    cout << "\n";
    sort(products.begin(), products.end(), compareByName);
    cout << "Products sorted by name (lexicographical):\n";
    for (const auto& p : products) {
        cout << p.name << " - $" << p.price << " - Rating: " << p.rating << "\n";
    }

    return 0;
}
