/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2019 Mauro Condarelli <mc5686@mclink.it>
 */

#ifndef __XIAOMI4C_CONFIG_H__
#define __XIAOMI4C_CONFIG_H__

/* RAM */
#define CFG_SYS_SDRAM_BASE		0x80000000

#define CFG_SYS_INIT_SP_OFFSET	0x400000

/* Dummy value */
#define CFG_SYS_UBOOT_BASE		0

/* Serial SPL */
#if defined(CONFIG_SPL_BUILD) && defined(CONFIG_SPL_SERIAL)
#define CFG_SYS_NS16550_CLK		40000000
#define CFG_SYS_NS16550_COM1		0xb0000c00
#endif


/* RAM */

/* Environment settings */

#endif //__XIAOMI4C_CONFIG_H__
