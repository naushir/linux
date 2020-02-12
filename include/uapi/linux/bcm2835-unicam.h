/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * bcm2835-unicam.h
 *
 * BCM2835 Unicam driver - user space header file.
 *
 * Copyright (C) 2020 - Raspberry Pi (Trading) Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __BCM2835_UNICAM_H_
#define __BCM2835_UNICAM_H_

#include <linux/v4l2-controls.h>

#define V4L2_CID_USER_UNICAM_STAGGERED_WRITE		\
				(V4L2_CID_USER_BCM2835_UNICAM_BASE + 0x01)
#define V4L2_CID_USER_UNICAM_GROUP_HOLD			\
				(V4L2_CID_USER_BCM2835_UNICAM_BASE + 0x02)
#define V4L2_CID_USER_UNICAM_EXPOSURE_DELAY		\
				(V4L2_CID_USER_BCM2835_UNICAM_BASE + 0x03)
#define V4L2_CID_USER_UNICAM_GAIN_DELAY			\
				(V4L2_CID_USER_BCM2835_UNICAM_BASE + 0x04)

#endif /* __BCM2835_UNICAM_H_ */
