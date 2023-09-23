#include "Man.h"
#include <cstdlib>

Man::Man(const Renderer& renderer): renderer{renderer} {
    x = 0;
    y = 0;
    audacity = rand() % 100;
}

//In main, call if randomly generated number is divisible by 4
Man::interact() {
    vector<char> questions {"What was your top 6 average in high school?", "Do you want me to tutor you?", "You only got into HTN because you're a woman.", "What if we studied together in the DC basement?", "You got that internship because you're a girl" };

}

