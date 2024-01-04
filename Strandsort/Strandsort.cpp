#include <iostream>
#include <list>
using namespace std;
int main(void) {
   list<int> l = {1, 4, 2, 5, 3};
   cout << "Contents of list before sort operation" << endl;
   for (auto it = l.begin(); it != l.end(); ++it)
      cout << *it << endl;
   l.sort();
   cout << "Contents of list after sort operation" << endl;
   for (auto it = l.begin(); it != l.end(); ++it)
      cout << *it << endl;
   return 0;
}