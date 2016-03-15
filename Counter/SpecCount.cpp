#include <iostream>

using namespace std;

class SpecialCounter
{
public: 
	    SpecialCounter(); //Default constructor
	    ~SpecialCounter(); //Default destructor

		void norm(int n)
		{
			for (n; n < 255; n++)
			cout << n << endl;
		}
	    void Start();
	    void Stop();

		

private:
	    int num1, num2;
		int i = 0;
};




int main()
{
	SpecialCounter mySpecCount;
	int j = 0;
	mySpecCount.norm(j);
}