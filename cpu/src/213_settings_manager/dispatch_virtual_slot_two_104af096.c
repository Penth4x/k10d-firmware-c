/* @k10d dispatch_virtual_slot_two_104af096 @ 0x104af096
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards a virtual call to slot 2 of an object by delegating to read_big_endian_bytes
 *   with an adjusted this pointer.
 * summary:
 *   The function takes an object pointer (param_1), reads the vtable pointer at offset 4,
 *   adds param_2 to it, and calls read_big_endian_bytes with that adjusted pointer and
 *   param_3. It returns the result of that call directly. All callers are verified virtual
 *   method slot 2 implementations of various classes, indicating this is a common base-
 *   class or shared implementation for that virtual slot. The specific behavior depends
 *   entirely on read_big_endian_bytes, whose role is not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_two_104af096(int param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = read_big_endian_bytes(*(int *)(param_1 + 4) + param_2,param_3);
  return uVar1;
}
