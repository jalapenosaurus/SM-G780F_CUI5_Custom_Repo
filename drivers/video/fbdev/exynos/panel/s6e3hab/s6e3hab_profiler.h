/*
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HAB_PROFILER_H__
#define __S6E3HAB_PROFILER_H__

#include "../panel.h"

void hab_profile_win_update(struct maptbl *tbl, u8 *dst);
void hab_profile_display_fps(struct maptbl *tbl, u8 *dst);
void hab_profile_set_color(struct maptbl *tbl, u8 *dst);
void hab_profile_circle(struct maptbl *tbl, u8 *dst);
void hab_profile_fps_mask_pos(struct maptbl *tbl, u8 *dst);
void hab_profile_fps_mask_color(struct maptbl *tbl, u8 *dst);
#endif //__S6E3HA9_PROFILER_H__
