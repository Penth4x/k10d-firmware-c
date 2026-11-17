/* @k10d call_helper_with_two_bytes_1045f80c @ 0x1045f80c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two bytes from an object at an offset stored in a global table and passes them to
 *   a helper.
 * summary:
 *   The function indexes a global array of 4-byte entries at param_2 to get an offset. It
 *   adds this offset to the object pointer param_1 and reads two consecutive bytes (at
 *   offset+5 and offset+4) as unsigned shorts. These two values are passed as arguments to
 *   pack_two_byte_value_10496952 along with the object pointer. The function is virtual
 *   slot 2 of class cls_105a6bdc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_bytes_1045f80c(void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 * 8 + 0x105a60c4/*ROM*/);
  pack_two_byte_value_10496952(param_1,(ushort)*(byte *)((int)param_1 + iVar1 + 5),
               (ushort)*(byte *)((int)param_1 + iVar1 + 4));
  return;
}
