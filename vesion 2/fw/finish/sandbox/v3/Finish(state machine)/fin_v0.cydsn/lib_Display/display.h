#ifndef _DISPALY_H
    #define _DISPALY_H

#include <CyLib.h>
#include <LCD.h>
#include <stdio.h>
#include "lib_DB\database.h"
#include "lib_RTC\RTC_WDT.h"

/*indicator sd card*/
typedef enum {SD_INSERT, SD_NO_INSERT} SDindicator; 
typedef enum {CONNECT, DISCONNECT} NetworkIndicator; 

/*buffer for print string on LCD*/
static  char buff[100];


void DisplayConfig(void);	
void DisplayPrintf(char *message);
void DisplayPutIndicatorSD(SDindicator);
void DisplayPutIndicatorNetwork(NetworkIndicator);
void DisplayPrintfRealTime(void);


#endif
/* [] END OF FILE */