#ifndef _MQTT_CONFIG_H_
#define _MQTT_CONFIG_H_

#include "sdkconfig.h"
#include <stdio.h>

#define CONFIG_MQTT_PROTOCOL_311              1
#define CONFIG_MQTT_SECURITY_ON               1
#define CONFIG_MQTT_PRIORITY                  5
#define CONFIG_MQTT_LOG_ERROR_ON              1
#define CONFIG_MQTT_LOG_WARN_ON               1
#define CONFIG_MQTT_LOG_INFO_ON               1
#define CONFIG_MQTT_RECONNECT_TIMEOUT        60
#define CONFIG_MQTT_QUEUE_BUFFER_SIZE_WORD 1024
#define CONFIG_MQTT_BUFFER_SIZE_BYTE       1024
#define CONFIG_MQTT_MAX_HOST_LEN             64
#define CONFIG_MQTT_MAX_CLIENT_LEN           32
#define CONFIG_MQTT_MAX_USERNAME_LEN         32
#define CONFIG_MQTT_MAX_PASSWORD_LEN         32
#define CONFIG_MQTT_MAX_LWT_TOPIC            32
#define CONFIG_MQTT_MAX_LWT_MSG              32

#if CONFIG_MQTT_LOG_ERROR_ON
  #define mqtt_error(...) ESP_LOGE(TAG, __VA_ARGS__)
#else
  #define mqtt_error(...)
#endif

#if CONFIG_MQTT_LOG_WARN_ON
  #define mqtt_warn(...) ESP_LOGW(TAG, __VA_ARGS__)
#else
  #define mqtt_warn(...)
#endif

#if CONFIG_MQTT_LOG_INFO_ON
  #define mqtt_info(...) ESP_LOGI(TAG, __VA_ARGS__)
#else
  #define mqtt_info(...)
#endif

#if !CONFIG_MQTT_QUEUE_BUFFER_SIZE_WORD
  #define CONFIG_MQTT_QUEUE_BUFFER_SIZE_WORD 1024
#endif

#endif
