#include <iostream> 
using namespace std; 

int addTwoNumber(int A, int B) 
{ 
	return A + B; 
} 

int main() 
{   cout << "Branch1";
	int A = 4, B = 11; 
	cout << "sum = " << addTwoNumber(A, B); 
	return 0; 
}
