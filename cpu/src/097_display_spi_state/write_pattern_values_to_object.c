/* @k10d write_pattern_values_to_object @ 0x10412280
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes 16-bit values from ROM tables into an object at specific indices based on a flag
 *   at offset 0xc2.
 * summary:
 *   The function checks a byte at offset 0xc2 of the object pointed to by param_1.
 *   Depending on this flag, it iterates through one of two 16-bit tables in ROM (0x1059b2b8
 *   or 0x1059ba42) and writes the values to indices starting at 0x1200 using
 *   send_two_word_pair_over_ch2. It then writes a third table (0x1059b76c) starting at
 *   index 0x1000 and writes specific constant values to indices 0x13ff, 0x1429, 0x11ff, and
 *   0. The specific subsystem (display, sensor, etc.) is not identifiable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x104122a2) */

void write_pattern_values_to_object(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc2) == '\0') {
    sVar3 = 0x1200;
    iVar2 = 0;
    iVar1 = 0x18c;
    do {
      iVar4 = iVar1;
      send_two_word_pair_over_ch2(param_1,sVar3,*(uint16_t *)(iVar2 + 0x1059b2b8/*ROM*/),1);
      send_two_word_pair_over_ch2(param_1,sVar3 + 1,*(uint16_t *)(iVar2 + 0x1059b2ba/*ROM*/),1);
      send_two_word_pair_over_ch2(param_1,sVar3 + 2,*(uint16_t *)(iVar2 + 0x1059b2bc/*ROM*/),1);
      iVar2 = iVar2 + 6;
      sVar3 = sVar3 + 3;
      iVar1 = iVar4 + -3;
    } while (-1 < iVar4 + -3);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      send_two_word_pair_over_ch2(param_1,sVar3,*(uint16_t *)(iVar2 + 0x1059b2b8/*ROM*/),1);
      iVar2 = iVar2 + 2;
      sVar3 = sVar3 + 1;
    }
  }
  else {
    sVar3 = 0x1200;
    iVar2 = 0;
    iVar1 = 0x11e;
    do {
      iVar4 = iVar1;
      send_two_word_pair_over_ch2(param_1,sVar3,*(uint16_t *)(iVar2 + 0x1059ba42/*ROM*/),1);
      send_two_word_pair_over_ch2(param_1,sVar3 + 1,*(uint16_t *)(iVar2 + 0x1059ba44/*ROM*/),1);
      send_two_word_pair_over_ch2(param_1,sVar3 + 2,*(uint16_t *)(iVar2 + 0x1059ba46/*ROM*/),1);
      iVar2 = iVar2 + 6;
      sVar3 = sVar3 + 3;
      iVar1 = iVar4 + -3;
    } while (-1 < iVar4 + -3);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      send_two_word_pair_over_ch2(param_1,sVar3,*(uint16_t *)(iVar2 + 0x1059ba42/*ROM*/),1);
      iVar2 = iVar2 + 2;
      sVar3 = sVar3 + 1;
    }
  }
  send_two_word_pair_over_ch2(param_1,0x13ff,0,1);
  send_two_word_pair_over_ch2(param_1,0x1429,0x1000,1);
  sVar3 = 0x1000;
  iVar2 = 0;
  iVar1 = 0x168;
  do {
    iVar4 = iVar1;
    send_two_word_pair_over_ch2(param_1,sVar3,*(uint16_t *)(iVar2 + 0x1059b76c/*ROM*/),1);
    send_two_word_pair_over_ch2(param_1,sVar3 + 1,*(uint16_t *)(iVar2 + 0x1059b76e/*ROM*/),1);
    send_two_word_pair_over_ch2(param_1,sVar3 + 2,*(uint16_t *)(iVar2 + 0x1059b770/*ROM*/),1);
    iVar2 = iVar2 + 6;
    sVar3 = sVar3 + 3;
    iVar1 = iVar4 + -3;
  } while (-1 < iVar4 + -3);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    send_two_word_pair_over_ch2(param_1,sVar3,*(uint16_t *)(iVar2 + 0x1059b76c/*ROM*/),1);
    iVar2 = iVar2 + 2;
    sVar3 = sVar3 + 1;
  }
  send_two_word_pair_over_ch2(param_1,0x11ff,0,1);
  send_two_word_pair_over_ch2(param_1,0,0x200,1);
  send_two_word_pair_over_ch2(param_1,0,0,1);
  send_two_word_pair_over_ch2(param_1,0x1429,0,1);
  return;
}
