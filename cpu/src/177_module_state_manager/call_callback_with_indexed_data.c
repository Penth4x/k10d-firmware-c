/* @k10d call_callback_with_indexed_data @ 0x1048588c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Indexes a 3-byte table by param_1, packs the bytes into a 32-bit value with the sign
 *   bit set, and passes it to a function pointer at 0x104454b8.
 * summary:
 *   The function takes the lower 16 bits of param_1, multiplies by 3 to index into a table
 *   at 0x105ab968. It reads three bytes from this offset, packs them into a 32-bit integer,
 *   and ORs with 0x80000000. This value is passed as the second argument to a function
 *   pointer stored at 0x104454b8, with _DAT_800102bc as the first argument. No camera-
 *   specific subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_callback_with_indexed_data(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) * 3;
  (*(code *)0x104454b8/*ROM*/)
            (_DAT_800102bc/*SDRAM*/,
             CONCAT21(CONCAT11(*(uint8_t *)(iVar1 + 0x105ab968/*ROM*/),
                               *(uint8_t *)(iVar1 + 0x105ab96a/*ROM*/)),
                      *(uint8_t *)(iVar1 + 0x105ab969/*ROM*/)) | 0x80000000/*SDRAM*/);
  return;
}
