#include "factory/furniture.hpp"


void client_modern(const Furnitur& furniture){
    auto article = furniture.create_modern_furniture();
    std::cout << article->name()<< std::endl;
    article->sit();
    article->kick();
}

void client_chiniot(const Furnitur& furniture){
    auto article = furniture.create_chinioti_furniture();
    std::cout << article->name()<< std::endl;
    article->sit();
    article->kick();
}



int main(){
    Table* table = new Table();
    Chair* chair  = new Chair();
    client_modern(*table);
    client_chiniot(*chair);

    delete table;
    delete chair;
}