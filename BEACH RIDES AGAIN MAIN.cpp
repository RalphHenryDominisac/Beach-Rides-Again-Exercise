#include <iostream>
#include <iomanip>
using namespace std;


	double computeFee (char, double , double , double , double);
	

int main (){
	double rentFeeJ = 0;
	double rentFeeK = 0;
	double rentFeeKk = 0;
	double rentFeeB = 0;

	double earnings = 0;
	char ride;
	double rentHour, rentMinute, returnHour, returnMinute;
	
	char col;
	
		for (ride == ride; ride != '0';){
			
	
		cin >> ride;
		if (ride == '0'){
		  cout << "Total Earnings is " << "Php" << earnings << endl;
		}
		
		cin >> rentHour >> col >> rentMinute >> returnHour >> col >> returnMinute;
		
		switch (ride){
			case 'J':
			rentFeeJ = computeFee (ride, rentHour, rentMinute, returnHour, returnMinute);
			earnings = rentFeeJ + rentFeeK + rentFeeB;
	        cout << "Rent Fee is " << setprecision (2) << fixed << "Php" << rentFeeJ << endl;
	            break;
	        case 'K':
	        rentFeeK = computeFee (ride, rentHour, rentMinute, returnHour, returnMinute);
	        earnings = earnings + rentFeeK;
	        cout << "Rent Fee is " << setprecision (2) << fixed << "Php" << rentFeeK << endl;
	            break;
	        case 'B':
	        rentFeeB = computeFee (ride, rentHour, rentMinute, returnHour, returnMinute);
	        earnings = rentFeeJ + rentFeeK + rentFeeB;
	        cout << "Rent Fee is " << setprecision (2) << fixed << "Php" << rentFeeB << endl;		
			
		}
	
            
    
}
return 0;
}




	double computeFee (char ride, double rentHour, double rentMinute, double returnHour, double returnMinute){
		 
	switch (ride)
{
	case 'J':
		if (rentMinute > returnMinute){
		return ((returnHour - rentHour)* 500) + ( (returnMinute - rentMinute)* 10 + 100);	
		}
		return ((returnHour - rentHour) * 500) + ( (returnMinute - rentMinute)* 10);		
		break;
	case 'K':
		if (rentMinute > returnMinute){
		return ((returnHour - rentHour)* 200) + ( (returnMinute - rentMinute)* 5 + 100);	
		}
	    return ((returnHour - rentHour)* 200) + ( (returnMinute - rentMinute)* 5);
		break;
	case 'B':
	    return ((returnHour - rentHour)* 100) + ((returnMinute - rentMinute)*2);
		break;
	
}
}
