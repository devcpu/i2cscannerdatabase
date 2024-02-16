/*
 * Copyright (c) Johannes Arlt - Berlin, Germany
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
 * 
 * -----
 * File: i2cDatabase.h
 * Project: i2cScannerDatabase
 * Description: simple I2C scanner with device database
 * -----
 * Created Date: 2024-02-16 15:07
 * Author: Johannes G.  Arlt (devcpu)
 * -----
 * Last Modified: 2024-02-16 15:25
 * Modified By: Johannes G.  Arlt (janusz)
 */

#ifndef SRC_I2CDATABASE_H_
#define SRC_I2CDATABASE_H_

#include <Arduino.h>

String get_device(byte address) {
  switch (address) {
  case 0x00:
    return F("General Call Address");
    break;
  case 0x01:
    return F("Reserved for CBUS compatibility");
    break;
  case 0x02:
    return F("Reserved for I2C-compatible bus variants");
    break;
  case 0x03:
    return F("Reserved for future purposes");
    break;
  case 0x04:
  case 0x05:
  case 0x06:
  case 0x07:
    return F("Reserved for HS-mode controller");
    break;
  case 0x0B:
    return F("LC709203F");
    break;
  case 0x0c:
    return F("AK8975");
    break;
  case 0x0d:
    return F("AK8975");
    break;
  case 0x0e:
    return F("MAG3110 AK8975 IST-8310");
    break;
  case 0x0f:
    return F("AK8975");
    break;
  case 0x10:
    return F("VEML7700 VEML6075 VML6075 LM25066");
    break;
  case 0x11:
    return F("LC709203F SAA5243P/H LM25066 SAA5243P/K SAA5243P/E SAA5246 "
             "SAA5243P/L Si4713");
    break;
  case 0x12:
    return F("SEN-17374 PMSA003I LM25066");
    break;
  case 0x13:
    return F("VCNL40x0 SEN-17374 LM25066");
    break;
  case 0x14:
    return F("LM25066");
    break;
  case 0x15:
    return F("LM25066");
    break;
  case 0x16:
    return F("LM25066");
    break;
  case 0x17:
    return F("LM25066");
    break;
  case 0x18:
    return F("MCP9808 LIS3DH LSM303 COM-15093 47L04/47C04/47L16/47C16");
    break;
  case 0x19:
    return F("MCP9808 LIS3DH LSM303 COM-15093");
    break;
  case 0x1a:
    return F("MCP9808 47L04/47C04/47L16/47C16");
    break;
  case 0x1b:
    return F("MCP9808");
    break;
  case 0x1c:
    return F("MCP9808 MMA845x FXOS8700 47L04/47C04/47L16/47C16 SAA7706H");
    break;
  case 0x1d:
    return F("MCP9808 MMA845x ADXL345 FXOS8700");
    break;
  case 0x1e:
    return F("MCP9808 FXOS8700 HMC5883 LSM303 LSM303 47L04/47C04/47L16/47C16");
    break;
  case 0x1f:
    return F("MCP9808 FXOS8700");
    break;
  case 0x20:
    return F("PCF8575 TCA9554 PCA6408A Chirp! XD8574A FXAS21002 MA12070P "
             "HW-061 MCP23017 MCP23008");
    break;
  case 0x21:
    return F("PCF8575 TCA9554 PCA6408A SAA4700 XD8574A FXAS21002 MA12070P "
             "HW-061 MCP23017 MCP23008");
    break;
  case 0x22:
    return F(
        "PCF8575 TCA9554 XD8574A MA12070P PCA1070 HW-061 MCP23017 MCP23008");
    break;
  case 0x23:
    return F("PCF8575 TCA9554 BH1750FVI SAA4700 XD8574A MA12070P HW-061 "
             "MCP23017 MCP23008");
    break;
  case 0x24:
    return F(
        "PCD3311C PCF8575 TCA9554 XD8574A PCD3312C HW-061 MCP23017 MCP23008");
    break;
  case 0x25:
    return F(
        "MCP23008 MCP23017 PCD3311C PCD3312C TCA9554 HW-061 XD8574A PCF8575");
    break;
  case 0x26:
    return F("MCP23008 MCP23017 TCA9554 HW-061 XD8574A PCF8575");
    break;
  case 0x27:
    return F("MCP23008 MCP23017 HIH6130 TCA9554 HW-061 XD8574A PCF8575");
    break;
  case 0x28:
    return F("FS3000 PM2008 DS3502 CAP1188 DS1881 MCP4532 DS1841 BNO055");
    break;
  case 0x29:
    return F("VL6180X VL53L0x TSL2591 TCS34725 DS3502 CAP1188 DS1881 MCP4532 "
             "DS1841 BNO055");
    break;
  case 0x2a:
    return F("CAP1188 DS1841 DS3502 DS1881 MCP4532");
    break;
  case 0x2b:
    return F("CAP1188 DS1841 DS3502 DS1881 MCP4532");
    break;
  case 0x2c:
    return F("CAP1188 AD5248 AD5251 AD5252 CAT5171 DS1881 MCP4532");
    break;
  case 0x2d:
    return F("AD5248 ST25DV16K CAP1188 DS1881 MCP4532 AD5252 CAT5171 AD5251");
    break;
  case 0x2e:
    return F("AD5248 AD5251 AD5252 LPS22HB DS1881 MCP4532");
    break;
  case 0x2f:
    return F("AD5248 AD5243 AD5251 AD5252 DS1881 MCP4532");
    break;
  case 0x30:
    return F("SAA2502");
    break;
  case 0x31:
    return F("SAA2502");
    break;
  case 0x33:
    return F("MLX90640");
    break;
  case 0x36:
    return F("MAX17048 MAX17048");
    break;
  case 0x38:
    return F("FT6x06 SAA1064 VEML6070 AHT10 AHT20 BMA150 SEN-15892 PCF8574AP");
    break;
  case 0x39:
    return F("TSL2561 APDS-9960 VEML6070 SAA1064 PCF8574AP");
    break;
  case 0x3a:
    return F("PCF8577C SAA1064 PCF8574AP MLX90632");
    break;
  case 0x3b:
    return F("SAA1064 PCF8569 PCF8574AP");
    break;
  case 0x3c:
    return F("SSD1305 SSD1306 PCF8578 SH1106 PCF8569 PCF8574AP");
    break;
  case 0x3d:
    return F("SSD1305 SSD1306 PCF8578 SH1106 PCF8574AP");
    break;
  case 0x3e:
    return F("PCF8574AP BU9796");
    break;
  case 0x3f:
    return F("PCF8574AP");
    break;
  case 0x40:
    return F(
        "Si7021 HTU21D-F TMP007 TMP006 PCA9685 INA219 TEA6330 TEA6300 TDA9860 "
        "TEA6320 TDA8421 NE5751 INA260 PCF8574 HDC1080 LM25066 HTU31D");
    break;
  case 0x41:
    return F(
        "TMP007 TMP006 PCA9685 INA219 STMPE610 STMPE811 TDA8426 TDA9860 "
        "TDA8424 TDA8421 TDA8425 NE5751 INA260 PCF8574 LM25066 PCA9536 HTU31D");
    break;
  case 0x42:
    return F("HDC1008 PCA9685 TMP006 PCF8574 TDA8415 TDA8417 LM25066 INA260 "
             "INA219 TMP007");
    break;
  case 0x43:
    return F("HDC1008 PCA9685 TMP006 PCF8574 LM25066 INA260 INA219 TMP007");
    break;
  case 0x44:
    return F("TMP007 TMP006 PCA9685 INA219 STMPE610 SHT31 ISL29125 STMPE811 "
             "TDA4688 TDA4672 TDA4780 TDA4670 TDA8442 TDA4687 TDA4671 TDA4680 "
             "INA260 PCF8574 LM25066");
    break;
  case 0x45:
    return F("PCA9685 TDA8376 TMP006 PCF8574 TDA7433 LM25066 INA260 INA219 "
             "TMP007 SHT31");
    break;
  case 0x46:
    return F(
        "PCA9685 TDA9150 TMP006 PCF8574 TDA8370 LM25066 INA260 INA219 TMP007");
    break;
  case 0x47:
    return F("PCA9685 TMP006 PCF8574 LM25066 INA260 INA219 TMP007");
    break;
  case 0x48:
    return F("PCA9685 ADS1015 PCF8574 TMP102 PN532 ADS1115 LM75b INA260 INA219 "
             "ADS7828");
    break;
  case 0x49:
    return F("AS7262 PCA9685 ADS1015 PCF8574 TSL2561 TMP102 ADS1115 LM75b "
             "INA260 INA219 ADS7828");
    break;
  case 0x4a:
    return F("CS43L22 PCA9685 ADS1015 PCF8574 TMP102 ADS1115 LM75b INA260 "
             "INA219 ADS7828 MAX44009");
    break;
  case 0x4b:
    return F("PCA9685 ADS1015 PCF8574 TMP102 ADS1115 LM75b INA260 INA219 "
             "ADS7828 MAX44009");
    break;
  case 0x4c:
    return F("PCA9685 INA219 INA260 PCF8574 LM75b EMC2101");
    break;
  case 0x4d:
    return F("PCA9685 INA219 INA260 PCF8574 LM75b");
    break;
  case 0x4e:
    return F("PCA9685 INA219 INA260 PCF8574 LM75b");
    break;
  case 0x4f:
    return F("PCA9685 INA219 INA260 PCF8574 LM75b");
    break;
  case 0x50:
    return F("PCA9685 AT24C02N FS1015 CAT24C512 47L04/47C04/47L16/47C16 MB85RC "
             "LM25066 AT24C64");
    break;
  case 0x51:
    return F(
        "PCA9685 MB85RC CAT24C512 VCNL4200 LM25066 PCF8563 AT24C64 AT24C02N");
    break;
  case 0x52:
    return F("PCA9685 Nunchuck controller AT24C02N CAT24C512 SI1133 APDS-9250 "
             "47L04/47C04/47L16/47C16 MB85RC LM25066 AT24C64");
    break;
  case 0x53:
    return F(
        "ADXL345 PCA9685 MB85RC CAT24C512 LM25066 AT24C64 ST25DV16K AT24C02N");
    break;
  case 0x54:
    return F("PCA9685 MB85RC CAT24C512 LM25066 47L04/47C04/47L16/47C16 AT24C64 "
             "AT24C02N");
    break;
  case 0x55:
    return F("PCA9685 AT24C02N D7S CAT24C512 SI1133 MB85RC LM25066 MAX30101 "
             "AT24C64");
    break;
  case 0x56:
    return F("PCA9685 MB85RC CAT24C512 LM25066 47L04/47C04/47L16/47C16 AT24C64 "
             "AT24C02N");
    break;
  case 0x57:
    return F(
        "PCA9685 MB85RC MAX3010x CAT24C512 LM25066 AT24C64 ST25DV16K AT24C02N");
    break;
  case 0x58:
    return F("PCA9685 TPA2016 SGP30 LM25066");
    break;
  case 0x59:
    return F("PCA9685 LM25066 SGP40");
    break;
  case 0x5a:
    return F("PCA9685 MLX90614 MPR121 LM25066 DRV2605 CCS811 CCS811");
    break;
  case 0x5b:
    return F("PCA9685 CCS811 MPR121 CCS811");
    break;
  case 0x5c:
    return F("PCA9685 AM2315 MPR121 BH1750FVI");
    break;
  case 0x5d:
    return F("PCA9685 MPR121 SFA30");
    break;
  case 0x5e:
    return F("PCA9685");
    break;
  case 0x5f:
    return F("PCA9685 HTS221");
    break;
  case 0x60:
    return F(
        "PCA9685 MPL115A2 MPL3115A2 Si5351A Si1145 MCP4725A0 TEA5767 TSA5511 "
        "SAB3037 SAB3035 MCP4725A1 ATECC508A ATECC608A SI1132 MCP4728");
    break;
  case 0x61:
    return F("PCA9685 Si5351A TEA6100 TSA5511 SCD30 MCP4728 SAB3037 SAB3035 "
             "MCP4725A1 MCP4725A0");
    break;
  case 0x62:
    return F("PCA9685 SCD40 SCD41 SCD40-D-R2 TSA5511 MCP4728 SAB3037 SAB3035 "
             "MCP4725A1 UMA1014T");
    break;
  case 0x63:
    return F(
        "PCA9685 TSA5511 MCP4728 SAB3037 SAB3035 MCP4725A1 Si4713 UMA1014T");
    break;
  case 0x64:
    return F("PCA9685 MCP4725A2 MCP4725A1 MCP4728");
    break;
  case 0x65:
    return F("PCA9685 MCP4725A2 MCP4725A1 MCP4728");
    break;
  case 0x66:
    return F("PCA9685 MCP4725A3 IS31FL3731 MCP4725A1 MCP4728 LTC4151");
    break;
  case 0x67:
    return F("PCA9685 MCP4725A3 MCP4725A1 MCP4728 LTC4151");
    break;
  case 0x68:
    return F("PCA9685 AMG8833 DS1307 PCF8523 DS3231 MPU-9250 ITG3200 PCF8573 "
             "MPU6050 ICM-20948 WITTY PI 3 MCP3422 DS1371 MPU-9250 LTC4151");
    break;
  case 0x69:
    return F("LTC4151 AMG8833 PCA9685 WITTY PI 3 ITG3200 MPU-9250 SPS30 "
             "ICM-20948 MPU6050 MAX31341 PCF8573");
    break;
  case 0x6a:
    return F("PCA9685 L3GD20H PCF8573 LTC4151");
    break;
  case 0x6b:
    return F("PCA9685 L3GD20H PCF8573 LTC4151");
    break;
  case 0x6c:
    return F("PCA9685 LTC4151");
    break;
  case 0x6d:
    return F("PCA9685 LTC4151");
    break;
  case 0x6e:
    return F("PCA9685 LTC4151");
    break;
  case 0x6f:
    return F("PCA9685 MCP7940N LTC4151");
    break;
  case 0x70:
    return F("PCA9685 XD8574 TCA9548A PCA9541 HT16K33 SHTC3 TCA9548");
    break;
  case 0x71:
    return F("PCA9685 TCA9548 HT16K33 PCA9541 TCA9548A XD8574");
    break;
  case 0x72:
    return F("PCA9685 TCA9548 HT16K33 PCA9541 TCA9548A XD8574");
    break;
  case 0x73:
    return F("PCA9685 TCA9548 HT16K33 PCA9541 TCA9548A XD8574");
    break;
  case 0x74:
    return F("PCA9685 TCA9548 HT16K33 PCA9541 TCA9548A XD8574 PCA9539");
    break;
  case 0x75:
    return F("PCA9685 TCA9548 HT16K33 PCA9541 TCA9548A XD8574 PCA9539");
    break;
  case 0x76:
    return F("MS5611 SPL06-007 PCA9539 PCA9685 XD8574 MS5607 TCA9548A PCA9541 "
             "BMP280 BME688 HT16K33 TCA9548 BME280 BME680");
    break;
  case 0x77:
    return F("PCA9685 TCA9548 HT16K33 IS31FL3731 BME280 BMP280 MS5607 BMP180 "
             "BMP085 BMA180 MS5611 BME680 BME688 PCA9541 SPL06-007 TCA9548A "
             "XD8574 PCA9539");
    break;
  default:
    return F("Unknown device, please check the I2C database at "
             "https://i2cdevices.org/addresses\nand update the code\n");
  }
}



#endif// SRC_I2CDATABASE_H_
