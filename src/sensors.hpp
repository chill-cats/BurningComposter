/*
    This file is part of Burning Composter - A compost monitoring device
    based on ESP32 and Arduino Core.

        Copyright (c) 2019 Le Nguyen Hoang Nhan

    Burning Composter  is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Burning Composter  is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Burning Composter.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef _SENSORS_H_
#define _SENSORS_H_

#include <DallasTemperature.h>
#include <OneWire.h>

class HumiditySensor {
public:
  HumiditySensor();
  HumiditySensor(uint8_t pin);
  float readSensorPercent();
  int getSensorsPin();
  ~HumiditySensor();

private:
  uint8_t _sensors_pin = 0;
};

#endif