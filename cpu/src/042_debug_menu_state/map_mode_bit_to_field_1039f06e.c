/* @k10d map_mode_bit_to_field_1039f06e @ 0x1039f06e
 * name: ghidra (decompiled d327 to close a missing-decompile leak: it was called via a hardcoded
 *   (*(code*)0x1039f06e)() literal in dispatch_event_flags_loop, which jumped back into ORIGINAL
 *   code. Now recompiled + referenced by symbol.)
 * unit: 042_debug_menu_state (unit names are model-proposed)
 * purpose:
 *   Maps a single mode/flag bit in param_2 to a field offset (0x60..0x90) and returns the 32-bit
 *   field at that offset of param_1; defaults to offset 0x60.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_bit_to_field_1039f06e(int param_1,uint param_2)

{
  int iVar1;

  if (((param_2 & 0x8000000) != 0) && (param_2 != 0x8000000)) {
    param_2 = 0x8000000;
  }
  if (param_2 == 0x400000) {
    iVar1 = 0x78;
  }
  else if (param_2 < 0x400001) {
    if (param_2 == 0x40000) {
      iVar1 = 0x68;
    }
    else if (param_2 < 0x40001) {
      if (param_2 == 0x10000) {
        iVar1 = 0x60;
      }
      else if (param_2 == 0x20000) {
        iVar1 = 100;
      }
      else {
        iVar1 = 0x60;
      }
    }
    else if (param_2 == 0x80000) {
      iVar1 = 0x6c;
    }
    else if (param_2 == 0x100000) {
      iVar1 = 0x70;
    }
    else if (param_2 == 0x200000) {
      iVar1 = 0x74;
    }
    else {
      iVar1 = 0x60;
    }
  }
  else if (param_2 == 0x2000000) {
    iVar1 = 0x80;
  }
  else if (param_2 < 0x2000001) {
    if (param_2 == 0x800000) {
      iVar1 = 0x90;
    }
    else if (param_2 == 0x1000000) {
      iVar1 = 0x7c;
    }
    else {
      iVar1 = 0x60;
    }
  }
  else if (param_2 == 0x4000000) {
    iVar1 = 0x84;
  }
  else if (param_2 == 0x8000000) {
    iVar1 = 0x8c;
  }
  else if (param_2 == 0x10000000) {
    iVar1 = 0x88;
  }
  else {
    iVar1 = 0x60;
  }
  return *(uint32_t *)(iVar1 + param_1);
}
