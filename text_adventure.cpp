#include <iostream>

int main() {

    std::string answer;

    bool repeat = true;
    bool dead = false;

    int location = 10;
    int gotolocA = 0;
    int gotolocB = 0;

    std::string story;
    std::string question;


    while (repeat == true && dead == false) {

        switch (location) {
        case 10:
            story = "You find yourself walking in the woods. You come across what appears to be an opening to a hedge maze.\n";
            question = "Will you enter the maze? ((A)No or (B)Yes)\n";
            gotolocA = 20;
            gotolocB = 30;
            repeat = true;
            dead = false;
            break;
        case 20:
            story = "You play it safe. You then turn around to leave and get attacked, killed and eaten by angry squirrels.\n";
            question = "\n";
            gotolocA = 0;
            gotolocB = 0;
            repeat = false;
            dead = true;
            break;
        case 30:
            story = "You come to a ""t"" intersection\n";
            question = "Which way will you go? ((A)Left or (B)Right) \n";
            gotolocA = 40;
            gotolocB = 50;
            repeat = true;
            dead = false;
            break;
        case 40:
            story = "You come to another ""t"" intersection. (No, it is NOT the same one!)\n";
            question = "Which way will you go? ((A)Left or (B)Right) \n";
            gotolocA = 60;
            gotolocB = 90;
            repeat = true;
            dead = false;
            break;
        case 50:
            story = "You fall into a hole and land in what appears to be a dark cave. You see a light in the distance\n";
            question = "Do you go towards the light or away from it? ((A)Towards or (B)Away)\n";
            gotolocA = 70;
            gotolocB = 80;
            repeat = true;
            dead = false;
            break;
        case 60:
            story = "You find yourself back at the beginning of the hedgemaze\n";
            question = "Will you enter the maze? ((A)No or (B)Yes)\n";
            gotolocA = 20;
            gotolocB = 30;
            repeat = true;
            dead = false;
            break;
        case 70:
            story = "You trip over what appears to be rails as the ""light"" rushes towards you. too late you realize it is a subway train.\n";
            question = "\n";
            gotolocA = 0;
            gotolocB = 0;
            repeat = false;
            dead = true;
            break;
        case 80:
            story = "Running away from the light, it gets brighter. You dive against the side of the wall and let the subway train rush by. After the train passes, you find a ladder.\n";
            question = "Do you stay on this level or go up the ladder? ((A)Stay or (B)Up)\n";
            gotolocA = 110;
            gotolocB = 90;
            repeat = true;
            dead = false;
            break;
        case 90:
            story = "You find an old wizard. He asks you one question.\n";
            question = "What is 1 +1? ((A)11 or (B)2)\n";
            gotolocA = 120;
            gotolocB = 100;
            repeat = true;
            dead = false;
            break;
        case 100:
            story = "You have attained peace, meaning and purpose in your life. go in peace and be fullfilled.\n";
            question = "\n";
            gotolocA = 0;
            gotolocB = 0;
            repeat = false;
            dead = false;
            break;
        case 110:
            story = "The train that passed moments ago is now in reverse. You hear angry squirrels laughing as you are crushed.\n";
            question = "\n";
            gotolocA = 0;
            gotolocB = 0;
            repeat = false;
            dead = true;
            break;
        case 120:
            story = "That is the dumbest thing I've ever heard. Stop overthinking things. back to the beginning for you. \n";
            question = "\n";
            gotolocA = 0;
            gotolocB = 0;
            repeat = true;
            dead = false;
            break;
        default:
            std::cout << "WTF happened?";
        }


        std::cout << story;
        std::cout << question;
        std::cin >> answer;
        std::cout << "\n";

        if (answer == "A") {
            location = gotolocA;

        }
        else if (answer == "B") {
            location = gotolocB;
        }
        else {
            std::cout << "Please follow the rules. You don't get extra points for being cute.\n";
        }
    }


    return 0;

}