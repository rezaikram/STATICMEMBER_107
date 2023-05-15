#include <iostream>
using namespace std;
class buku
{
	string judul;

public:
	buku setjudul(string judul)
	{
		this->judul = judul;
		return *this; //chain function
	}
	string getjudul()
	{
		return this->judul;
	
	}
} bukunya;

int main()
{
	// bukunya.setbuku("MATEMATIKA");
	//cout << bukunya.getjudul();
	cout << bukunya.setjudul("MATEMATIKA").getjudul(); //chain function calls
	return 0;
}

