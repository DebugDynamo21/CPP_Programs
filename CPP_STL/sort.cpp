// Sort the elements of an array in non-decreasig order using STL sort function.
/* sort() - is a comparison-based sorting algorithm that sorts elements in a 
   range into ascending order (by default) or according to a specified comparison function. 
   sort() in the C++ Standard Template Library (STL) is typically an implementation 
   of the introsort algorithm, which is a hybrid sorting algorithm that combines 
   three different algorithms: quicksort, heapsort, and insertion sort.*/

// syntax- sort(start_iterator, end_iterator, comparison_function);

#include <iostream>
#include <vector>
using namespace std;

int main() { 
  // Write your code here
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  
  vector<int> v(n);
  
  cout << "Enter elements of array: ";
  for(int i = 0; i < n; i++){
      cin >> v[i];
  }

  // Using inbuilt sort function to sort the array in non-decreasing order.
  sort(v.begin(), v.end());
  
  for(int i = 0; i < n; i++){
      cout << v[i] << " ";
  }
  return 0;
}
