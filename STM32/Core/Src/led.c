/*
 * led.c
 *
 *  Created on: Oct 26, 2022
 *      Author: USER
 */

#include "led.h"

void display7SEG1(int num){
	switch(num){
	case 0:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		break;
	}
	case 1:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		break;
	}
	case 2:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		break;
	}
	case 3:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		break;
	}
	case 4:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		break;
	}
	case 5:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		break;
	}
	case 6:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		break;
	}
	case 7:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
		break;
	}
	case 8:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		break;
	}
	case 9:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
		break;
	}
	default: break;
	}
}
void display7SEG2(int num){
	switch(num){
	case 0:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 1);
		break;
	}
	case 1:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 1);
		break;
	}
	case 2:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 1);
		break;
	}
	case 3:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 0);
		break;
	}
	case 4:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 0);
		break;
	}
	case 5:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 0);
		break;
	}
	case 6:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 0);
		break;
	}
	case 7:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 1);
		break;
	}
	case 8:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 0);
		break;
	}
	case 9:{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 0);
		break;
	}
	default: break;
	}
}
void update7SEG ( int index ){
	int dau = index / 10;
	int cuoi = index % 10;
	switch ( dem ) {
		case 0:{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
			display7SEG1(dau);
			display7SEG2(dau);
			dem = 1;
			break;
		}
		case 1:{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
			display7SEG1(cuoi);
			display7SEG2(cuoi);
			dem = 0;
			break;
		}
		default :
			break ;
	}
 }
void update7SEG1 ( int index ){
	int dau = index / 10;
	int cuoi = index % 10;
	switch ( dem ) {
		case 0:{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
			display7SEG1(dau);
			dem = 1;
			break;
		}
		case 1:{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
			display7SEG1(cuoi);
			dem = 0;
			break;
		}
		default :
			break ;
	}
 }
void update7SEG2 ( int index ){
	int dau = index / 10;
	int cuoi = index % 10;
	switch ( dem ) {
		case 0:{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
			display7SEG2(dau);
			dem = 1;
			break;
		}
		case 1:{
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
			display7SEG2(cuoi);
			dem = 0;
			break;
		}
		default :
			break ;
	}
 }
