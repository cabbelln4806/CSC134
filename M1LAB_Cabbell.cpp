// CSC 134
// M1LAB - Apple Orchard
// Nia Cabell
// 8/21/2024   
  

  #include <iostream>
  using namespace std;
  
   int main() {
  // Set up our variables
 string name;
 int num_apples;
 double price_per_apple;
double total_cost;

     
// Get user input
 cout<< "what is your name?" << endl;
cin >> name;
cout << "How many apples in stock?" << endl;
cin >> num_apples;
cout << "How much is one apple?" << endl;
cin >> price_per_apple;
     
  // Say hello
  cout << "___________________" << endl;
  cout << "Welcome to the "; 
  cout << name << " orchard!" << endl;
   

// Calculate the total cost
total_cost = num_apples * price_per_apple;
     
// Give the answers
cout << "You have " << num_apples << " apples" << endl;
cout << "Each apple costs $" << price_per_apple << endl;
     cout << "The total is: $" << total_cost << endl;
   }