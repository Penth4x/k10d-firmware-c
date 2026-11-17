/* @k10d write_sensor_config_block @ 0x104ebcb8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of configuration bytes and a 64-byte data block to a peripheral via a
 *   series of register writes.
 * summary:
 *   The function takes a base pointer (param_1), an offset (param_2), and an array of
 *   pointers (param_3). It calls a series of functions at 0x10450a66-0x10450cb6, passing a
 *   derived address (*(int *)(param_1 + 8) + 0x12) and values loaded from the pointers in
 *   param_3 at offset param_2. Finally, it calls a function at 0x10450cee to get a buffer
 *   pointer, then copies 64 bytes (16 iterations of 4 bytes) from the memory location
 *   pointed to by param_3[8] + param_2*4 into that buffer. The specific peripheral and the
 *   meaning of the configuration values are not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_sensor_config_block(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint8_t *puVar3;
  int iVar4;
  
  (*(code *)0x10450a66/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint8_t *)(*param_3 + param_2));
  (*(code *)0x10450ab2/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint8_t *)(param_3[1] + param_2));
  iVar4 = param_2 * 2;
  (*(code *)0x10450afe/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint16_t *)(param_3[2] + iVar4));
  (*(code *)0x10450b3e/*ROM*/)(*(int *)(param_1 + 8) + 0x12,0);
  (*(code *)0x10450b72/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint16_t *)(param_3[3] + iVar4));
  (*(code *)0x10450baa/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint8_t *)(param_3[4] + param_2));
  (*(code *)0x10450bf6/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint8_t *)(param_3[5] + param_2));
  (*(code *)0x10450c42/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint16_t *)(param_3[6] + iVar4));
  (*(code *)0x10450c82/*ROM*/)(*(int *)(param_1 + 8) + 0x12,0);
  (*(code *)0x10450cb6/*ROM*/)(*(int *)(param_1 + 8) + 0x12,*(uint16_t *)(param_3[7] + iVar4));
  puVar3 = (uint8_t *)(*(code *)0x10450cee/*ROM*/)(*(int *)(param_1 + 8) + 0x12);
  iVar1 = *(int *)(param_3[8] + param_2 * 4);
  iVar4 = 0;
  iVar2 = 0x3f;
  do {
    *puVar3 = *(uint8_t *)(iVar4 + iVar1);
    puVar3[1] = *(uint8_t *)(iVar4 + 1 + iVar1);
    puVar3[2] = *(uint8_t *)(iVar4 + 2 + iVar1);
    puVar3[3] = *(uint8_t *)(iVar1 + iVar4 + 3);
    puVar3 = puVar3 + 4;
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 4;
  } while (-1 < iVar2);
  return;
}
