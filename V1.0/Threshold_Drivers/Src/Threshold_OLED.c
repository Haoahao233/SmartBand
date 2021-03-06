#include "Threshold_OLED.h"


#ifdef XY_12864
	#if defined(SmallChar)
		const uint8_t SmallChars[]=
		{
				0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,//0   0
				0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,//1 
				0x00, 0x42, 0x61, 0x51, 0x49, 0x46,//2  
				0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,//3
				0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,//4
				0x00, 0x27, 0x45, 0x45, 0x45, 0x39,//5
				0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,//6
				0x00, 0x01, 0x71, 0x09, 0x05, 0x03,//7
				0x00, 0x36, 0x49, 0x49, 0x49, 0x36,//8
				0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,//9
				0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,//A   10
				0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,//B
				0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,//C
				0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,//D
				0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,//E
				0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,//F
				0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,//G
				0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,//H
				0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,//I
				0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,//J
				0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,//K
				0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,//L
				0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,//M
				0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,//N
				0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,//O
				0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,//P
				0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,//Q
				0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,//R
				0x00, 0x46, 0x49, 0x49, 0x49, 0x31,//S
				0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,//T
				0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,//U
				0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,//V
				0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,//W
				0x00, 0x63, 0x14, 0x08, 0x14, 0x63,//X
				0x00, 0x07, 0x08, 0x70, 0x08, 0x07,//Y
				0x00, 0x61, 0x51, 0x49, 0x45, 0x43,//Z   35
																			 
				0x00, 0x00, 0x00, 0x00, 0x00, 0x00,//    36 ??
				0x00, 0x00, 0x36, 0x36, 0x00, 0x00,// :  37
				0x00, 0x08, 0x08, 0x08, 0x08, 0x08,// -  38
				0x00, 0x20, 0x10, 0x08, 0x04, 0x02,// /  39
				0x00, 0x00, 0x60, 0x60, 0x00, 0x00,// .  40
				0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,// ,  41
				0x00, 0x04, 0x02, 0x01, 0x02, 0x04,// ^  42
				0x08, 0x08, 0x08, 0x2A, 0x1C, 0x08,// -> 43
				
				0x00, 0x20, 0x54, 0x54, 0x54, 0x78,// a  44
				0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,// b
				0x00, 0x38, 0x44, 0x44, 0x44, 0x20,// c
				0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,// d
				0x00, 0x38, 0x54, 0x54, 0x54, 0x18,// e
				0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,// f
				0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,// g                               
				0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,// h
				0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,// i
				0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,// j
				0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,// k
				0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,// l 
				0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,// m
				0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,// n
				0x00, 0x38, 0x44, 0x44, 0x44, 0x38,// o
				0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,// p
				0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,// q
				0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,// r
				0x00, 0x48, 0x54, 0x54, 0x54, 0x20,// s
				0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,// t
				0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,// u
				0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,// v
				0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,// w
				0x00, 0x44, 0x28, 0x10, 0x28, 0x44,// x
				0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,// y
				0x00, 0x44, 0x64, 0x54, 0x4C, 0x44 // z  69
			}; 
	#elif defined(LargeChar)
		const uint8_t LargeChars[] = 
		{ 
			0x00,0xE0,0xF0,0x18,0x08,0x18,0xF0,0xE0,0x00,0x0F,0x1F,0x30,0x20,0x30,0x1F,0x0F,/*"0",0*/
			0x00,0x00,0x10,0x10,0xF8,0xF8,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,/*"1",1*/
			0x00,0x70,0x78,0x08,0x08,0x08,0xF8,0xF0,0x00,0x30,0x38,0x2C,0x26,0x23,0x31,0x30,/*"2",2*/
			0x00,0x30,0x38,0x08,0x08,0x88,0xF8,0x70,0x00,0x18,0x38,0x21,0x21,0x23,0x3E,0x1C,/*"3",3*/
			0x00,0x00,0x80,0xC0,0x70,0xF8,0xF8,0x00,0x00,0x06,0x07,0x25,0x24,0x3F,0x3F,0x24,/*"4",4*/
			0x00,0xF8,0xF8,0x88,0x88,0x88,0x08,0x08,0x00,0x19,0x39,0x20,0x20,0x31,0x1F,0x0E,/*"5",5*/
			0x00,0xE0,0xF0,0x98,0x88,0x98,0x90,0x00,0x00,0x0F,0x1F,0x31,0x20,0x20,0x3F,0x1F,/*"6",6*/
			0x00,0x18,0x18,0x08,0x88,0xE8,0x78,0x18,0x00,0x00,0x00,0x3E,0x3F,0x01,0x00,0x00,/*"7",7*/
			0x00,0x70,0xF8,0x88,0x08,0x88,0xF8,0x70,0x00,0x1C,0x3E,0x23,0x21,0x23,0x3E,0x1C,/*"8",8*/
			0x00,0xF0,0xF8,0x08,0x08,0x18,0xF0,0xE0,0x00,0x01,0x13,0x32,0x22,0x33,0x1F,0x0F,/*"9",9*/

			0x00,0x00,0xC0,0xF8,0xF8,0xE0,0x00,0x00,0x20,0x3C,0x3F,0x23,0x02,0x27,0x3F,0x38,/*"A",10*/
			0x08,0xF8,0xF8,0x88,0x88,0xF8,0x70,0x00,0x20,0x3F,0x3F,0x20,0x20,0x31,0x1F,0x0E,/*"B",11*/
			0xC0,0xF0,0x38,0x08,0x08,0x08,0x38,0x38,0x07,0x1F,0x38,0x20,0x20,0x30,0x18,0x08,/*"C",12*/
			0x08,0xF8,0xF8,0x08,0x08,0x18,0xF0,0xE0,0x20,0x3F,0x3F,0x20,0x20,0x30,0x1F,0x0F,/*"D",13*/
			0x08,0xF8,0xF8,0x88,0xE8,0xE8,0x18,0x10,0x20,0x3F,0x3F,0x20,0x23,0x23,0x38,0x18,/*"E",14*/
			0x08,0xF8,0xF8,0x88,0xE8,0xE8,0x18,0x10,0x20,0x3F,0x3F,0x20,0x03,0x03,0x00,0x00,/*"F",15*/
			0xC0,0xF0,0x38,0x08,0x08,0x38,0x38,0x00,0x07,0x1F,0x38,0x20,0x22,0x3E,0x1E,0x02,/*"G",16*/
			0x08,0xF8,0xF8,0x08,0x00,0x08,0xF8,0xF8,0x20,0x3F,0x3F,0x21,0x01,0x21,0x3F,0x3F,/*"H",17*/
			0x00,0x08,0x08,0xF8,0xF8,0x08,0x08,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,/*"I",18*/
			0x00,0x00,0x08,0x08,0xF8,0xF8,0x08,0x08,0xC0,0xC0,0x80,0x80,0xFF,0x7F,0x00,0x00,/*"J",19*/
			0x08,0xF8,0xF8,0xC8,0xE8,0x38,0x18,0x08,0x20,0x3F,0x3F,0x21,0x27,0x3E,0x38,0x20,/*"K",20*/
			0x08,0xF8,0xF8,0x08,0x00,0x00,0x00,0x00,0x20,0x3F,0x3F,0x20,0x20,0x20,0x30,0x30,/*"L",21*/
			0x08,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x08,0x20,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x20,/*"M",22*/
			0x08,0xF8,0xF8,0xF0,0xC0,0x08,0xF8,0xF8,0x20,0x3F,0x3F,0x20,0x07,0x1F,0x3F,0x3F,/*"N",23*/
			0xE0,0xF0,0x18,0x08,0x08,0x18,0xF0,0xE0,0x0F,0x1F,0x30,0x20,0x20,0x30,0x1F,0x0F,/*"O",24*/
			0x08,0xF8,0xF8,0x08,0x08,0x08,0xF8,0xF0,0x20,0x3F,0x3F,0x21,0x01,0x01,0x01,0x00,/*"P",25*/
			0xE0,0xF0,0x18,0x08,0x08,0x18,0xF0,0xE0,0x0F,0x1F,0x38,0x28,0x38,0x70,0x5F,0x4F,/*"Q",26*/
			0x08,0xF8,0xF8,0x88,0x88,0x88,0xF8,0x70,0x20,0x3F,0x3F,0x20,0x03,0x0F,0x3C,0x30,/*"R",27*/
			0x00,0x70,0xF8,0x88,0x08,0x08,0x38,0x38,0x00,0x38,0x38,0x21,0x21,0x23,0x3E,0x1C,/*"S",28*/
			0x18,0x18,0x08,0xF8,0xF8,0x08,0x18,0x18,0x00,0x00,0x20,0x3F,0x3F,0x20,0x00,0x00,/*"T",29*/
			0x08,0xF8,0xF8,0x08,0x00,0x08,0xF8,0xF8,0x00,0x1F,0x3F,0x20,0x20,0x20,0x3F,0x1F,/*"U",30*/
			0x08,0x78,0xF8,0x88,0x00,0xC8,0xF8,0x38,0x00,0x00,0x07,0x3F,0x3E,0x0F,0x01,0x00,/*"V",31*/
			0x08,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x08,0x00,0x03,0x3F,0x3F,0x3F,0x3F,0x03,0x00,/*"W",32*/
			0x08,0x18,0x78,0xE8,0x80,0xE8,0x78,0x18,0x20,0x30,0x3C,0x2F,0x03,0x2F,0x3C,0x30,/*"X",33*/
			0x08,0x38,0xF8,0xC8,0xC8,0xF8,0x38,0x08,0x00,0x00,0x20,0x3F,0x3F,0x20,0x00,0x00,/*"Y",34*/
			0x10,0x18,0x08,0x08,0xC8,0xF8,0x38,0x08,0x20,0x38,0x3E,0x27,0x21,0x20,0x38,0x18,/*"Z",35*/

			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//    36 ??
			0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,// :  37
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,// -  38
			0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,0x00,0x60,0x18,0x06,0x01,0x00,0x00,0x00,// /  39
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00,0x00,0x00,0x00,0x00,// .  40
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xB0,0x70,0x00,0x00,0x00,0x00,0x00,// ,  41
			0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,// ~  42 
			0x00,0x00,0x00,0x00,0x20,0x40,0x80,0x00,0x00,0x01,0x01,0x01,0x09,0x05,0x03,0x01,// -> 43
			
			0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x19,0x3D,0x24,0x36,0x3F,0x3F,0x20,/*"a",0*/
			/* (8 X 16 , ??, ?? )*/

			0x10,0xF0,0xF0,0x80,0x80,0x80,0x00,0x00,0x00,0x3F,0x3F,0x31,0x20,0x31,0x1F,0x0E,/*"b",1*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,0x0E,0x1F,0x31,0x20,0x20,0x31,0x11,/*"c",2*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x80,0x80,0x80,0x90,0xF0,0xF0,0x00,0x1F,0x3F,0x20,0x20,0x30,0x3F,0x3F,/*"d",3*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x1F,0x3F,0x24,0x24,0x24,0x37,0x17,/*"e",4*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x80,0x80,0xE0,0xF0,0x90,0xB0,0x20,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,/*"f",5*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x6B,0xFF,0x94,0x94,0x97,0xF3,0x60,/*"g",6*/
			/* (8 X 16 , ??, ?? )*/

			0x10,0xF0,0xF0,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x3F,0x21,0x00,0x20,0x3F,0x3F,/*"h",7*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x80,0x98,0x98,0x98,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,/*"i",8*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x00,0x80,0x98,0x98,0x98,0x00,0x00,0xC0,0xC0,0x80,0x80,0xFF,0x7F,0x00,/*"j",9*/
			/* (8 X 16 , ??, ?? )*/

			0x10,0xF0,0xF0,0x00,0x80,0x80,0x80,0x80,0x20,0x3F,0x3F,0x26,0x2F,0x39,0x30,0x20,/*"k",10*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x10,0x10,0xF8,0xF8,0x00,0x00,0x00,0x00,0x20,0x20,0x3F,0x3F,0x20,0x20,0x00,/*"l",11*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x20,0x3F,0x3F,0x20,0x3F,0x3F,0x20,0x3F,/*"m",12*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x3F,0x3F,0x21,0x00,0x20,0x3F,0x3F,/*"n",13*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x1F,0x3F,0x20,0x20,0x20,0x3F,0x1F,/*"o",14*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x80,0xFF,0xFF,0xB1,0x20,0x31,0x1F,0x0E,/*"p",15*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,0x0E,0x1F,0x31,0x20,0xB1,0xFF,0xFF,/*"q",16*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x20,0x20,0x3F,0x3F,0x21,0x20,0x01,0x01,/*"r",17*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x33,0x37,0x24,0x24,0x24,0x3D,0x19,/*"s",18*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x80,0x80,0xE0,0xE0,0x80,0x80,0x00,0x00,0x00,0x00,0x1F,0x3F,0x20,0x30,0x10,/*"t",19*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x00,0x1F,0x3F,0x20,0x20,0x30,0x3F,0x3F,/*"u",20*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x03,0x0F,0x3C,0x3C,0x0F,0x03,0x00,/*"v",21*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x01,0x0F,0x3E,0x3C,0x0F,0x3F,0x3E,0x07,/*"w",22*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x20,0x31,0x3F,0x2E,0x3F,0x31,0x20,/*"x",23*/
			/* (8 X 16 , ??, ?? )*/

			0x80,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x81,0x87,0xFE,0x78,0x1E,0x07,0x01,/*"y",24*/
			/* (8 X 16 , ??, ?? )*/

			0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x21,0x31,0x3C,0x2E,0x23,0x31,0x30,/*"z",25*/
			/* (8 X 16 , ??, ?? )*/

		};
	#endif
