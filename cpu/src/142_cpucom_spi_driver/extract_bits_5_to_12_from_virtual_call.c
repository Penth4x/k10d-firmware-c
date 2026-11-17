/* @k10d extract_bits_5_to_12_from_virtual_call @ 0x10464c90
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 11 on an object and returns bits 5-12 of the result.
 * summary:
 *   The function performs a virtual call to slot 11 (offset 0x5c) of the object pointed to
 *   by param_1, passing arguments 4 and 0xe0. It then extracts bits 5 through 12 of the
 *   returned integer value. The specific subsystem or device role is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint extract_bits_5_to_12_from_virtual_call(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,4,0xe0);
  return iVar1 >> 5 & 0xff;
}
