/* @k10d write_object_id_and_string @ 0x104e39ae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Writes a 0x5c marker byte to a buffer, then appends a string via a virtual call on a
 *   related object.
 * summary:
 *   The function dereferences a pointer chain from param_1 to obtain an object pointer and
 *   calls a virtual method (slot at offset 0x5c) to retrieve an offset value. It writes the
 *   constant 0x5c to the destination buffer at that offset. It then calls a virtual method
 *   (slot at offset 0x34) on a second object (from param_1+0x18) to write data to the
 *   buffer immediately following the marker. The return value is the sum of the initial
 *   offset, the length returned by the second call, and 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_object_id_and_string(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
  iVar2 = (((vtbl_entry*)(iVar2))[11].fn)(*(int *)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar2))[11].adj);
  *(uint8_t *)(param_2 + iVar2) = 0x5c;
  iVar1 = (((vtbl_entry*)(*(int *)(param_1 + 0x18)))[6].fn)
                    (((vtbl_entry*)(*(int *)(param_1 + 0x18)))[6].adj + param_1,param_2 + iVar2 + 1);
  return iVar2 + iVar1 + 1;
}
