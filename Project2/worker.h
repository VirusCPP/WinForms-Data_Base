#pragma once
#include <string>
#include <vector>
#include <algorithm>

class Worker;

extern std::vector<Worker> workers;

class Worker {
public:
    Worker() = default;
    Worker(const Worker& other) = default;

    void enterdata(const std::string& name, int age, int salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
        workers.push_back(*this);
    }

    std::string GetName() const {
        return this->name;
    }

    int GetAge() const {
        return this->age;
    }

    int GetSalary() const {
        return this->salary;
    }

private:
    std::string name;
    int age;
    int salary;
};

std::vector<Worker> workers;