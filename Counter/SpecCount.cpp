#include <iostream>

using namespace std;

class SpecialCounter
{
public: 
	    SpecialCounter(); //Default constructor
	    ~SpecialCounter(); //Default destructor

		void norm(int strt, int end)
		{
			for (strt; strt < end; strt++)
			cout << strt << endl;
		}

		void Start(int strt)
		{
			cout << " Please enter a new value for Start: "<< endl;
			cin >> strt;
		
		}
		void Stop(int end)
		{
			cout << " Please enter a new value for End: " << endl;
			cin >> end;
		}

		

private:
	    int num1, num2;
		int i = 0;
};




int main()
{
	SpecialCounter mySpecCount;
	int numA = 0;
	int numB = 255;
	mySpecCount.norm(numA, numB);
	mySpecCount.Start(numA);
	mySpecCount.Stop(numB);

}