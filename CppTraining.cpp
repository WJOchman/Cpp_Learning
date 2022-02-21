#include <iostream>

int main() {
  cout << "Hello World!"\n;
  cout << "My name is Wojtek." << endl;
  cout << "Today is the 20th of February 2022.";
  cout << "Have a nice day! Much love!"
    
  system("paused>0");
}
---------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    // BMI calculator
    // weight(kg) / height * height(m)
    // Underweight < 18.5
    // Normal weight - 18.5 - 24.9
    // Overweight > 25

    float weight, height, bmi;
    cout << "Weight(kg), height(m)";
    cin >> weight >> height;
    bmi = weight / (height * height);
	
    if (bmi < 18.5)
    	cout << "You are underweight" << endl;
    else if (bmi > 25)
  	  cout << "You are overweight" << endl; 
    else
  	  cout << "You are normal weight" << endl;		
	
    cout << "Your BMI is" << bmi;

    system("pause>0");
}
