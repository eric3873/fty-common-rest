/*  =========================================================================
    fty-common-rest - Provides common RestAPI tools for agents

    Copyright (C) 2014 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#pragma once

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
typedef struct _fty_common_rest_helpers_t fty_common_rest_helpers_t;
#define FTY_COMMON_REST_HELPERS_T_DEFINED
typedef struct _fty_common_rest_sasl_t fty_common_rest_sasl_t;
#define FTY_COMMON_REST_SASL_T_DEFINED
typedef struct _fty_common_rest_tokens_t fty_common_rest_tokens_t;
#define FTY_COMMON_REST_TOKENS_T_DEFINED
typedef struct _fty_common_rest_utils_web_t fty_common_rest_utils_web_t;
#define FTY_COMMON_REST_UTILS_WEB_T_DEFINED
typedef struct _fty_common_rest_audit_log_t fty_common_rest_audit_log_t;
#define FTY_COMMON_REST_AUDIT_LOG_T_DEFINED


//  Public classes, each with its own header file
#include "fty_common_rest_helpers.h"
#include "fty_common_rest_sasl.h"
#include "fty_common_rest_tokens.h"
#include "fty_common_rest_utils_web.h"
#include "fty_common_rest_audit_log.h"
