#include<string>
#include <iostream>
using namespace std;
class RoomsClass{


public:
	double Temperature;
	double Humidity;
	double Water_PH_Level;
	int Room_Capacity;
	// defualty constructor
	RoomsClass(){
	
	Temperature = 0;
	Humidity = 0;
	Water_PH_Level =0;
	Room_Capacity = 0;
	
}
	//getters and setters
	double getTemperature(){return Temperature;}
	double getHumidity(){return Humidity;}
	double getWater_PH_Level(){return Water_PH_Level;
	}
	int getRoom_Capacity(){
	return Room_Capacity;
	}
	
	//setters
	void setTemperature(double temp){
		Temperature = temp;
	}
	void setHumidity(double humidity){
		Humidity = humidity;
	}
	void setWater_PH_Level(double phvalue){
		Water_PH_Level = phvalue;
	}
	
	void setRoom_Capacity(int capacity){
		Room_Capacity = capacity;
	}
	
	
void degreeCelsiusTem(double tempRead ){
	if(tempRead<=0){
		cout<<tempRead<<"C ----> " <<"Very cold";	
		}
	else if(tempRead<=16 && tempRead>0){
		cout<<tempRead<<"C ----> " <<"cold";
	}
	else if(tempRead<=26 && tempRead>16){
			cout<<tempRead<<"C ----> " <<"moderately cold";
		}
	else if(tempRead<=32 && tempRead>26){
		cout<<tempRead<<"C ----> " <<"optimal";
		}
	else {
			cout<<tempRead<<"C ----> " <<"hot";
}
}
// Temperature sensor
void fahrenheitTemp(double tempRead){
	double fahrenheitTem = (tempRead * 9/5) + 32;
	if(fahrenheitTem<=32){
		cout<<fahrenheitTem<<"F ----> " <<"Very cold";	
		}
	else if(fahrenheitTem<=60.8 && fahrenheitTem>32){
		cout<<fahrenheitTem<<"F ----> " <<"cold";
	}
	else if(fahrenheitTem<=78.8 && fahrenheitTem>60.8){
			cout<<fahrenheitTem<<"F ----> " <<"moderately cold";
		}
	else if(fahrenheitTem<=89.6 && fahrenheitTem>60.8){
			cout<<fahrenheitTem<<"F ----> " <<"optimal";
		}
	else {
			cout<<fahrenheitTem<<"F ----> " <<"hot";
}	
	
}
// Humidity sensor
void humidity(double humidityRead){
	if(humidityRead < 49){
		cout<<humidityRead<<"%"<<"----> "<<"no humidity";
	}
	else if(humidityRead > 50 && humidityRead <= 59){
	cout<<humidityRead<<"%"<<"----> "<<"less humid";	
	}
	else if(humidityRead > 59 && humidityRead <= 69){
	cout<<humidityRead<<"%"<<"----> "<<" humid";	
	}
	else if(humidityRead > 70){
	cout<<humidityRead<<"%"<<"----> "<<"very humid";	
	}
	else{
		cout<<"invalid input";
	}		
}
// PH Scale

void waterPH(double phValue){
	if(phValue==7){
		cout<<phValue<<"----> optimal";
	}
	else if(phValue<7){
	cout<<phValue<<"----> acidic";	
	}
	else if(phValue > 7 && phValue <= 14 ){
	cout<<phValue<<"----> alkaline";	
	}
	else{
		cout<<"invalid ph value";
	}	
}
//void roomOcupancy(int roomCapacicity){
//	string seats[roomCapacity];
//	
//	
//}
};

//main method
int main(){
	RoomsClass RB100;
	RB100.degreeCelsiusTem(32);
	return 1;
	
//  waterPH();	
//  humidity();
//	
}
