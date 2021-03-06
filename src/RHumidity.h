/*
 * Copyright (C) 2016 STMicroelectronics
 * Author: Lorenzo Bianconi - <lorenzo.bianconi@st.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ST_RHUMIDITY_SENSOR_H
#define ST_RHUMIDITY_SENSOR_H

#include "HWSensorBase.h"

/*
 * class RHumidity
 */
class RHumidity : public HWSensorBaseWithPollrate {
public:
	RHumidity(HWSensorBaseCommonData *data, const char *name,
		  struct device_iio_sampling_freqs *sfa, int handle,
		  unsigned int hw_fifo_len, float power_consumption,
		  bool wakeup);
	~RHumidity() {};

	virtual void ProcessData(SensorBaseData *data);
};

#endif /* ST_RHUMIDITY_SENSOR_H */
