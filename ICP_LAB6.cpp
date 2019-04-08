#include <iostream>
using namespace std;
#include <string>

//This is a complete a code for all task. Go to the main() method at the bottom of this file for directions on how to run each code.

// This function calculates the perimeter of a rectangle
void RectanglePerimeter(){
double length;
double breadth;
    cout<<"Enter the length of the rectangle ";
    cin >>length ;
    cout<<"Enter the breadth of the rectangle ";
    cin >>breadth ;
    double Perimeter = length*2 + breadth*2;
    //double Perimeter = RectanglePerimeter(length, breadth);
    cout<<"The Perimeter of the rectangle is " <<Perimeter;
}
//This function calculates the proportions of people contributions

void Proportions(){
    string name;
    double contribution;
    int arraysize;
    cout<<"Please enter the number of contributors you have ";
    cin>>arraysize;
     string Names[arraysize];
    double contributions[arraysize];
    bool done = false;
    int index = 0;
    double sum = 0;
    while(!done){
        cout<<"Enter the name of contributor ";
        cin>> name;
        Names[index] = name;
        cout<<"Enter "<<name <<" contribution\n";
        cin>> contribution;
        contributions[index] = contribution;
        sum = sum + contributions[index];
        index++;
        if(index >= arraysize){
            done = true;
        }     
}

cout<<"Here are the names and their contributions:\n";
for(int i = 0; i <index; ++i){
    double proportion = (contributions[i]/sum)*100;
    string contributor = Names[i];
    cout << contributor<<"'s" << " contribution is " <<contributions[i] <<":" <<"("<<contributions[i] <<"/" <<sum<<")" <<"*100" <<"=" <<proportion <<" % \n" ;

}
    
cout<<"Here are the names and their contributions:\n";
for( int i = 0; i < arraysize; ++i){
    double proportion = (contributions[i]/sum)*100;
    string contributor = Names[i];
    cout << contributor << " contribution is " << proportion <<"\n" ;

}
}

//Converting from other currencies to Ghana cedi

void convertToGhanaCedi(){
    double oneCediEquivalence [] = { 0.195323,0.174123,21.8230,0.149813,13.6832,0.264830 };
    double amount;
    double value;
    int currencyNumber;
    cout<<"Please select the currency you want to convert to Ghana cedis:\n ";
    cout<<" 1. USD \n  2. EUR \n  3. JPY \n  4. GBP \n  5. INR  \n  6. CAD \n ";
    cin>> currencyNumber;
    cout<<"Enter the amount you want to convert to Ghana cedis ";
    cin >> amount;
    value = amount/oneCediEquivalence[currencyNumber-1];
    cout<<value;
}
// This functions converts from Ghana cedi to other currencies
void convertToOtherCurrency(){
    double oneCediEquivalence [] = { 0.195323,0.174123,21.8230,0.149813,13.6832,0.264830 };
    double amount;
    double value;
    int currencyNumber;
    cout<<"Please select the currency you want to convert your Ghana cedis to:\n ";
    cout<<" 1. USD \n  2. EUR \n  3. JPY \n  4. GBP \n  5. INR  \n  6. CAD \n";
    cin>> currencyNumber;
    cout<<"Enter the amount in Ghana cedis ";
    cin >> amount;
    value = amount*oneCediEquivalence[currencyNumber-1];
    cout<<value;
}
//This function computes simple interest

void SimpleInterest(){
    double interest;
    double principal;
    double rate;
    double Time;
    cout<<"Please enter your principal amout ";
    cin >> principal ;
    cout<<"Please enter the interest rate ";
    cin >> rate ;
    cout<<"Please enter the time period you ";
    cin >> Time ;
    interest = principal*rate*Time;
    cout<<"Your interest is "<<interest;
}




//Main method for running all the functions
int main(){
//                Task 1
//Comment everythin under the main methor and uncomment task 1 to run RectanglePerimeter() method
//RectanglePerimeter(); //Uncomment this to run task 1.

//                    Task 2
//Comment everything under the main method expect task 2. Uncomment task 2 below to run Proportions() method
//Proportions(); // uncomment this to run task 2
  
  
//                   Task 3
//This is a menu to guid you run tasks three which has two different functions for converting currency.
//uncomment everything after this line expcept task four to run task 3. 
  
  
//	int convertor;
//    cout<<"Select: \n 1. to convert to Ghana cedis \n 2. to convert to other currencies \n";
//	cin>>convertor;
//	if(convertor == 1){
//	convertToGhanaCedi(); 
//}
//	else if(convertor == 2){
// 	convertToOtherCurrency() ;
//	}
//	else{
//	cout<<"Invalid choice. Run the program again ";
//}



 //                      Task 4. 
//comment everything under the main method and uncomment only to task 4 to run simple interest function.

 //SimpleInterest(); //uncomment this to run task 4

}
