#ifndef MAINSETTINGS
#define MAINSETTINGS

#define IP_SUBNET 178
#define IP_BROKER 7
#define IP_CLIENT 203

#define OTA_HOST "ESPMidiPlayer"
#define OTA_PORT 45678

#define MQTT_IRC_TX "irc/tx"
#define MQTT_PLAYMIDI "playmidi"
#define MQTT_CLIENT_ID "playmidi"
#define MQTT_MUSIC_ON_TOPIC "shellies/Switch-DG/relay/0/command"
#define MQTT_MUSIC_ON_MASSAGE "on"
#define MQTT_MUSIC_OFF_TOPIC MQTT_MUSIC_ON_TOPIC
#define MQTT_MUSIC_OFF_MASSAGE "off"

#define INDEV 0

#define PING_TIMEOUT 120 * 1000
#define DEFALT_MIDI_CHANAL 1
#define DEFALT_BPM 240
#define ALLOW_MULTI_CHANAL_MIDI 1
#define ENABLE_PARSER_1_1 1
#define ALLOW_PARSER_2 1
#define NOTEN_BUFFER_LAENGE 8
#define MENGE_PRESET_LIEDER 8
#define MENGE_PRESET_INSTRUMENTE 8

#endif