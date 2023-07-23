#include <iostream>
#include "worker.h"

int main(int argc, char *argv[])
{
    std::string name = "maetyu";
    int age = 15;

    std::string *pn = &name;
    int *pa = &age;

    std::cout << "" << std::endl;

    // address

    std::cout << pn << std::endl;
    std::cout << pa << std::endl;

    std::cout << "" << std::endl;

    // output
    std::cout << "Name: " << *pn << std::endl;
    std::cout << "Age: " << *pa << std::endl;

    std::cout << "" << std::endl;

    std::cout << pn << std::endl;
    std::cout << pa << std::endl;

    std::cout << "" << std::endl;

    *pn = "Princess Leia";
    *pa = 23;

    std::cout << "Name: " << *pn << std::endl;
    std::cout << "Age: " << *pa << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;


    std::cout << "" << std::endl;

    Worker worker = Worker("maetyu", 15, 32500, 40);
    int id = worker.return_id();
    std::cout << "ID: " << id << std::endl;
}
