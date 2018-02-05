/*
 * UART_INT.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: ascom
 */

#ifndef UART_INT_H_
#define UART_INT_H_



void Uart_init(long BaudRate);


void UART_send_byte( char byte);
void UART_send_string( char *ptr);

#endif /* UART_INT_H_ */
