/* -*- C -*- */
/*
 * Copyright (c) 2017-2020 Seagate Technology LLC and/or its Affiliates
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * For any questions about this software or licensing,
 * please email opensource@seagate.com or cortx-questions@seagate.com.
 *
 */


#pragma once

#ifndef __MOTR_LIB_PROTOCOL_H__
#define __MOTR_LIB_PROTOCOL_H__

/**
 * @defgroup protocol Protocol
 *
 * @{
 */

#include "lib/types.h"
#include "xcode/xcode_attr.h"

/**
 * Protocol version id string which has to coincide on the sides using protocol
 */
struct m0_protocol_id {
	uint8_t p_id[64];
} M0_XCA_RECORD M0_XCA_DOMAIN(rpc);

/** @} end of protocol group */
#endif /* __MOTR_LIB_PROTOCOL_H__ */

/*
 *  Local variables:
 *  c-indentation-style: "K&R"
 *  c-basic-offset: 8
 *  tab-width: 8
 *  fill-column: 80
 *  scroll-step: 1
 *  End:
 */
/*
 * vim: tabstop=8 shiftwidth=8 noexpandtab textwidth=80 nowrap
 */
