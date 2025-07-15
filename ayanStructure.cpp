#include<iostream>
#include<string>

struct Person {
	std::string name;
	int age;
	float height;
 };

int main() {
 	Person ayan = {"Ayan Siddiqui", 18, 5.8f};
 	std::cout <<"Name: "<< ayan.name <<"\nAge: "<<ayan.age<<"\nHeight: "<<ayan.height<< std::endl;
 	return 0;
}
