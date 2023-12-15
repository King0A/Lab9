#include<iostream>
using namespace std;

int printO(int(N),int(M))
{
	if (N==0)
		cout << "Invalid input";
	else if (M<0)
		cout << "Invalid input";
	else
	{
		for (int i =1;i<=N;i++)
		{ 
		
			for (int i=0;i<M;i++)
				{
					cout << "O";
				}
				cout << "\n";
		}
		
	}
	cin.ignore();
	return 0;
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
