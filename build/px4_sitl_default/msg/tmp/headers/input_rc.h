/****************************************************************************
 *
 *   Copyright (C) 2013-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/shubham/PX4-Autopilot/msg/input_rc.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define INPUT_RC_RC_INPUT_SOURCE_UNKNOWN 0
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_PPM 1
#define INPUT_RC_RC_INPUT_SOURCE_PX4IO_PPM 2
#define INPUT_RC_RC_INPUT_SOURCE_PX4IO_SPEKTRUM 3
#define INPUT_RC_RC_INPUT_SOURCE_PX4IO_SBUS 4
#define INPUT_RC_RC_INPUT_SOURCE_PX4IO_ST24 5
#define INPUT_RC_RC_INPUT_SOURCE_MAVLINK 6
#define INPUT_RC_RC_INPUT_SOURCE_QURT 7
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_SPEKTRUM 8
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_SBUS 9
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_ST24 10
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_SUMD 11
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_DSM 12
#define INPUT_RC_RC_INPUT_SOURCE_PX4IO_SUMD 13
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_CRSF 14
#define INPUT_RC_RC_INPUT_SOURCE_PX4FMU_GHST 15
#define INPUT_RC_RC_INPUT_MAX_CHANNELS 18
#define INPUT_RC_RSSI_MAX 100

#endif


#ifdef __cplusplus
struct __EXPORT input_rc_s {
#else
struct input_rc_s {
#endif
	uint64_t timestamp;
	uint64_t timestamp_last_signal;
	int32_t rssi;
	uint16_t rc_lost_frame_count;
	uint16_t rc_total_frame_count;
	uint16_t rc_ppm_frame_length;
	uint16_t values[18];
	uint8_t channel_count;
	bool rc_failsafe;
	bool rc_lost;
	uint8_t input_source;
	uint8_t _padding0[6]; // required for logger


#ifdef __cplusplus
	static constexpr uint8_t RC_INPUT_SOURCE_UNKNOWN = 0;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_PPM = 1;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_PPM = 2;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_SPEKTRUM = 3;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_SBUS = 4;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_ST24 = 5;
	static constexpr uint8_t RC_INPUT_SOURCE_MAVLINK = 6;
	static constexpr uint8_t RC_INPUT_SOURCE_QURT = 7;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_SPEKTRUM = 8;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_SBUS = 9;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_ST24 = 10;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_SUMD = 11;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_DSM = 12;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_SUMD = 13;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_CRSF = 14;
	static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_GHST = 15;
	static constexpr uint8_t RC_INPUT_MAX_CHANNELS = 18;
	static constexpr int8_t RSSI_MAX = 100;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(input_rc);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const input_rc_s& message);
#endif