#endif
		
#ifdef XY_12832
	const uint8_t NormalChars[] = 
	{ 
			0x00,0xE0,0xF0,0x10,0x10,0x10,0x10,0x30,0xE0,0xC0,0x00,0x81,0xC1,0x60,0x30,0x18,
	    0x0C,0x06,0xC3,0xC1,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01/*"2",0*/
	};
#endif


void OLED_GPIO_Init(void)
{
	//SCL
		Threshold_HardWare_GPIO_Init(THRE_GPIOA,GPIO_15,GPIO_MODE_OUTPUT_PP,GPIO_PULLUP,GPIO_SPEED_FREQ_HIGH);
	//SDA
		Threshold_HardWare_GPIO_Init(THRE_GPIOA,GPIO_1,GPIO_MODE_OUTPUT_PP,GPIO_PULLUP,GPIO_SPEED_FREQ_HIGH);
	//RST
		Threshold_HardWare_GPIO_Init(THRE_GPIOA,GPIO_4,GPIO_MODE_OUTPUT_PP,GPIO_PULLUP,GPIO_SPEED_FREQ_HIGH);
	//DC
		Threshold_HardWare_GPIO_Init(THRE_GPIOB,GPIO_0,GPIO_MODE_OUTPUT_PP,GPIO_PULLUP,GPIO_SPEED_FREQ_HIGH);
}


