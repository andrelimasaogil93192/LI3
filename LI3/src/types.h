#include <time.h>


typedef enum gender{
    M = 0,
    F = 1
} Gender;

typedef enum status {
    ACTIVE = 0,
    INACTIVE = 1
} Status;

typedef enum carClass {
    BASIC= 0,
    PREMIUM = 1,
    GREEN = 2
} CarClass;

struct tm stringToTime (char* line);

