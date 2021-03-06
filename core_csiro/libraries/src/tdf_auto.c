/*
 * Copyright (c) 2020, Commonwealth Scientific and Industrial Research
 * Organisation (CSIRO) ABN 41 687 119 230.
 * All rights reserved.
 * 
 * Auto generated by tdftool
 * 
 *  DO NOT EDIT
 */

/* Includes -------------------------------------------------*/

#include "tdf_auto.h"

/* Private Defines ------------------------------------------*/
/* Type Definitions -----------------------------------------*/
/* Function Declarations ------------------------------------*/
/* External Variables ---------------------------------------*/
// clang-format off

const uint8_t pucTdfStructLengths[477] = {
    [TDF_BATTERY_VOLTAGE                    ] = 2,
    [TDF_BATTERY_CURRENT                    ] = 2,
    [TDF_SOLAR_VOLTAGE                      ] = 2,
    [TDF_SOLAR_CURRENT                      ] = 2,
    [TDF_CUMULATIVE_SOLAR_CURRENT           ] = 2,
    [TDF_ONBOARD_TEMP                       ] = 2,
    [TDF_RAW_ADC                            ] = 2,
    [TDF_RAW_ADC_N                          ] = 7,
    [TDF_DATETIME_MS                        ] = 6,
    [TDF_DATETIME                           ] = 4,
    [TDF_LOCATION_XYZ                       ] = 12,
    [TDF_LOCATION_XY32                      ] = 8,
    [TDF_LOCATION_XY16                      ] = 4,
    [TDF_APP_VERSION                        ] = 2,
    [TDF_BOOTLOADER_VERSION                 ] = 2,
    [TDF_RESET_COUNT                        ] = 1,
    [TDF_REASON_FOR_LAST_RESET              ] = 1,
    [TDF_MAC_RX_COUNT                       ] = 2,
    [TDF_MAC_TX_COUNT                       ] = 2,
    [TDF_MAC_RX_DROP_COUNT                  ] = 2,
    [TDF_MAC_TX_ERR_COUNT                   ] = 2,
    [TDF_MAC_TX_DELAY_MEAN                  ] = 2,
    [TDF_MAC_TX_DELAY_MAX                   ] = 2,
    [TDF_MAC_TIMEOUT_COUNT                  ] = 2,
    [TDF_MAC_ACK_TIMEOUT_COUNT              ] = 2,
    [TDF_MAC_ACK_ERR_COUNT                  ] = 2,
    [TDF_NW_TX_QFULL_COUNT                  ] = 2,
    [TDF_NW_RX_QFULL_COUNT                  ] = 2,
    [TDF_NW_WORK_QFULL_COUNT                ] = 2,
    [TDF_NW_RETRY_COUNT                     ] = 2,
    [TDF_NW_TX_DROP_COUNT                   ] = 2,
    [TDF_NW_SYNC_LOST_COUNT                 ] = 2,
    [TDF_NW_PKT_FORWARD_COUNT               ] = 2,
    [TDF_NW_NODEID                          ] = 2,
    [TDF_NW_STATS1                          ] = 2,
    [TDF_NW_STATS2                          ] = 2,
    [TDF_NW_STATS3                          ] = 2,
    [TDF_NW_BIGSEQ                          ] = 4,
    [TDF_NW_ACKSENDS                        ] = 2,
    [TDF_NW_TXQUAL                          ] = 1,
    [TDF_NW_RXQUAL                          ] = 1,
    [TDF_NW_HOPCOUNT                        ] = 1,
    [TDF_NW_NEXTHOP                         ] = 2,
    [TDF_NW_TRACEROUTE                      ] = 11,
    [TDF_CALIBRATION_DATA                   ] = 1,
    [TDF_MOISTURE_ECHO_1                    ] = 2,
    [TDF_MOISTURE_ECHO_N                    ] = 11,
    [TDF_ACC_XYZ                            ] = 6,
    [TDF_MAG_XYZ                            ] = 6,
    [TDF_GYRO_XYZ                           ] = 6,
    [TDF_WATER_PH                           ] = 2,
    [TDF_WATER_REDOX                        ] = 2,
    [TDF_WATER_DO                           ] = 2,
    [TDF_WATER_TEMP                         ] = 2,
    [TDF_WATER_EC                           ] = 2,
    [TDF_WATER_TURBIDITY                    ] = 2,
    [TDF_WATER_FLOW_RATE                    ] = 2,
    [TDF_WATER_TOTAL_VOLUME                 ] = 4,
    [TDF_WATER_PRESSURE                     ] = 2,
    [TDF_WATER_DEPTH                        ] = 2,
    [TDF_AD595_TEMP                         ] = 2,
    [TDF_DS1626_TEMP                        ] = 2,
    [TDF_DS1626_TEMP_N                      ] = 7,
    [TDF_AIR_TEMP                           ] = 2,
    [TDF_AIR_HUMIDITY                       ] = 2,
    [TDF_WIND_SPEED                         ] = 2,
    [TDF_WIND_DIRECTION                     ] = 2,
    [TDF_RAINFALL                           ] = 2,
    [TDF_LEAF_WETNESS                       ] = 2,
    [TDF_LIGHT_INTENSITY_PAR                ] = 2,
    [TDF_MULTI_SPECTRAL_ARRAY               ] = 16,
    [TDF_PIR_COUNT                          ] = 2,
    [TDF_PACKET_ID                          ] = 4,
    [TDF_GPS_LAT_LONG                       ] = 8,
    [TDF_GPS_NORTHING_EASTING               ] = 8,
    [TDF_GPS_HEIGHT_ABOVE_ELLIPSOID         ] = 2,
    [TDF_GPS_TIME_OF_WEEK                   ] = 4,
    [TDF_GPS_WEEK                           ] = 2,
    [TDF_GPS_NUM_SATELLITES                 ] = 1,
    [TDF_GPS_HORZ_ACCURACY                  ] = 2,
    [TDF_GPS_VERT_ACCURACY                  ] = 2,
    [TDF_GPS_DOP                            ] = 2,
    [TDF_GPS_SIGNAL_STRENGTH                ] = 2,
    [TDF_GPS_SIGNAL_QUALITY                 ] = 2,
    [TDF_GPS_HMSL                           ] = 2,
    [TDF_LOAD_CELL                          ] = 2,
    [TDF_TAG_READER                         ] = 7,
    [TDF_ZAP_DURATION                       ] = 2,
    [TDF_ZAP_INTENSITY                      ] = 2,
    [TDF_ZAP_COUNT                          ] = 2,
    [TDF_AUDIO_COUNT                        ] = 2,
    [TDF_FENCE_LINE                         ] = 8,
    [TDF_VF_FLAGS                           ] = 1,
    [TDF_FLOOR_NUM                          ] = 1,
    [TDF_PEDOMETRY_COUNT                    ] = 2,
    [TDF_DATA_TRANSFER                      ] = 13,
    [TDF_IR_RANGE                           ] = 6,
    [TDF_TEMP_STRING                        ] = 12,
    [TDF_BEACON                             ] = 1,
    [TDF_SOLAR_CHARGE                       ] = 1,
    [TDF_POWER_SENSORHUB_UPS_SOURCE         ] = 1,
    [TDF_POWER_SENSORHUB_UPS_BATTERY_VOLTS  ] = 2,
    [TDF_SENSORHUB_NUM_CMD                  ] = 2,
    [TDF_SENSORHUB_NUM_MUTEX_FAIL           ] = 2,
    [TDF_SENSORHUB_NUM_SERIAL_RETRY         ] = 2,
    [TDF_SENSORHUB_NUM_SERIAL_FAIL          ] = 2,
    [TDF_SENSORHUB_NUM_RPC_FAIL             ] = 2,
    [TDF_TEMP_SENSIRION_SHT15               ] = 2,
    [TDF_TEMP_ROTRONIC_HYGROCLIP2           ] = 4,
    [TDF_TEMP_KFS140_CUSTOM                 ] = 2,
    [TDF_TEMP_MAXIM_IBUTTON                 ] = 2,
    [TDF_HUMID_SENSIRION_SHT15              ] = 2,
    [TDF_HUMID_ROTRONIC_HYGROCLIP2          ] = 4,
    [TDF_HUMID_KFS140_CUSTOM                ] = 2,
    [TDF_HUMID_MAXIM_IBUTTON                ] = 2,
    [TDF_SOIL_DECAGON_EC5                   ] = 4,
    [TDF_SOIL_DECAGON_EC20                  ] = 4,
    [TDF_SOIL_DECAGON_10HS                  ] = 4,
    [TDF_SOIL_DECAGON_MPS1                  ] = 4,
    [TDF_SOIL_DECAGON_ECTM                  ] = 6,
    [TDF_SOIL_DECAGON_5TE                   ] = 6,
    [TDF_LIGHT_APOGEE_SQ110                 ] = 4,
    [TDF_LIGHT_APOGEE_SP110                 ] = 4,
    [TDF_LIGHT_MIDDLETON_SK01DP2            ] = 4,
    [TDF_LIGHT_MIDDLETON_SK08               ] = 4,
    [TDF_LEAFWET_DECAGON_LWS                ] = 4,
    [TDF_WIND_DIRECTION_METONE_034B         ] = 4,
    [TDF_WIND_SPEED_METONE_034B             ] = 4,
    [TDF_WIND_DIRECTION_VAISALA_WXT520      ] = 12,
    [TDF_WIND_SPEED_VAISALA_WXT520          ] = 12,
    [TDF_PTU_VAISALA_WXT520                 ] = 12,
    [TDF_RAIN_VAISALA_WXT520                ] = 12,
    [TDF_HAIL_VAISALA_WXT520                ] = 12,
    [TDF_LPL_SLEEP_STATS                    ] = 8,
    [TDF_WIND_DIRECTION_METONE_034B_V2      ] = 12,
    [TDF_WIND_SPEED_METONE_034B_V2          ] = 12,
    [TDF_PRECIP_RESET_VAISALA_WXT520        ] = 1,
    [TDF_SOIL_MOISTURE_SPADE                ] = 4,
    [TDF_SOIL_TEMP_SPADE                    ] = 4,
    [TDF_NETWORK_AT86RF212_STATS            ] = 32,
    [TDF_NETWORK_XMAC_STATS                 ] = 64,
    [TDF_NETWORK_DISPATCHER_STATS           ] = 26,
    [TDF_NETWORK_FLOODING_STATS             ] = 22,
    [TDF_NETWORK_CTP_STATS                  ] = 27,
    [TDF_NETWORK_CTP_STATE                  ] = 65,
    [TDF_TEMP_MICROCHIP_MCP9800             ] = 4,
    [TDF_POWER_SOURCE                       ] = 2,
    [TDF_BATTERY_VOLTAGE_UPS                ] = 2,
    [TDF_BATTERY_CHARGE_STATUS              ] = 2,
    [TDF_SYSTEM_INFO                        ] = 52,
    [TDF_SYSTEM_APP_NAME                    ] = 16,
    [TDF_SYSTEM_APP_VERSION                 ] = 2,
    [TDF_SOIL_DECAGON_5TE_V2                ] = 12,
    [TDF_TEMP_HUMID_SENSIRION_SHT15         ] = 12,
    [TDF_TEMP_HUMID_SENSIRION_SHT15_HIGH    ] = 12,
    [TDF_TEMP_APOGEE_ST100                  ] = 4,
    [TDF_TEMP_APOGEE_ST100_HIGH             ] = 4,
    [TDF_TEMP_APOGEE_ST100_GROUND           ] = 4,
    [TDF_TEMP_APOGEE_ST100_SOIL             ] = 4,
    [TDF_DENDROMETER_ICT_DR26               ] = 8,
    [TDF_DENDROMETER_ICT_DR26_2             ] = 8,
    [TDF_DENDROMETER_ICT_DR26_3             ] = 8,
    [TDF_DENDROMETER_ICT_DR26_4             ] = 8,
    [TDF_DENDROMETER_ICT_DR26_5             ] = 8,
    [TDF_DENDROMETER_ICT_DR26_6             ] = 8,
    [TDF_TENSIOMETER_ICT_GT3_15             ] = 4,
    [TDF_TEMP_VAISALA_HMP60                 ] = 4,
    [TDF_HUMID_VAISALA_HMP60                ] = 4,
    [TDF_CO2_DYNAMENT_1000PPM               ] = 4,
    [TDF_CO2_DYNAMENT_1000PPM_HIGH          ] = 4,
    [TDF_LEAFWET_DECAGON_LWS_5V             ] = 4,
    [TDF_LEAFWET_DECAGON_LWS_5V_HIGH        ] = 4,
    [TDF_LEAFWET_DECAGON_LWS_5V_GROUND      ] = 4,
    [TDF_LIGHT_APOGEE_SQ110_HIGH            ] = 4,
    [TDF_LIGHT_APOGEE_SP110_HIGH            ] = 4,
    [TDF_FOG_OPTICAL_MINIOFS                ] = 4,
    [TDF_FOG_OPTICAL_MINIOFS_HIGH           ] = 4,
    [TDF_CLOUD_OPTICAL_PCCD                 ] = 4,
    [TDF_WIND_DIRECTION_VAISALA_WXT520_HIGH ] = 12,
    [TDF_WIND_SPEED_VAISALA_WXT520_HIGH     ] = 12,
    [TDF_PTU_VAISALA_WXT520_HIGH            ] = 12,
    [TDF_RAIN_VAISALA_WXT520_HIGH           ] = 12,
    [TDF_HAIL_VAISALA_WXT520_HIGH           ] = 12,
    [TDF_CO2_VAISALA_GMP343                 ] = 4,
    [TDF_RAIN_ICT_SSRG1                     ] = 2,
    [TDF_SAPFLOW_ICT_SFM1_1                 ] = 28,
    [TDF_SAPFLOW_ICT_SFM1_2                 ] = 28,
    [TDF_SAPFLOW_ICT_SFM1_3                 ] = 28,
    [TDF_WIND_DIRECTION_VAISALA_WMT52       ] = 12,
    [TDF_WIND_SPEED_VAISALA_WMT52           ] = 12,
    [TDF_WIND_DIRECTION_VAISALA_WMT52_HIGH  ] = 12,
    [TDF_WIND_SPEED_VAISALA_WMT52_HIGH      ] = 12,
    [TDF_SOIL_DECAGON_5TM                   ] = 8,
    [TDF_TEMP_APOGEE_SI121                  ] = 16,
    [TDF_TEMP_EXERGEN_IRTC07_K              ] = 8,
    [TDF_TEMP_EXERGEN_IRTC03_K              ] = 8,
    [TDF_LIGHT_DELTAT_TLS                   ] = 4,
    [TDF_LIGHT_DELTAT_TLS_2                 ] = 4,
    [TDF_TEMP_MELEXIS_MLX90614ESF_ACF       ] = 8,
    [TDF_TEMP_T_THERMOCOUPLE                ] = 4,
    [TDF_TEMP_T_THERMOCOUPLE_2              ] = 4,
    [TDF_TEMP_T_THERMOCOUPLE_3              ] = 4,
    [TDF_TEMP_T_THERMOCOUPLE_4              ] = 4,
    [TDF_BMP085_RAW                         ] = 6,
    [TDF_BMP085_COMPENSATED                 ] = 6,
    [TDF_PACP_POWER                         ] = 6,
    [TDF_GAS_METHANE                        ] = 2,
    [TDF_GAS_CO2                            ] = 2,
    [TDF_GAS_HYDROGEN                       ] = 6,
    [TDF_EARTAG_POWER                       ] = 6,
    [TDF_LSM303                             ] = 12,
    [TDF_TEMP_HUMID_SHT25_RAW               ] = 4,
    [TDF_TEMP_HUMID_SHT25_COMPENSATED       ] = 4,
    [TDF_LIGHT_AVAGO_CR999                  ] = 8,
    [TDF_REED_SWITCH                        ] = 1,
    [TDF_PACP_AUDIO_RAW                     ] = 24,
    [TDF_PACP_AUDIO_SILENCE                 ] = 2,
    [TDF_ACC_LSM303                         ] = 6,
    [TDF_MAG_LSM303                         ] = 6,
    [TDF_RADIO_STATS                        ] = 8,
    [TDF_LAMBING_STATS                      ] = 5,
    [TDF_GPS_POSLLH                         ] = 28,
    [TDF_GPS_TIMEGPS                        ] = 16,
    [TDF_GPS_NAVSOL                         ] = 52,
    [TDF_SD_PAGE_NUM                        ] = 4,
    [TDF_WEIGHT_BRIDGE                      ] = 14,
    [TDF_OPAL_ONBOARD_STATS                 ] = 8,
    [TDF_PACP_PRECISION_POWER               ] = 6,
    [TDF_BATTERY_SOLAR                      ] = 4,
    [TDF_FLASH_DATA                         ] = 40,
    [TDF_FLASH_PAGE                         ] = 4,
    [TDF_GPS_POSITION                       ] = 15,
    [TDF_PACP_RESET_COUNT                   ] = 2,
    [TDF_UPTIME                             ] = 4,
    [TDF_FLASH_DATA_LOCATION                ] = 3,
    [TDF_GAS_IR15TT                         ] = 8,
    [TDF_MPU9150                            ] = 14,
    [TDF_PACP_WIND_VAISALA_WXT520           ] = 12,
    [TDF_PACP_PTH_VAISALA_WXT520            ] = 6,
    [TDF_PACP_PRECIP_VAISALA_WXT520         ] = 26,
    [TDF_PACP_SUPER_VAISALA_WXT520          ] = 8,
    [TDF_PACP_RESET_REASON                  ] = 2,
    [TDF_GPS_STATUS                         ] = 2,
    [TDF_PACP_POWER_STATUS                  ] = 7,
    [TDF_BUILD_TIMESTAMP                    ] = 4,
    [TDF_PAGE_DOWNLOAD_STATS                ] = 7,
    [TDF_MPU9150_ALL                        ] = 22,
    [TDF_LPS331_ALL                         ] = 6,
    [TDF_AD7689                             ] = 2,
    [TDF_AD7689_SINGLE                      ] = 3,
    [TDF_GATEWAY_POSITION                   ] = 8,
    [TDF_PACP_AUDIO_DATA                    ] = 32,
    [TDF_PACP_AUDIO_DIFF                    ] = 17,
    [TDF_LSM303DLHC_ACC                     ] = 6,
    [TDF_LSM303DLHC_MAG                     ] = 6,
    [TDF_LSM303DLHC_ACC_INTERRUPT           ] = 3,
    [TDF_RADIO_CONTACT_LOG                  ] = 4,
    [TDF_DEBUG_TEXT                         ] = 32,
    [TDF_APP_INFO                           ] = 6,
    [TDF_KERNEL_VERSION                     ] = 128,
    [TDF_SOFTWARE_VERSION                   ] = 128,
    [TDF_BASESTATION_INFO                   ] = 3,
    [TDF_STREET_ADDRESS                     ] = 128,
    [TDF_GAS_TGS821                         ] = 4,
    [TDF_PAGE_WRITE_STATS                   ] = 4,
    [TDF_PACP_AUDIO                         ] = 2,
    [TDF_ANNOTATION                         ] = 85,
    [TDF_RSSI_ROUNDTRIP                     ] = 8,
    [TDF_MP3H6115A                          ] = 2,
    [TDF_TMP112                             ] = 2,
    [TDF_GPS_RECEIVER_STATUS                ] = 2,
    [TDF_GPS_TTFF                           ] = 4,
    [TDF_PACP_1K24_POWER                    ] = 6,
    [TDF_GPS                                ] = 22,
    [TDF_MODEM_TRAFFIC_STATS                ] = 8,
    [TDF_DEBUG_TEXT_SHORT                   ] = 16,
    [TDF_RADIO_PACKET_STATS                 ] = 4,
    [TDF_GPS_HARDWARE_VERSION               ] = 1,
    [TDF_DISK_USAGE_STATS                   ] = 24,
    [TDF_SPECIES                            ] = 128,
    [TDF_GATEWAY_SCHEDULE                   ] = 255,
    [TDF_GAS_TGS832                         ] = 4,
    [TDF_AD7718_CHANNEL                     ] = 7,
    [TDF_ANDROID_BATTERY                    ] = 1,
    [TDF_MOBILE_SIGNAL                      ] = 2,
    [TDF_IAQCORE_VOC                        ] = 8,
    [TDF_KHS200_H2                          ] = 2,
    [TDF_RADIO_CONTACT                      ] = 6,
    [TDF_IBEACON                            ] = 21,
    [TDF_RADIATION                          ] = 2,
    [TDF_IR15TT_CALIBRATED                  ] = 4,
    [TDF_RADIATION_DELTA                    ] = 2,
    [TDF_RADIATION_SIEVERT                  ] = 2,
    [TDF_GP2Y_RANGE                         ] = 2,
    [TDF_RADIATION_CPS                      ] = 2,
    [TDF_SD_PAGES_PER_MIN                   ] = 2,
    [TDF_MISSED_DATA                        ] = 4,
    [TDF_EXTERNAL_12V_BATTERY               ] = 2,
    [TDF_STATUS                             ] = 1,
    [TDF_GATEWAY_STATUS                     ] = 26,
    [TDF_DECAGON_5TM_POTTING_SOIL           ] = 10,
    [TDF_IBEACON_MAJOR_MINOR                ] = 15,
    [TDF_HIH7XXX_SENSOR                     ] = 2,
    [TDF_PACP_2_POWER_STATUS                ] = 6,
    [TDF_BMP280_RAW                         ] = 8,
    [TDF_MPU9250_ACC                        ] = 6,
    [TDF_SENSORTAG_TEMP                     ] = 3,
    [TDF_SENSORTAG_HUMID                    ] = 3,
    [TDF_SENSORTAG_LIGHT                    ] = 3,
    [TDF_HDC1000_RAW                        ] = 8,
    [TDF_SENSORTAG_IBEACON_BASIC            ] = 5,
    [TDF_PIR                                ] = 2,
    [TDF_DAD_POWER                          ] = 4,
    [TDF_BMP280                             ] = 8,
    [TDF_PIR_EVENT                          ] = 6,
    [TDF_MPU9250_ACC_RAW                    ] = 6,
    [TDF_MPU9X50_2G_500DPS                  ] = 20,
    [TDF_DETER_SOUND                        ] = 4,
    [TDF_TIME_BREAK                         ] = 4,
    [TDF_LTC2942                            ] = 2,
    [TDF_DETER_LIGHT                        ] = 4,
    [TDF_PACP2_ADC                          ] = 2,
    [TDF_NW_NODEID_0412                     ] = 2,
    [TDF_NW_NODEID_0808                     ] = 2,
    [TDF_NW_NODEID_0816                     ] = 4,
    [TDF_OYSTAG_ENVIRONMENTAL               ] = 6,
    [TDF_OYSTAG_DIAGNOSTIC                  ] = 8,
    [TDF_OYSTAG_PHYSIOLOGICAL               ] = 7,
    [TDF_OYSTAG_TELEMETRY_DIAGNOSTIC        ] = 10,
    [TDF_OYSTAG_TELEMETRY_CONNECTED_IDS     ] = 2,
    [TDF_OYSTAG_TELEMETRY_LORA              ] = 2,
    [TDF_LORA_ROUND_TRIP                    ] = 11,
    [TDF_LORA_RECV                          ] = 8,
    [TDF_LOCI_POWER                         ] = 4,
    [TDF_LPS22HB_ALL                        ] = 6,
    [TDF_SHT31DIS_ALL                       ] = 4,
    [TDF_MPU9250_WOM_INTERRUPT              ] = 1,
    [TDF_MPU9250_MAG                        ] = 6,
    [TDF_OPT3001                            ] = 2,
    [TDF_VPDAD_JUMBO                        ] = 20,
    [TDF_RELAY_JUMBO                        ] = 12,
    [TDF_NW_NODEID_ASSIGN                   ] = 7,
    [TDF_VPDAD_TEST                         ] = 1,
    [TDF_LORAWAN_LINK                       ] = 5,
    [TDF_MS5837                             ] = 6,
    [TDF_PIR_TRIGGER                        ] = 2,
    [TDF_GPS_LLH                            ] = 12,
    [TDF_GPS_COMPACT                        ] = 18,
    [TDF_CONDUIT_POWER                      ] = 2,
    [TDF_OYSTAG_HEART_STATS                 ] = 3,
    [TDF_SALT_WATER_SWITCH                  ] = 1,
    [TDF_GPS_LOCK_STATS                     ] = 14,
    [TDF_TURTAG_DIAG                        ] = 6,
    [TDF_TURTAG_SOLAR                       ] = 14,
    [TDF_TURTAG_GPS_SLIM                    ] = 8,
    [TDF_TURTAG_DIVE                        ] = 10,
    [TDF_TURTAG_SURFACE                     ] = 9,
    [TDF_GPS_FAIL_STATS                     ] = 4,
    [TDF_TURTAG_SOLAR_FLASH                 ] = 2,
    [TDF_TURTAG_DEPTH                       ] = 6,
    [TDF_CVM_INFO                           ] = 8,
    [TDF_MS5837_COMPACT                     ] = 3,
    [TDF_CERES_SOLAR                        ] = 2,
    [TDF_LORA_RSSI                          ] = 2,
    [TDF_TURTAG_BASIC                       ] = 11,
    [TDF_DEVICE_STATUS_BLE                  ] = 13,
    [TDF_EZO_SPARE                          ] = 2,
    [TDF_LORA_STATS                         ] = 3,
    [TDF_PACP2_PINGER_VOLTAGE               ] = 2,
    [TDF_VPDAD_JUMBO_SMALL                  ] = 14,
    [TDF_EZO_ORP                            ] = 4,
    [TDF_EZO_DO                             ] = 4,
    [TDF_EZO_PH                             ] = 4,
    [TDF_EZO_RTD                            ] = 4,
    [TDF_EZO_EC                             ] = 4,
    [TDF_EZO_UK                             ] = 4,
    [TDF_CVM_CLASSIFICATION                 ] = 8,
    [TDF_UNIX_TIME                          ] = 8,
    [TDF_WATCHDOG_INFO                      ] = 16,
    [TDF_GPS_PVT                            ] = 49,
    [TDF_GPS_LOC_COUNT                      ] = 1,
    [TDF_VPDAD_SENTINEL                     ] = 6,
    [TDF_3G_STATS                           ] = 2,
    [TDF_FERAL_JUMBO                        ] = 11,
    [TDF_MPU9250_ECOMPASS_4G                ] = 12,
    [TDF_UBX_NAV_SAT                        ] = 12,
    [TDF_GPS_FERAL_JUMBO                    ] = 11,
    [TDF_GPS_LATLON                         ] = 8,
    [TDF_RELAY_MDOT_PACKET_STATS            ] = 16,
    [TDF_TMP116                             ] = 2,
    [TDF_ACC_STATS                          ] = 13,
    [TDF_RELAY_LOCI_POWER                   ] = 4,
    [TDF_GPS_COMPACT_RELAY                  ] = 18,
    [TDF_RELAY_UPTIME                       ] = 4,
    [TDF_RELAY_RX_COUNT                     ] = 2,
    [TDF_RELAY_RADIO_STATS                  ] = 8,
    [TDF_RELAY_RESET_STATS                  ] = 3,
    [TDF_CLASSIFICATION                     ] = 5,
    [TDF_LORA_DEBUG_PKT                     ] = 64,
    [TDF_TELEMETRY_DIAGNOSTIC               ] = 9,
    [TDF_CONTACT_SLOT                       ] = 1,
    [TDF_CC2650_CONTACT_LOG                 ] = 4,
    [TDF_WATER_CONDUCTIVITY                 ] = 1,
    [TDF_BLEAT_ASSET                        ] = 16,
    [TDF_BLEAT_ASSET_LL                     ] = 16,
    [TDF_BLEAT_ASSET_LL_COMPACT             ] = 12,
    [TDF_SCHEDULER_STATE_SET                ] = 1,
    [TDF_SCHEDULER_STATE_CLEAR              ] = 1,
    [TDF_SCHEDULER_STATE_TIME               ] = 5,
    [TDF_DIAGNOSTIC_BASE_TIME               ] = 2,
    [TDF_DIAGNOSTIC_NODE_TIME               ] = 2,
    [TDF_PIEZO                              ] = 6,
    [TDF_GPS_MEASUREMENT                    ] = 18,
    [TDF_STS31                              ] = 4,
    [TDF_ACC_XYZ_SIGNED                     ] = 6,
    [TDF_CERES_JUMBO                        ] = 14,
    [TDF_BATTERY_STATS                      ] = 4,
    [TDF_BLEATCON_LAT_LNG                   ] = 10,
    [TDF_RELAY_ID                           ] = 2,
    [TDF_BLEACON_JUMBO                      ] = 12,
    [TDF_BLEAT_ASSET_JUMBO                  ] = 17,
    [TDF_LOST_DATA                          ] = 4,
    [TDF_GPS_LOCK_STATS_ACC                 ] = 18,
    [TDF_ACCEL_VARIANCE                     ] = 12,
    [TDF_STATS_SUMMARY                      ] = 28,
    [TDF_SYSTEM_ANNOUNCE                    ] = 12,
    [TDF_DTREE_CLASS                        ] = 1,
    [TDF_DTREE_CLASS_SUM                    ] = 4,
    [TDF_DTREE_GRAD_VAR                     ] = 24,
    [TDF_WATER                              ] = 6,
    [TDF_PIN_STATUS                         ] = 1,
    [TDF_CSIROTRACK_APP_SETTINGS            ] = 40,
    [TDF_INFRINGEMENT_NOTIFICATION          ] = 1,
    [TDF_WATCHDOG_INFO_SMALL                ] = 13,
    [TDF_CERES_JUMBO_SMALL                  ] = 13,
    [TDF_CERES_GS_LOCATION                  ] = 12,
    [TDF_ENV_TEMPERATURE                    ] = 4,
    [TDF_ENV_TMP_HUM_PRE                    ] = 9,
    [TDF_CSIROTRACK_HOURLY                  ] = 16,
    [TDF_CSIROTRACK_ENV                     ] = 12,
    [TDF_MPU9250_RAW                        ] = 20,
    [TDF_GPS_CSIROTRACK                     ] = 14,
    [TDF_HDC1000                            ] = 4,
    [TDF_BITE_COUNT                         ] = 2,
    [TDF_EGRAZOR_CLAS_SUM                   ] = 5,
    [TDF_ACC_ROLLPITCH                      ] = 8,
    [TDF_BLEAT_SETTINGS                     ] = 17,
    [TDF_BLEAT_STATUS                       ] = 8,
    [TDF_BLEACON_STATUS_DATA                ] = 9,
    [TDF_CT_GLOBALSTAR_ECHO                 ] = 13,
    [TDF_BLEAT_LOCATION                     ] = 10,
    [TDF_ACC_XYZ_2G                         ] = 6,
    [TDF_ACC_XYZ_4G                         ] = 6,
    [TDF_ACC_XYZ_8G                         ] = 6,
    [TDF_ACC_XYZ_16G                        ] = 6,
    [TDF_GENERIC_EVENT                      ] = 1,
    [TDF_SCHEDULER_ERROR                    ] = 6,
    [TDF_SI1133_DATA                        ] = 16,
    [TDF_EGRAZOR_6CLAS_SUM                  ] = 6,
    [TDF_BLEACON_STATS                      ] = 10,
    [TDF_BATTERY_PROCESSED                  ] = 2,
    [TDF_TRANSPORT_MODE                     ] = 2,
    [TDF_FRAUD_DETECTION_STATE              ] = 2,
    [TDF_LSM6DSL                            ] = 12,
    [TDF_3D_POSE                            ] = 6,
    [TDF_MAG_XYZ_SIGNED                     ] = 6,
    [TDF_HEADING                            ] = 2,
    [TDF_RANGE_MM                           ] = 2,
    [TDF_HEIGHT_MSL                         ] = 2,
};

// clang-format on
/*-----------------------------------------------------------*/
