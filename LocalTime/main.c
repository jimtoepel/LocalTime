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
    
    long secondsSince1970 = time(NULL);
    printf("It has been %.0ld seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The time in Greenwich is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    printf("%d\n", now.tm_year);
    printf("%d\n", now.tm_mon);
    printf("%d\n", now.tm_mday);
    
    int currentYear = now.tm_year + 1900;
    int currentMonth = now.tm_mon + 1;
    int currentDay = now.tm_mday;
    
    printf("The date is %d/%d/%d\n", currentMonth, currentDay, currentYear);
    
    
    long secondsNowPlus4Million = secondsSince1970 + 4000000;
    
    struct tm nowPlus;
    localtime_r(&secondsNowPlus4Million, &nowPlus);
    
    printf("4 Million Seconds from now the time will be: %d:%d:%d\n", nowPlus.tm_hour, nowPlus.tm_min, nowPlus.tm_sec);
    
    int millionYear = nowPlus.tm_year + 1900;
    int millionMonth = nowPlus.tm_mon + 1;
    int millionDay = nowPlus.tm_mday;
    
    printf("The date 4 million seconds from now will be: %d/%d/%d\n", millionMonth, millionDay, millionYear);
    
    return 0;
}
