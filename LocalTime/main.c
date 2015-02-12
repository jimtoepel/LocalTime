//
//  main.c
//  LocalTime
//
//  Created by Jim Toepel on 2/11/15.
//  Copyright (c) 2015 FunderDevelopment. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    float secondsSince1970 = time(NULL);
    printf("It has been %.0f seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The time in Greenwich is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    
    return 0;
}
