#include <iostream>

using namespace std;

template <typename T, typename U>
class Weight {
	
	private:
		T kg;
		U grams;
		
	public:
		void setData(T x, U y)
		{
			kg = x;
			grams = y;
		}
		T getKgData()
		{
			return kg;
		}
		
		U getGramsData()
		{
			return grams;
		}
};

int main(){
	
	Weight <int, double>obj1;
	obj1.setData(5, 0.544);
	
	cout << "Values of KG " << obj1.getKgData() << endl;
	cout << "Values of Grams " << obj1.getGramsData();
	
	return 0;
}
