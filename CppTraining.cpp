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
--------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
float num1, num2;
chat operation;
	
cout << "Basic C++ Calculator" << endl;
cin >> num1 >> operation >> num2;

switch (operation)
{
	case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;
	case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
	case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
	case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
	case '%': 
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1); 
		isNum2Int = ((int)num2 == num2);
			
		if (isNum1Int && isNum2Int)
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
		else 
			cout << "Not valid!" 
		break;	
	default: cout<< "Not a valid operation!" << endl;
}	

system("pause>0");
}
