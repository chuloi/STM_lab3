#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "fsm_run.h"
#include "main.h"
#include "button.h"
#include "led.h"

#define INIT 1
#define AUTO_RED 2
#define AUTO_YELLOW 3
#define AUTO_GREEN 4



extern int status;
extern int mode;
extern int dem;

extern int red_count;
extern int yellow_count;
extern int green_count;



#endif /* INC_GLOBAL_H_ */
