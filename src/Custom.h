#ifndef ESPEASY_CUSTOM_H
#define ESPEASY_CUSTOM_H

#define PLUGIN_BUILD_CUSTOM

// Aktywacja Open-Meteo i parsera JSON
#define FEATURE_OPENMETEO_EVENT 1
#define FEATURE_JSON_EVENT 1
#define FEATURE_SEND_TO_HTTP 1
#define FEATURE_HTTP_CLIENT 1

// Twoje urządzenia
#define USES_P006   // BMP180
#define USES_P012   // LCD
#define USES_P026   // SysInfo
#define USES_C011   // Generic HTTP Advanced

#define DEFAULT_USE_RULES true

#endif
