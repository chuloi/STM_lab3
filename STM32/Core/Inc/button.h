
#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define MODE_1 8
#define MODE_2 9
#define MODE_3 10
#define MODE_4 11

int isButton1Pressed();
void subKey1Process();
void getKey1Input();

int isButton2Pressed();
void subKey2Process();
void getKey2Input();

int isButton3Pressed();
void subKey3Process();
void getKey3Input();

void changeMode();
#endif /* INC_BUTTON_H_ */
