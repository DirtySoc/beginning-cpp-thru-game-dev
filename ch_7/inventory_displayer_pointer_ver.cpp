// Inventory Displayer Pointer
// Demonstrates passing constant pointers to constant objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string>* const inventory);

int main() {
  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  display(&inventory);

  return 0;
}

void display(const vector<string>* const vec) {
  cout << "Your items:\n";
  for (vector<string>::const_iterator iter = (*vec).begin(); iter != (*vec).end(); iter++) {
    cout << *iter << endl;
  }
}
