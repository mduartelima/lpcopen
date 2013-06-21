/*
 * @brief Pointer cursor 64x64 pixels
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2012
 * All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * LPC products.  This software is supplied "AS IS" without any warranties of
 * any kind, and NXP Semiconductors and its licensor disclaim any and
 * all warranties, express or implied, including all implied warranties of
 * merchantability, fitness for a particular purpose and non-infringement of
 * intellectual property rights.  NXP Semiconductors assumes no responsibility
 * or liability for the use of the software, conveys no license or rights under any
 * patent, copyright, mask work right, or any other intellectual property rights in
 * or to any products. NXP Semiconductors reserves the right to make changes
 * in the software without notification. NXP Semiconductors also makes no
 * representation or warranty that such application will be suitable for the
 * specified use without further testing or modification.
 *
 * @par
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, under NXP Semiconductors' and its
 * licensor's relevant copyrights in the software, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#include "Cursor.h"

/** @ingroup EXAMPLES_PERIPH_18XX43XX_LCD
 * @{
 */

/*****************************************************************************
 * Private types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Public types/enumerations/variables
 ****************************************************************************/

/* 'Pointer' cursor image data */
#ifdef __IAR_SYSTEMS_ICC__
#pragma data_alignment=4
const unsigned char Cursor[(CURSOR_H_SIZE / 4) * CURSOR_V_SIZE] =
#else
const unsigned char __attribute__ ((aligned(4))) Cursor[(CURSOR_H_SIZE / 4) * CURSOR_V_SIZE] =
#endif
{
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xFA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFE, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFE, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFE, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFE, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFF, 0xEA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFF, 0xFF, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFF, 0xFF, 0xFA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFF, 0xFF, 0xFE, 0xAA, 0xAA,
	0xAA, 0xAB, 0xFB, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAB, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAB, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAA, 0xFF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAA, 0xBF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAA, 0xBF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAF, 0xFF, 0xFF, 0xFF, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAF, 0xFF, 0xFF, 0xFE, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFF, 0xFF, 0xFE, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAB, 0xFF, 0xFF, 0xFE, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xFF, 0xFF, 0xFA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xFF, 0xFF, 0xFA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xFF, 0xFF, 0xFA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
	0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA
};

/*****************************************************************************
 * Private functions
 ****************************************************************************/

/*****************************************************************************
 * Public functions
 ****************************************************************************/

/**
 * @}
 */
