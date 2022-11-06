#include <iostream>
using namespace std;

void swap(int* pipiro, int* hinkwu)
{
	int panteree=0;

	*hinkwu = *pipiro;
	*pipiro = panteree;
	panteree = *hinkwu;
}

void displaySwap(int* pipiro, int* hinkwu)
{
	int panteree=0;
	std::cout << "panteree is: " << panteree << " hinkwu is : " << hinkwu << " while pipiro is: " << pipiro << endl;

}

int main()
{
	int a;
	int b;
	int c;
	std::cout << "Enter the value of hinkwu" << endl;
	std::cin >> a;
	std::cout << "Enter the value of pipiro" << endl;
	std::cin >> b;

	
	displaySwap(&a, &b);
	swap(&a, &b);
	displaySwap(&a, &b);


	return 0;
}


//#include <iostream>
//using namespace std;

//void swap(int& pipiro, int& hinkwu)
//{
//	int panteree = 0;
//
//	panteree = hinkwu;
//	hinkwu = pipiro;
//	pipiro = panteree;
//
//}
//
//void displaySwap(int& pipiro, int& hinkwu)
//{
//	int panteree = 0;
//	std::cout << "panteree is: " << panteree << " hinkwu is : " << hinkwu << " while pipiro is: " << pipiro << endl;
//
//}
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	std::cout << "Enter the value of hinkwu" << endl;
//	std::cin >> a;
//	std::cout << "Enter the value of pipiro" << endl;
//	std::cin >> b;
//
//
//	displaySwap(a, b);
//	swap(a, b);
//	displaySwap(a, b);
//
//
//	return 0;
//}
//
