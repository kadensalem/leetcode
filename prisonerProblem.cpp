#include <vector>
#include <algorithm>
#include <random>
#include <cstdio>

int simulate() {
    // Create boxes
    std::vector<int> boxes;
    for(int i = 0; i < 100; i++) {
        boxes.push_back(i);
    }
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(boxes.begin(), boxes.end(), std::default_random_engine(seed));

    // Try each prisoner
    for(int i = 0; i < 100; i++) {
        int attempts = 0;
        int box = i;
        while(1) {
            attempts++;
            if(boxes[box] == i)
                break;
            box = boxes[box];
        }
        if(attempts > 50)
            return 0;
    }
    return 1;
}

int main() {
    int success = 0;
    for(int i = 0; i < 100; i++) {
        success +=  simulate();
    }
    printf("Success rate (out of 100): %d", success);
}