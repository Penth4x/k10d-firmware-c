/* @k10d dispatch_on_table_byte @ 0x10461c2a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Searches an 18-byte table for param_2 and dispatches to one of several branches based
 *   on the match index.
 * summary:
 *   The function iterates through an 18-byte constant table at 0x105a71f8, comparing each
 *   byte to param_2. If a match is found at index 4, it clears a byte at offset 0x50 of the
 *   object. If matched at index 5, 6, 7, or 8, it calls invoke_listener_slot_two on a
 *   pointer at offset 0x1c and clears a byte at offset 0x51. Finally, it calls set_flg_obj
 *   on a pointer at offset 0x34 and returns the match index (or 9 if no match).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char dispatch_on_table_byte(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar3 = cVar1;
    if (param_2 == *(char *)(iVar2 + 0x105a71f8/*ROM*/)) break;
    iVar2 = iVar2 + 2;
    cVar1 = cVar1 + '\x01';
    cVar3 = '\t';
  } while (iVar2 < 0x12);
  switch(cVar3) {
  default:
    goto LAB_10461cce;
  case '\x04':
    *(uint8_t *)(param_1 + 0x50) = 0;
    break;
  case '\x05':
    invoke_listener_slot_two((int *)(param_1 + 0x1c));
    *(uint8_t *)(param_1 + 0x51) = 0;
    goto LAB_10461cce;
  case '\x06':
    invoke_listener_slot_two((int *)(param_1 + 0x1c));
    *(uint8_t *)(param_1 + 0x51) = 0;
    goto LAB_10461cce;
  case '\a':
    break;
  case '\b':
  }
  invoke_listener_slot_two((int *)(param_1 + 0x1c));
LAB_10461cce:
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x2);
  return cVar3;
}
