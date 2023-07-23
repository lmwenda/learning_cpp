#pragma once
#include <iostream>

class Worker {
    public:
        std::string name;
        int age;
        int salary;
        int weekly_hours;

        Worker(std::string name, int age, int salary, int weekly_hours);

        std::string return_department();
        std::string return_position();
        std::string return_description();

        int return_id();

    private:
        int id;
        std::string department;
        std::string position;
        std::string description;
};