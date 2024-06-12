/****************************************************************************
 *
 *   Copyright (c) 2017 PX4 Development Team. All rights reserved.
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

/**
 * @file precland_params.c
 *
 * Parameters for precision landing.
 *
 * @author Nicolas de Palezieux (Sunflower Labs) <ndepal@gmail.com>
 */

/**
 * Landing Target Timeout
 *
 * Time after which the landing target is considered lost without any new measurements.
 *
 * @unit s
 * @min 0.0
 * @max 50
 * @decimal 1
 * @increment 0.5
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_BTOUT, 5.0f);

/**
 * Horizontal acceptance radius
 *
 * Start descending if closer above landing target than this.
 *
 * @unit m
 * @min 0.0
 * @max 10
 * @decimal 2
 * @increment 0.1
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_HACC_RAD, 0.2f);

/**
 * Final approach altitude
 *
 * Allow final approach (without horizontal positioning) if losing landing target closer than this to the ground.
 *
 * @unit m
 * @min 0.0
 * @max 10
 * @decimal 2
 * @increment 0.1
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_FAPPR_ALT, 0.1f);

/**
 * Search altitude
 *
 * Altitude above home to which to climb when searching for the landing target.
 *
 * @unit m
 * @min 0.0
 * @max 100
 * @decimal 1
 * @increment 0.1
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_SRCH_ALT, 10.0f);

/**
 * Search timeout
 *
 * Time allowed to search for the landing target before falling back to normal landing.
 *
 * @unit s
 * @min 0.0
 * @max 100
 * @decimal 1
 * @increment 0.1
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_SRCH_TOUT, 10.0f);

/**
 * Maximum number of search attempts
 *
 * Maximum number of times to search for the landing target if it is lost during the precision landing.
 *
 * @min 0
 * @max 100
 * @group Precision Land
 */
PARAM_DEFINE_INT32(PLD_MAX_SRCH, 3);

/**
 * safety landing latitude
 *
 * Latitude of safety landing area.
 *
 * @unit deg*1e7
 * @min -1800000000
 * @max 1800000000
 * @group Precision Land
 */
PARAM_DEFINE_INT32(PLD_LAT, 0);

/**
 * safety landing longitude
 *
 * Longitude of safety landing area.
 *
 * @unit deg*1e7
 * @min -1800000000
 * @max 1800000000
 * @group Precision Land
 */
PARAM_DEFINE_INT32(PLD_LON, 0);

/**
 * fence area
 *
 * Number of fence area.
 *
 * @unit m
 * @min 0.0
 * @max 100
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_RANGE, 100.0f);

/**
 * X offset landing
 *
 * X offset landing.
 *
 * @unit m
 * @min 0.0
 * @max 100
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_OFFSET_X, 0f);

/**
 * X offset landing
 *
 * X offset landing.
 *
 * @unit m
 * @min 0.0
 * @max 100
 * @group Precision Land
 */
PARAM_DEFINE_FLOAT(PLD_OFFSET_Y, 0f);

/**
 * mode safety landing
 *
 * mode safety landing area.
 *
 * @value 0 disable.
 * @value 1 offset mode
 * @value 2 safety area
 * @group Precision Land
 */
PARAM_DEFINE_INT32(PLD_MODE, 0);



