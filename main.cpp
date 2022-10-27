/**
 * @author Jack Farmer
 * @date 25/10/2022
 * @details main driver code for OpenCV Tracking Demo
 */
#include "headtrack.hpp"
#include "constants.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
    ht::test();
    ht::runHeadpose();
    return SUCCESS;
}