/************************************** Internal Command *****************************************/


void OLED_WrDat(uint8_t data)
{
    unsigned char i = 8;

    OLED_DC_High();
    __asm ("nop");
    OLED_SCL_Low();  
    __asm ("nop"); 
    while (i --)
    {
        if (data & 0x80)
        {
            OLED_SDA_High();
        }
        else
        {
            OLED_SDA_Low();
        }
        OLED_SCL_High(); 
        __asm ("nop");
        //asm ("nop");
        OLED_SCL_Low();    
        data <<= 1;    
    }
}

/*
 *  ????
 */
void OLED_WrCmd(unsigned char cmd)
{
    unsigned char i = 8;

    OLED_DC_Low();
	  OLED_SCL_Low();
    //asm ("nop");   
    while (i --)
    {
        if (cmd & 0x80)
        {
            OLED_SDA_High();
        }
        else
        {
            OLED_SDA_Low();
        }
        OLED_SCL_High();
        __asm ("nop");
        //asm("nop");             
        OLED_SCL_Low();    
        cmd <<= 1;  
    } 	
}

/*
 *  ????
 */
void OLED_Set_XY(unsigned char x, unsigned char y)
{ 
    OLED_WrCmd(0xb0 + y);
    OLED_WrCmd(((x & 0xf0) >> 4) | 0x10);
    OLED_WrCmd((x & 0x0f) | 0x01); 
}

