#ifndef CONSTANTS_HPP_
#define CONSTANTS_HPP_
/**
 * @author Jack Farmer
 * @date 25/10/2022
 * @details holds all constants for the OpenCV Tracking Demo
 */

/* STRING CONSTANTS */
const std::string FILE_FOUND = "File found: ";

const std::string GENERAL_FAIL = "Something went wrong :(";
const std::string WRONG_FILE_TYPE = "Wrong file type provided. Please provide a *.png, *.jpg, or *.gif file.";
const std::string FILE_NOT_FOUND = "File specified not found. Please enter a valid file.";
/* */

/* INT CONSTANTS */
const int SUCCESS = 0;

const int FAIL_GENERAL = -1;
const int FAIL_FILE_NOT_FOUND = -2;
const int FAIL_FILE_WRONG_TYPE = -3;
const int FAIL_something = -4;
/* */

#endif /* CONSTANTS_HPP_ */