#include <iostream>
#include <memory>

class Widget
{
public:
	Widget(int data = 0) //Creating the Widget class
	: data{data}
	{
	std:: cout << "Widget::Widget( " << data << " )" << std::endl;
	}
private:
	int data = 0;
};
//
//
//void doSomething()
//{
//	std::cout << "Do something" << std::endl;
//}
//
//
//
//int main()
//{
//	//auto widget = std::shared_ptr<Widget>(new Widget(1));
//	auto widget = std::make_shared<Widget>(1);
//	std::cout << "Use count: " << widget.use_count() << std::endl;
//
//	auto widget2 = widget;
//	std::cout << "Use count: " << widget.use_count() << std::endl;



int main()
{
	std::weak_ptr<Widget> wPtr;
	{
		auto widget = std::make_shared<Widget>(1);

		wPtr = widget; // weak pointers will not increment the use count
	}
	return 0;
}