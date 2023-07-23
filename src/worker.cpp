#include "worker.h";
#include <iostream>

Worker::Worker(std::string name, int age, int salary, int weekly_hours)
{   
    this->id = 5;
    this->name = name;
    this->age = age;
    this->salary = salary;
    this->weekly_hours = weekly_hours;
}

int Worker::return_id()
{
    return this->id;
}