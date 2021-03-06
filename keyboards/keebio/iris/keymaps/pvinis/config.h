#pragma once

#ifdef PRODUCT
#    undef PRODUCT
#    define PRODUCT Iris Keyboard - pvinis
#endif

// Use I2C or Serial, not both.
#define USE_SERIAL
// #define USE_I2C

// Select hand configuration.
// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

// Choose pin to use for audio. C6 is the one iris uses.
#ifdef AUDIO_ENABLE
#    define C6_AUDIO
#    define STARTUP_SONG SONG(NO_SOUND)  // No startup song.
#endif

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLED_NUM 16
#endif

#ifdef ENCODER_ENABLE
#    define ENCODERS_PAD_A \
        { F5 }  // I connected the encoder to F4 and F5.
#    define ENCODERS_PAD_B \
        { F4 }
//   #define ENCODERS_PAD_A_RIGHT { B5 }
//   #define ENCODERS_PAD_B_RIGHT { C6 }
#    define ENCODER_RESOLUTION 2
#endif
