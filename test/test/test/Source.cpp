#include <iostream>
using namespace std;
class test{
public:
	test(int i){
		if (i != 0){
			throw 1;
		}
		cout << "Testuje";
	}
};

int main() {
	test *p;
	try
	{
		p = new test(1);
	}
	catch (int)
	{
		cout << "zle";
	}
	while (true);
	return 0;
}