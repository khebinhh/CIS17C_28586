// Kevin Ramirez
// CIS 17C
// Assignment 0, Part A

#include <iostream>
#include <iomanip>
using namespace std;

double totalAmount(double array[12], int SIZE){
  double total = 0;  //set inital to 0
  for(int i = 0; i < SIZE; i++){
    total = total + array[i];  //return total of 12 values
  }
  return total;
}

double averageAmount(double array[12], int SIZE){
  double totalCost = totalAmount(array, SIZE);//take array and size
  double averageSpending = totalCost / SIZE;  //return average
  return averageSpending;
}

double largestMonth(double array[12], int SIZE){
  double largest = array[0];
  for(int i = 1; i < SIZE; i++){
    if(largest<array[i])
      largest=array[i];
  }
  return largest;
}
double smallestMonth(double array[12], int SIZE){
  double smallest = array[0];
  for(int i = 1; i < SIZE; i++){
    if(smallest > array[i])
      smallest = array[i];
  }
  return smallest;
}

int main() {
  double amounts[12], total_spent, average_spend, smallestAmount, largestAmount;
  const int SIZE = 12;
  string month[] = {"January", "February", "March", "April", "May", 
                        "June", "July", "August", "September", "October", 
                            "November", "December"};

  cout << "Enter the credit amounts for each month: \n";
  for(int i = 0; i < 12; i++){
    cin >> amounts[i];  //reads input of earnings per month
    if(amounts[i] < 0){
      amounts[i] = 0;
    }
  }

  total_spent = totalAmount(amounts, SIZE);
  average_spend = averageAmount(amounts, SIZE);
  smallestAmount = smallestMonth(amounts, SIZE);
  largestAmount = largestMonth(amounts, SIZE);

  cout << "Here are the credit cards totals for each month.\n";
  for(int i = 0; i < SIZE; i++){
    cout << month[i] << ": " << fixed << setprecision(2) << amounts[i] << endl;
  }
  cout << "The total amount of money spent was $" << total_spent << endl;
  cout << "The average amount of money spent per month was $" << average_spend << endl;
  cout << "The most amount of money spent in a month was $" << largestAmount << endl;
  cout << "The least amount of money spent in a month was $" << smallestAmount << endl;
}