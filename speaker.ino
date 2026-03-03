#include "BluetoothA2DPSink.h"


// MAX98357A I2S Connections
#define I2S_BCLK      26  // Bit Clock
#define I2S_LRC       25  // Left/Right Clock (WS)
#define I2S_DOUT      22  // Data Out (DIN on the Amp)

BluetoothA2DPSink a2dp_sink;

void setup() {
    // 1. Define how the ESP32 talks to the MAX98357A
    i2s_pin_config_t my_pin_config = {
        .bck_io_num = I2S_BCLK,
        .ws_io_num = I2S_LRC,
        .data_out_num = I2S_DOUT,
        .data_in_num = I2S_PIN_NO_CHANGE
    };

    a2dp_sink.set_pin_config(my_pin_config);

    // 2. Start Bluetooth (This name shows up on your phone)
    a2dp_sink.start("ItzVoidTech");
}

void loop() {
  // The library handles everything in the background!
  // No code needed here.
}
