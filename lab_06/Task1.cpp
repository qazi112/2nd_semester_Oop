#include <iostream>
class LivingThing {
public:
void breathe1() {
std::cout << "I'm breathing as a living thing." << std::endl;
}
};
class Animal : public LivingThing {
public:
void breathe2() {
std::cout << "I'm breathing as an animal." << std::endl;
}
};
class Reptile : public LivingThing {
public:
void crawl() {
std::cout << "I'm crawling as a reptile." << std::endl;
}
};
class Snake : public Animal, public Reptile {
public:
void breathe3() {
std::cout << "I'm breathing as a snake." << std::endl;
}
void crawl2() {
std::cout << "I'm crawling as a snake." << std::endl;
}
};
int main() {
Snake snake;
snake.breathe2();
snake.breathe3();
snake.crawl();
snake.crawl2();

return 0;
}