/*
 *  ????
 */
void OLED_Clear(void)
{
    unsigned char y,x;	
    
    for (y=0; y<8; y++)
    {
        OLED_WrCmd(0xb0 + y);
        OLED_WrCmd(0x01);
        OLED_WrCmd(0x10); 
        for (x=0; x<X_WIDTH; x++)
        {
            OLED_WrDat(0);
        }
    }
}

/*
 *  ????
 */
void OLED_Delay_ms(unsigned int ms)
{                         
    unsigned int a;

    while (ms)
    {
        a = 13350;
        while (a--);
        ms --;
    }
    return;
}

/*
 *  ?????
 */
void OLED_Init(void)        
{
		
		OLED_GPIO_Init();
	
    OLED_SCL_Low(); 	

    OLED_RST_Low();
    OLED_Delay_ms(50);
    OLED_RST_High();
	
		OLED_WrCmd(0xAE);  // Display Off (0x00)

		OLED_WrCmd(0xD5);
		OLED_WrCmd(0x80);// Set Clock as 100 Frames/Sec

		OLED_WrCmd(0xA8);
		OLED_WrCmd(0x1F);// 1/64 Duty (0x0F~0x3F)

		OLED_WrCmd(0xD3);
		OLED_WrCmd(0x00);// Shift Mapping RAM Counter (0x00~0x3F)

		OLED_WrCmd(0x40);// Set Mapping RAM Display Start Line (0x00~0x3F)

		OLED_WrCmd(0x8D); 
		OLED_WrCmd(0x14); // Enable Embedded DC/DC Converter (0x00/0x04)

		OLED_WrCmd(0x20);
    OLED_WrCmd(0x02);		     // Set Page Addressing Mode (0x00/0x01/0x02)
		
		OLED_WrCmd(0xA1);// Set SEG/Column Mapping     0x00???? 0x01??

		OLED_WrCmd(0xC8);// Set COM/x Scan Direction   0x00???? 0x08??

		OLED_WrCmd(0xDA);
		OLED_WrCmd(0x02);// Set Sequential Configuration (0x00/0x10)

		OLED_WrCmd(0x81);
		OLED_WrCmd(0x8F); // Set SEG Output Current

		OLED_WrCmd(0xD9);
		OLED_WrCmd(0xF1);// Set Pre-Charge as 15 Clocks & Discharge as 1 Clock

		OLED_WrCmd(0xDB);
		OLED_WrCmd(0x40);// Set VCOM Deselect Level

		OLED_WrCmd(0xA4); // Disable Entire Display On (0x00/0x01)

		OLED_WrCmd(0xA6); // Disable Inverse Display On (0x00/0x01)

		OLED_Clear();

		OLED_WrCmd(0xAF);// Display On (0x01)
    OLED_Clear();                //????
    OLED_Set_XY(0,0); 
}
/********************************* End of Internal Command ***************************************/
   
                                   

