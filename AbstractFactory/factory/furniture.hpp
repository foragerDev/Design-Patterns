#pragma once
#include "../products/chinioti_furniture.hpp"
#include "../products/modern_furniture.hpp"

class Furnitur{
public:
    virtual ModernFurnitur* create_modern_furniture() const= 0;
    virtual ChinotiFurniture* create_chinioti_furniture() const = 0;
};

class Table: public Furnitur{
public:
    ModernFurnitur* create_modern_furniture() const override{
        return new ModernTable("Modern Small Table");
    }
    ChinotiFurniture* create_chinioti_furniture() const override {
        return new ChiniotiTable("Chinioti Small Table");
    }
};


class Chair: public Furnitur{
public:
    ModernFurnitur* create_modern_furniture() const override{
        return new ModernChair("Modern Small Chair");
    }
    ChinotiFurniture* create_chinioti_furniture() const override {
        return new ChiniotiChair("Chinoit Small Chair");
    }
};