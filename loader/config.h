#ifndef __CONFIG_H__
#define __CONFIG_H__

#define LOAD_ADDRESS 0x98000000

#define MEMORY_NEWLIB_MB 192
#define MEMORY_VITAGL_THRESHOLD_MB 8

#define DATA_PATH "ux0:data/ff4a"
#define SO_PATH DATA_PATH "/" "libff4a.so"
#define CONFIG_FILE_PATH "ux0:data/ff4a/options.cfg"

#define DEF_SCREEN_W 960
#define DEF_SCREEN_H 544

typedef struct {
  int res;
  int bilinear;
  int lang;
  int msaa;
  int postfx;
  int battle_fps; 
} config_opts;
extern config_opts options;

#endif