/******************************************************************************
 ???? :OLED_Write_Char
 ???? :????
 ???? :x  SmallChars(???) -- (0 - 20)?21?
               LargeChars(???) -- (0 - 15)?16?
            y  SmallChars(???) -- (0 - 7) ? 8?
               LargeChars(???) -- (0 - 6) ? 4?  ** y???"0, 2, 4, 6" 4? **
            c  ????????
 ???? :?
 ?    ? :?
*******************************************************************************/
void OLED_Write_Char(unsigned char x,unsigned char y,unsigned char c) 
{
    unsigned char i;  	
	#ifdef XY_12864
    #if defined(SmallChar)
			// ???1 ??  ??? 
			if ((c >= 'A') && (c <= 'Z'))
			{
					c = c - 'A' + 10;
			}
			else if ((c >= 'a') && (c <= 'z')) 
			{
					c = c - 'a' + 44;
			}
			else if (c == ' ')
			{
					c = 36;
			}
			else if (c == ':')
			{
					c = 37;
			}
			else if (c == '-')
			{
					c = 38;
			}
			else if (c == '/')
			{
					c = 39;
			}
			else if(c == '.')
			{
					c = 40;
			}
			else if (c == ',')
			{
					c = 41;
			}
			else if (c == '^')
			{
					c = 42;
			}

			if (x > 126) // > 126 ????????????
			{
					x = 0;
					y ++;
			}

			OLED_Set_XY(x * 6, y);
			for (i=0; i<6; i++) 
			{
					OLED_WrDat(SmallChars[c * 6 + i]); 
			} 
    #elif defined(LargeChar)
		
			//???2 ??  ???
			if ((c >= 'A') && (c <= 'Z'))
			{
					c = c - 'A' + 10;
			}
			else if ((c >= 'a') && (c <= 'z'))
			{
					c = c - 'a' + 44;
			}
			else if (c == ' ')
			{
					c = 36;
			}
			else if (c == ':')
			{
					c = 37;
			}
			else if (c == '-')
			{
					c = 38;
			}
			else if (c == '/')
			{
					c = 39;
			}
			else if (c == '.')
			{
					c = 40;
			}
			else if (c == ',')
			{
					c = 41;
			}
			else if (c == '~')
			{
					c = 42;
			}

			if (x > 120)  // > 120 ????????????
			{
					x = 0;
					y ++;
			}
			
			OLED_Set_XY(x * 8, y);
			for (i=0; i<8; i++) 
			{
					OLED_WrDat(LargeChars[c * 16 + i]); 
			}
			OLED_Set_XY(x * 8, y+1);
			for (i=0; i<8; i++) 
			{
					OLED_WrDat(LargeChars[c * 16 + i + 8]); 
			}	      
		#endif
	#endif
			
	#ifdef XY_12832

			OLED_Set_XY(x * 4, y);
			for (i=0; i<8; i++) 
			{
					OLED_WrDat(NormalChars[i]); 
			}
			OLED_Set_XY(x * 4, y+1);
			for (i=0; i<8; i++) 
			{
					OLED_WrDat(NormalChars[i + 8]); 
			}
			OLED_Set_XY(x * 4, y+2);
			for (i=0; i<6; i++) 
			{
					OLED_WrDat(NormalChars[i + 16]); 
			}
	#endif
}

