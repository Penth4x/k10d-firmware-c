/* @k10d configure_mode_parameter_table @ 0x10410d44
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes a set of global offset variables and calls a helper to configure parameter
 *   values based on a mode parameter.
 * summary:
 *   The function calculates two base offsets based on a flag at param_1+0xc1. It then
 *   performs a one-time initialization of numerous global variables
 *   (iRam8001d000..iRam8001d094) with derived offsets. Finally, it branches on param_2 (1,
 *   2, or 3) to call send_two_byte_pairs_over_ch2 with specific IDs and value pairs, likely
 *   setting up a configuration table for a subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_mode_parameter_table(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 6;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    sVar2 = 8;
  }
  sVar1 = 8;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    sVar1 = 6;
  }
  if (iRam8001d000 == 0) {
    iRam8001d000 = 1;
    sRam8001cfb4 = sVar2 + 0x14d;
  }
  if (iRam8001d004 == 0) {
    iRam8001d004 = 1;
    sRam8001cfb6 = sVar1 + 0x14d;
  }
  if (iRam8001d008 == 0) {
    iRam8001d008 = 1;
    sRam8001cfb8 = sRam8001cfb4;
  }
  if (iRam8001d00c == 0) {
    iRam8001d00c = 1;
    sRam8001cfba = sRam8001cfb4 + 0x514;
  }
  if (iRam8001d010 == 0) {
    iRam8001d010 = 1;
    sRam8001cfbc = sRam8001cfb6;
  }
  if (iRam8001d014 == 0) {
    iRam8001d014 = 1;
    sRam8001cfbe = sRam8001cfb6 + 0x514;
  }
  if (iRam8001d018 == 0) {
    iRam8001d018 = 1;
    sRam8001cfc0 = sRam8001cfb4;
  }
  if (iRam8001d01c == 0) {
    iRam8001d01c = 1;
    sRam8001cfc2 = sRam8001cfb4 + 0x200;
  }
  if (iRam8001d020 == 0) {
    iRam8001d020 = 1;
    sRam8001cfc4 = sRam8001cfb6;
  }
  if (iRam8001d024 == 0) {
    iRam8001d024 = 1;
    sRam8001cfc6 = sRam8001cfb6 + 0x200;
  }
  if (iRam8001d028 == 0) {
    iRam8001d028 = 1;
    sRam8001cfc8 = sRam8001cfb4 + 10;
  }
  if (iRam8001d02c == 0) {
    iRam8001d02c = 1;
    sRam8001cfca = sRam8001cfc8 + 2;
  }
  if (iRam8001d030 == 0) {
    iRam8001d030 = 1;
    sRam8001cfcc = sRam8001cfb6 + 10;
  }
  if (iRam8001d034 == 0) {
    iRam8001d034 = 1;
    sRam8001cfce = sRam8001cfcc + 2;
  }
  if (iRam8001d038 == 0) {
    iRam8001d038 = 1;
    sRam8001cfd0 = sRam8001cfb4;
  }
  if (iRam8001d03c == 0) {
    iRam8001d03c = 1;
    sRam8001cfd2 = sRam8001cfb4 + 0xa84;
  }
  if (iRam8001d040 == 0) {
    iRam8001d040 = 1;
    sRam8001cfd4 = sRam8001cfb6;
  }
  if (iRam8001d044 == 0) {
    iRam8001d044 = 1;
    sRam8001cfd6 = sRam8001cfb6 + 0xa84;
  }
  if (iRam8001d048 == 0) {
    iRam8001d048 = 1;
    sRam8001cfd8 = sRam8001cfb4 + 0x442;
  }
  if (iRam8001d04c == 0) {
    iRam8001d04c = 1;
    sRam8001cfda = sRam8001cfd8 + 0x200;
  }
  if (iRam8001d050 == 0) {
    iRam8001d050 = 1;
    sRam8001cfdc = sRam8001cfb6 + 0x442;
  }
  if (iRam8001d054 == 0) {
    iRam8001d054 = 1;
    sRam8001cfde = sRam8001cfdc + 0x200;
  }
  if (iRam8001d058 == 0) {
    iRam8001d058 = 1;
    sRam8001cfe0 = sRam8001cfb4 + 0xa86;
  }
  if (iRam8001d05c == 0) {
    iRam8001d05c = 1;
    sRam8001cfe2 = sRam8001cfe0 + 8;
  }
  if (iRam8001d060 == 0) {
    iRam8001d060 = 1;
    sRam8001cfe4 = sRam8001cfb6 + 0xa86;
  }
  if (iRam8001d064 == 0) {
    iRam8001d064 = 1;
    sRam8001cfe6 = sRam8001cfe4 + 8;
  }
  if (iRam8001d068 == 0) {
    iRam8001d068 = 1;
    sRam8001cfe8 = sRam8001cfb4;
  }
  if (iRam8001d06c == 0) {
    iRam8001d06c = 1;
    sRam8001cfea = sRam8001cfb4 + 0xa84;
  }
  if (iRam8001d070 == 0) {
    iRam8001d070 = 1;
    sRam8001cfec = sRam8001cfb6;
  }
  if (iRam8001d074 == 0) {
    iRam8001d074 = 1;
    sRam8001cfee = sRam8001cfb6 + 0xa84;
  }
  if (iRam8001d078 == 0) {
    iRam8001d078 = 1;
    sRam8001cff0 = sRam8001cfb4 + 0x442;
  }
  if (iRam8001d07c == 0) {
    iRam8001d07c = 1;
    sRam8001cff2 = sRam8001cff0 + 0x200;
  }
  if (iRam8001d080 == 0) {
    iRam8001d080 = 1;
    sRam8001cff4 = sRam8001cfb6 + 0x442;
  }
  if (iRam8001d084 == 0) {
    iRam8001d084 = 1;
    sRam8001cff6 = sRam8001cff4 + 0x200;
  }
  if (iRam8001d088 == 0) {
    iRam8001d088 = 1;
    sRam8001cff8 = sRam8001cfb4 + 0xa86;
  }
  if (iRam8001d08c == 0) {
    iRam8001d08c = 1;
    sRam8001cffa = sRam8001cff8 + 8;
  }
  if (iRam8001d090 == 0) {
    iRam8001d090 = 1;
    sRam8001cffc = sRam8001cfb6 + 0xa86;
  }
  if (iRam8001d094 == 0) {
    iRam8001d094 = 1;
    sRam8001cffe = sRam8001cffc + 8;
  }
  if (param_2 == 1) {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      send_two_byte_pairs_over_ch2(param_1,0x861,0,0);
      send_two_byte_pairs_over_ch2(param_1,0x862,0,0);
      send_two_byte_pairs_over_ch2(param_1,0x863,0,0);
      send_two_byte_pairs_over_ch2(param_1,0x864,0,0);
    }
    send_two_byte_pairs_over_ch2(param_1,0x84c,6,6);
    send_two_byte_pairs_over_ch2(param_1,0x84d,10,6);
    send_two_byte_pairs_over_ch2(param_1,0x84e,sRam8001cfb8,sRam8001cfbc);
    send_two_byte_pairs_over_ch2(param_1,0x84f,sRam8001cfba,sRam8001cfbe);
    send_two_byte_pairs_over_ch2(param_1,0x854,6,6);
    send_two_byte_pairs_over_ch2(param_1,0x850,2,2);
    send_two_byte_pairs_over_ch2(param_1,0x851,4,4);
    send_two_byte_pairs_over_ch2(param_1,0x852,sRam8001cfc0,sRam8001cfc4);
    send_two_byte_pairs_over_ch2(param_1,0x853,sRam8001cfc2,sRam8001cfc6);
    send_two_byte_pairs_over_ch2(param_1,0x859,2,2);
    send_two_byte_pairs_over_ch2(param_1,0x855,6,6);
    send_two_byte_pairs_over_ch2(param_1,0x856,10,10);
    send_two_byte_pairs_over_ch2(param_1,0x857,sRam8001cfc8,sRam8001cfcc);
    sVar2 = sRam8001cfca;
    sVar1 = sRam8001cfce;
  }
  else if (param_2 == 2) {
    send_two_byte_pairs_over_ch2(param_1,0x84c,0xcc,0xcc);
    send_two_byte_pairs_over_ch2(param_1,0x84d,0x49c,0x49c);
    send_two_byte_pairs_over_ch2(param_1,0x84e,sRam8001cfd0,sRam8001cfd4);
    send_two_byte_pairs_over_ch2(param_1,0x84f,sRam8001cfd2,sRam8001cfd6);
    send_two_byte_pairs_over_ch2(param_1,0x854,10,10);
    send_two_byte_pairs_over_ch2(param_1,0x850,200,200);
    send_two_byte_pairs_over_ch2(param_1,0x851,0xca,0xca);
    send_two_byte_pairs_over_ch2(param_1,0x852,sRam8001cfd8,sRam8001cfdc);
    send_two_byte_pairs_over_ch2(param_1,0x853,sRam8001cfda,sRam8001cfde);
    send_two_byte_pairs_over_ch2(param_1,0x859,5,5);
    send_two_byte_pairs_over_ch2(param_1,0x855,0xcc,0xcc);
    send_two_byte_pairs_over_ch2(param_1,0x856,0x49c,0x49c);
    send_two_byte_pairs_over_ch2(param_1,0x857,sRam8001cfe0,sRam8001cfe4);
    sVar2 = sRam8001cfe2;
    sVar1 = sRam8001cfe6;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    send_two_byte_pairs_over_ch2(param_1,0x84c,0x6b,0x6b);
    send_two_byte_pairs_over_ch2(param_1,0x84d,0x43b,0x43b);
    send_two_byte_pairs_over_ch2(param_1,0x84e,sRam8001cfe8,sRam8001cfec);
    send_two_byte_pairs_over_ch2(param_1,0x84f,sRam8001cfea,sRam8001cfee);
    send_two_byte_pairs_over_ch2(param_1,0x854,10,10);
    send_two_byte_pairs_over_ch2(param_1,0x850,0x67,0x67);
    send_two_byte_pairs_over_ch2(param_1,0x851,0x69,0x69);
    send_two_byte_pairs_over_ch2(param_1,0x852,sRam8001cff0,sRam8001cff4);
    send_two_byte_pairs_over_ch2(param_1,0x853,sRam8001cff2,sRam8001cff6);
    send_two_byte_pairs_over_ch2(param_1,0x859,5,5);
    send_two_byte_pairs_over_ch2(param_1,0x855,0x6b,0x6b);
    send_two_byte_pairs_over_ch2(param_1,0x856,0x43b,0x43b);
    send_two_byte_pairs_over_ch2(param_1,0x857,sRam8001cff8,sRam8001cffc);
    sVar2 = sRam8001cffa;
    sVar1 = sRam8001cffe;
  }
  send_two_byte_pairs_over_ch2(param_1,0x858,sVar2,sVar1);
  return;
}
