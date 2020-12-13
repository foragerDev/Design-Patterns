#pragma once

#include <iostream>


class ModernFurnitur{
public:
    virtual const std::string& name() const = 0;
    virtual void sit() const = 0;
    virtual void kick() const = 0;
};


class ModernChair: public ModernFurnitur{
public:
    ModernChair(const std::string& name) : chair_name{name}{

    }
    const std::string& name() const override { 
        return chair_name;
        }

    void sit() const override {
        std::cout << "Seems Good Modern Chair Lets Try!" << std::endl;
        }

    void kick() const override {
        std::cout << "Seems Trash, Uhh, I did not like this Modern Chair!" << std::endl;
    }

private:
    std::string chair_name;
};



class ModernTable : public ModernFurnitur{
public:
    ModernTable(const std::string& name) : table_name(name){

    }

    const std::string& name() const override{
        return table_name;
    }

    void sit() const override {
        std::cout << "Seems Good Modern Table" << std::endl;
    }

    void kick() const override {
        std::cout << "Seems Bad Modern Table" << std::endl;
    }

private:
    std::string table_name;
};

