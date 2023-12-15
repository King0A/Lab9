#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin>> loan;
	cout << "Enter interest rate per year (%): ";
	cin>> rate;
	cout << "Enter amount you can pay per year: ";
	cin>> pay;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	double NewBalance,Total,Interest;	
		cout << fixed << setprecision(2); 

	for (int i=1;NewBalance>0;i++)
	{
		Interest=(loan*rate)/100;
		Total=loan+Interest;
		if(Total<pay)
			pay=Total;
		
		NewBalance=Total-pay;
		cout << setw(13) << left << i; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << Interest;			
		cout << setw(13) << left << Total;
		cout << setw(13) << left << pay;		
		cout << setw(13) << left << NewBalance;
		cout << "\n";

		loan=NewBalance;	
	}
	return 0;
}
