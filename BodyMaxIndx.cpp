/*
* File: BodyMaxIndx
* Programmer: Sarah Roberts
* Date: 10/5/2025
*/
// This program is designed to calculate the users BMI to determine whether they are overweight, underweight, or optimal weight 

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
   // BMI = weight x 703/ height^2
	// weight (lbs) , height ''

	double weight, height, BMI ; 

	cout << "Please enter your weight\n : "; 
	cin >> weight ; 
	cout << "Please enter your height\n : "; 
	cin >> height ; 
	
	BMI = weight * 703 / pow(height, 2.0); 

	cout << "Your BMI is : " << BMI << endl; 

	if (BMI < 18.5) {
		cout << "You are underweight.\n"; 
	}
	else {
		string result = (BMI > 25) ? "You are overweight. "
			: "You are an optimal weight. "; 

		cout << result << endl; 
	}


}

