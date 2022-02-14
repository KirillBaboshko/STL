#include <iostream>
using namespace std;
//void test_pow(const int* v)
//{
//	int* temp;
//	temp = const_cast<int*>(v);
//	*temp = *v * *v;
//}
//void main()
//{
//	int x = 10;
//	cout << "Before - " << x << "\n\n";
//	test_pow(&x);
//	cout << "After - " << x << "\n\n";
//}
//class B
//{
//public:
//	virtual void Test()
//	{
//		cout << "Test B\n\n";
//	}
//};
//class D :public B
//{
//public:
//	virtual void Test() 
//	{
//		cout << "Test D\n\n";
//	}
//};
//void main()
//{
//	B* ptr_b, obj_b;
//	D* ptr_d, obj_d;
//	ptr_d = dynamic_cast<D*>(&obj_d);
//	if (ptr_d)
//	{
//		cout << "Good work - ";
//		ptr_d->Test();
//	}
//	else
//	{
//		cout << "Error\n\n";
//	}
//	ptr_b= dynamic_cast<B*>(&obj_d);
//	if (ptr_b)
//	{
//		cout << "Good work - ";
//		ptr_b->Test();
//	}
//	else
//	{
//		cout << "Error\n\n";
//	}
//	ptr_b = dynamic_cast<B*>(&obj_d);
//	if (ptr_b)
//	{
//		cout << "Good work - ";
//		ptr_b->Test();
//	}
//	else
//	{
//		cout << "Error\n\n";
//	}
//	ptr_b = dynamic_cast<B*>(&obj_b);
//	if (ptr_b)
//	{
//		cout << "Good work - ";
//		ptr_b->Test();
//	}
//	else
//	{
//		cout << "Error\n\n";
//	}
//	ptr_d = dynamic_cast<D*>(&obj_b);
//	if (ptr_d)
//	{
//		cout << "Good work - ";
//		ptr_d->Test();
//	}
//	else
//	{
//		cout << "Error\n\n";
//	}
//	char c = 'a';
//	int a= static_cast<int>(c);
//	cout << a;
//}

//void main()
//{
//	int i;
//	for (int i = 0; i < 10; i++)
//	{
//		cout<< static_cast<char>(i)<<"\t";
//	}
//}

//reinterpret_cast

void main()
{
	int x;
	const char* str = "This is string!!!";
	cout << str<<"\n\n";
	x = reinterpret_cast<int>(str);
	cout << x << "\n\n";
}