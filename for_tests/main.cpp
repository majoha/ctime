#include <iostream>
#include <ctime>

using namespace std;

int main(){

		while(1){

		time_t t = time(NULL);

		struct tm *now = localtime(&t);

		////To measure 10 seconds we use % 10. For 1 second we use % 1. 
		//if((now->tm_sec % 10) == 0){

		//	cout << "The seconds are " << now->tm_sec << endl;

		//}else{
		//
		//	cout << "Not enough time..." << endl;

		//}
		cout << "The current time is " << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << endl;
		
		}//while(1)

	system("pause");

	return 0;

}//main

//#include <iostream>
//
//using namespace std;
//
//int main(){
//
//	int *pPointer;
//	pPointer = 0;
//	int temp = 5;
//	pPointer = &temp;
//
//	cout << "The value of pPointer is " << *pPointer << endl;
//	cout << "The value of temp is " << temp << endl;
//
//	cout << "Changing the value of pPointer " << endl;
//	*pPointer = 10;
//	cout << "The value of pPointer is " << *pPointer << endl;
//
//	cout << "The value of temp is " << temp << endl;
//
//
//
//	system("pause");
//	return 0;
//}