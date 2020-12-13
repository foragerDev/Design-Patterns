#pragma once

#include <iostream>


class ChinotiFurniture{
public:
    virtual const std::string& name() const = 0;
    virtual void sit() const = 0;
    virtual void kick() const = 0;
};


class ChiniotiChair: public ChinotiFurniture{
public:
    ChiniotiChair(const std::string& name) : chair_name{name}{

    }
    const std::string& name() const override { 
        return chair_name;
        }

    void sit() const override {
        std::cout << "Seems Good Chinoti Chair Lets Try!" << std::endl;
        }

    void kick() const override {
        std::cout << "Seems Trash, Uhh, I did not like this Chinoti Chair!" << std::endl;
    }

private:
    std::string chair_name;
};



class ChiniotiTable : public ChinotiFurniture{
public:
    ChiniotiTable(const std::string& name) : table_name(name){

    }

    const std::string& name() const override{
        return table_name;
    }

    void sit() const override {
        std::cout << "Seems Good Chinoti Table" << std::endl;
    }

    void kick() const override {
        std::cout << "Seems Bad Chinoti Table" << std::endl;
    }
private:
    std::string table_name;
};

