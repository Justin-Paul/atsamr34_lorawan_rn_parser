/**
* \file  parser_private.h
*
* \brief Parser private header file
*		
*
* Copyright (c) 2018 Microchip Technology Inc. and its subsidiaries. 
*
* \asf_license_start
*
* \page License
*
* Subject to your compliance with these terms, you may use Microchip
* software and any derivatives exclusively with Microchip products. 
* It is your responsibility to comply with third party license terms applicable 
* to your use of third party software (including open source software) that 
* may accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, 
* WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, 
* INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, 
* AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE 
* LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL 
* LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE 
* SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE 
* POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT 
* ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY 
* RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, 
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*
* \asf_license_stop
*
*/
 
#ifndef _PARSER_PRIVATE_H
#define _PARSER_PRIVATE_H


#include <stdint.h>
#include <stdbool.h>

enum
{
    OK_STATUS_IDX = 0x00U,
    INVALID_PARAM_IDX,
    ERR_STATUS_IDX,
    BUSY_STATUS_IDX,
	INVALID_REQ_IDX,
};

enum
{
    OFF_IDX = 0x00U,
    ON_IDX
};

enum
{
    STATUS_ERROR = 0xFFU,
    STATUS_DONE = 0x00U
};

enum
{
    REPLY_OK_STATUS = 0x00U,
    REPLY_ERR_STATUS,
    REPLY_EXIT_STATUS,
    REPLY_CMD_STATUS,
    REPLY_DO_NOT_REPLY
};

#define PARSER_END_LINE_DELIM_STRING "\r\n"

typedef struct parserCmdInfo_tag
{
    char* pParam1;
    char* pParam2;
    char* pParam3;
	char* pParam4;
	char* pParam5;
    char* pReplyCmd;
}parserCmdInfo_t;


#endif /* _PARSER_PRIVATE_H */