/******************************************************************************
 ???? :OLED_Write_String
 ???? :?????
 ???? :x  SmallChars(???) -- (0 - 20)?21?
               LargeChars(???) -- (0 - 15)?16?
            y  SmallChars(???) -- (0 - 7) ? 8?
               LargeChars(???) -- (0 - 6) ? 4?  ** y???"0, 2, 4, 6" 4? **
            *s ???
 ???? :?
 ?    ? :?
*******************************************************************************/   
void OLED_Write_String(unsigned char x,unsigned char y,unsigned char *s)
{
    unsigned char i;

    for (i=0; s[i]!='\0'; i++)
    {
        OLED_Write_Char(x + i, y, s[i]);
    }
} 
/******************************************************************************
 ???? :OLED_Write_Num2
 ???? :3?????
 ???? :x   SmallChars(???) -- (0 - 20)?21?
                LargeChars(???) -- (0 - 15)?16?
            y   SmallChars(???) -- (0 - 7) ? 8?
                LargeChars(???) -- (0 - 6) ? 4?  ** y???"0, 2, 4, 6" 4? **
            num xxx  3???
 ???? :?
 ?    ? :?
*******************************************************************************/
void OLED_Write_Num2(unsigned char x,unsigned char y,unsigned int num)
{
    OLED_Write_Char(x,     y, num / 10);
    OLED_Write_Char(x + 1, y, num % 10);
} 

/******************************************************************************
 ???? :OLED_Write_Num3
 ???? :3?????
 ???? :x   SmallChars(???) -- (0 - 20)?21?
                LargeChars(???) -- (0 - 15)?16?
            y   SmallChars(???) -- (0 - 7) ? 8?
                LargeChars(???) -- (0 - 6) ? 4?  ** y???"0, 2, 4, 6" 4? **
            num xxx  3???
 ???? :?
 ?    ? :?
*******************************************************************************/
void OLED_Write_Num3(unsigned char x,unsigned char y,unsigned int num)
{
    OLED_Write_Char(x,     y, num / 100);
    OLED_Write_Char(x + 1, y, num % 100 / 10);
    OLED_Write_Char(x + 2, y, num % 10);
} 

/******************************************************************************
 ???? :OLED_Write_Char
 ???? :4?????
 ???? :x   SmallChars(???) -- (0 - 20)?21?
                LargeChars(???) -- (0 - 15)?16?
            y   SmallChars(???) -- (0 - 7) ? 8?
                LargeChars(???) -- (0 - 6) ? 4?  ** y???"0, 2, 4, 6" 4? **
            num xxxx  4???
 ???? :?
 ?    ? :?
*******************************************************************************/ 
void OLED_Write_Num4(unsigned char x,unsigned char y,unsigned int num)
{
    OLED_Write_Char(x,     y, num / 1000);
    OLED_Write_Char(x + 1, y, num % 1000 / 100);
    OLED_Write_Char(x + 2, y, num % 100 / 10);
    OLED_Write_Char(x + 3, y, num % 10);
}


void OLED_Write_Num5(unsigned char x,unsigned char y,uint32_t num)
{
    OLED_Write_Char(x,     y, num / 10000);
    OLED_Write_Char(x + 1, y, num % 10000 / 1000);
    OLED_Write_Char(x + 2, y, num % 1000 / 100);
    OLED_Write_Char(x + 3, y, num % 100 / 10);
		OLED_Write_Char(x + 4, y, num % 10);
}


