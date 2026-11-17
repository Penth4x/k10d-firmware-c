/* @k10d dispatch_sequential_state_transitions @ 0x1041b5cc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Executes a fixed sequence of virtual calls and helper functions to advance an object
 *   through multiple states.
 * summary:
 *   The function takes a pointer to an object structure and performs a series of
 *   operations. It calls virtual methods on sub-objects located at offsets 0x14 and 0xd4,
 *   passing specific integer constants (0xd00002 through 0xd00005) as arguments. It also
 *   invokes several helper functions (FUN_105017xx and FUN_10506cxx) with pointers to other
 *   fields of the object. The sequence appears to be a state machine transition or a multi-
 *   step initialization/teardown routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_sequential_state_transitions(int *param_1)

{
  int iVar1;
  
  call_helper_on_field_0x18_10506c50(param_1[0xf]);
  iVar1 = *(int *)param_1[0x14];
  iVar1 = (**(code **)(iVar1 + 0x14))(param_1[0x14] + (int)*(short *)(iVar1 + 0x10),0xd00002,0);
  param_1[0x15] = iVar1;
  (**(code **)(*param_1 + 0xe4))
            ((int)*(short *)(*param_1 + 0xe0) + (int)param_1,param_1[0x15] + 0x60,0);
  release_object_at_offset_four_10501766(param_1[0xe]);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  wait_cpucom_line_clear_10501778(param_1[0xe]);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  iVar1 = *(int *)param_1[0x14];
  (**(code **)(iVar1 + 0x14))(param_1[0x14] + (int)*(short *)(iVar1 + 0x10),0xd00003,0);
  release_object_at_offset_0x18_10506c1e(param_1[0xf]);
  (*(code *)0x10506c30/*ROM*/)(param_1[0xf]);
  call_helper_with_global_arg(param_1[0xe]);
  (*(code *)0x10506c32/*ROM*/)(param_1[0xf]);
  release_object_at_offset_four_105017ac(param_1[0xe]);
  iVar1 = *(int *)param_1[0x14];
  (**(code **)(iVar1 + 0x14))(param_1[0x14] + (int)*(short *)(iVar1 + 0x10),0xd00004,0);
  (**(code **)(*param_1 + 0xd4))((int)*(short *)(*param_1 + 0xd0) + (int)param_1,0);
  (*(code *)0x10506c34/*ROM*/)(param_1[0xf]);
  wait_cpucom_line_clear_105017be(param_1[0xe]);
  call_two_helpers_on_object_10506c36(param_1[0xf]);
  iVar1 = *(int *)param_1[0x14];
  (**(code **)(iVar1 + 0x14))(param_1[0x14] + (int)*(short *)(iVar1 + 0x10),0xd00005,0);
  return 1;
}
