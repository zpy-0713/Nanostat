// WiFi mode selection:
//   0 = ESP32 as AP (Access Point) - devices connect directly to ESP32
//   1 = ESP32 as STA (Station) - ESP32 connects to external router
#define WIFI_MODE_AP 1
#define WIFI_MODE_STA 0

// Select WiFi mode here:
#define CURRENT_WIFI_MODE WIFI_MODE_AP

// WiFi credentials (used only in STA mode)
char SSID[] = "SSIDxyz";
char PASSWORD[] = "PASSWORDxyz";

// AP mode settings (used only in AP mode)
#define AP_SSID "NanoStatAP"
#define AP_PASSWORD ""  // Empty = no password (open network)
// #define AP_PASSWORD "12345678"  // Uncomment and set password if needed

