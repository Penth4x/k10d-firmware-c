/* @k10d forward_three_arg_call @ 0x104f2daa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Builds a three-word stack argument block and forwards it to a helper via a pointer from
 *   a global getter.
 * summary:
 *   Stores param_2, param_3, and param_4 into a local stack frame. Calls
 *   initialize_singleton_object_1045d6a0 to obtain a pointer, then calls
 *   read_sensor_data_via_cpucom with that pointer's offset-4 field, param_1+4, and the
 *   address of the local stack block. Returns the result of read_sensor_data_via_cpucom.
 *   The specific subsystem is not identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_three_arg_call(int param_1,uint32_t param_2,uint16_t param_3,void *param_4)

{
  struct {
    uint32_t uStack_14;
    uint16_t uStack_10;
    void * pvStack_c;
  } _cfg_14;
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  _cfg_14.uStack_14 = param_2;
  _cfg_14.uStack_10 = param_3;
  _cfg_14.pvStack_c = param_4;
  iVar1 = initialize_singleton_object_1045d6a0();
  uVar2 = read_sensor_data_via_cpucom((void *)(*(uint32_t *)(iVar1 + 4)),(void *)(param_1 + 4),&_cfg_14.uStack_14);
  return uVar2;
}
