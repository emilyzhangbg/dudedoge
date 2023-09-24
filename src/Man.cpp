#include "Man.h"
#include <cstdlib>
#include <unordered_map>
#include <vector>
#include <ctime>
#include <iostream>

//Unordered map:
std::vector<std::string> vector1 = {"Probably better than you.", "I think I did ok. What about you?"};
std::vector<std::string> vector2 = {"No thanks. I need to get to class.", "Oh, maybe. What courses can you help me with?"};
std::vector<std::string> vector3 = {"Huh?", "I love the ambiance down there. So romantic!"};
std::vector<std::string> vector4 = {"I'm calling 911.", "Sure!"};

std::unordered_map<std::string, std::vector<std::string>> questionMap = {
    {"What was your top 6 average in high school?", vector1},
    {"Do you want me to tutor you?", vector2},
    {"What if we studied together in the DC basement?", vector3},
    {"I've followed you all the way from SLC and I think you're beautiful. Could I get your Instagram?", vector4}
};

std::vector<std::string> prompts = {"What was your top 6 average in high school?", "Do you want me to tutor you?", "What if we studied together in the DC basement?", "I've followed you all the way from SLC and I think you're beautiful. Could I get your Instagram?"};

Man::Man(const Renderer& renderer, int difficulty, int x, int y)
: renderer{renderer} {
    this->x = x;
    this->y = y;
    audacity = (rand() % 100)* difficulty;
}

int Man::getAudacity(){
    return this->audacity;
}

//In main, call if randomly generated number is divisible by 4
void Man::highAudacity() {
    //Select random question
    int i = rand() % questionMap.size();
    auto selectedQuestion = questionMap.find(prompts[i]);
    if ( selectedQuestion != questionMap.end()){
        std::cout<< "Question: " << selectedQuestion->first<<"Options: "<<selectedQuestion->second[0]<<", or "<<selectedQuestion->second[1]<<std::endl;
    }
    //Prompt for response
    
}

void Man::moveMan() {
    std::srand(time(0));

    int x_direction = std::rand() % 2;
    int y_direction = std::rand() % 2;

    if (x_direction == 0) {
        x_direction--;
    }

    if (y_direction == 0) {
        y_direction--;
    } 

    int x = 5 * x_direction;
    int y = 5 * y_direction;
}


void Man::updatePosition() {
    
}