/* @k10d write_two_byte_status_to_object @ 0x104a739e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Performs a sequence of virtual method calls on an object to write status bytes and a
 *   4-byte value.
 * summary:
 *   The function invokes virtual slot 8 on the object pointed to by param_2. Based on the
 *   return value, it selects one of two 2-byte constants (DAT_105b5ad8 or DAT_105b5ad6) and
 *   writes them via virtual slot 2. It then writes a 1-byte constant (DAT_105b5acc) via
 *   virtual slot 3 and a 4-byte value (param_1 + 4) via virtual slot 4. The specific
 *   meaning of the constants and the object's role are not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_two_byte_status_to_object(int param_1,int *param_2)

{
  int iVar1;
  void *puVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x44))((int)*(short *)(*param_2 + 0x40) + (int)param_2);
  if (iVar1 == 0) {
    puVar2 = &DAT_105b5ad8/*ROM*/;
    iVar1 = *param_2;
  }
  else {
    puVar2 = &DAT_105b5ad6/*ROM*/;
    iVar1 = *param_2;
  }
  (**(code **)(iVar1 + 0x14))((int)*(short *)(iVar1 + 0x10) + (int)param_2,puVar2,2,0);
  (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,&DAT_105b5acc/*ROM*/,1,2);
  (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,param_1 + 4,1,4);
  return 1;
}
