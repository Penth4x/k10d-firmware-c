/* @k10d create_message_box_1045a190 @ 0x1045a190
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a message box kernel object, optionally with a pre-allocated ID, and stores the
 *   result in the caller's handle field.
 * summary:
 *   Populates a local parameter block with the size, priority, and a callback pointer
 *   (ui_task_body_common) before calling __trap_allocate_kernel_task_slot_1000dac0(create) or
 *   __trap_validate_and_store_task_params(create with ID). The return value is normalized to 0
 *   (success) or negative error codes (-1, -2, -3) and written back to param_1[0]. The
 *   magic value 0x5aa55aa5 is written to param_4, likely as a sentinel or header for the
 *   message box structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int create_message_box_1045a190(int *param_1,int param_2,int param_3,uint32_t *param_4,int param_5)

{
  struct {
    uint32_t local_1c;
    int * piStack_18;
    code * pcStack_14;
    int iStack_10;
    int iStack_c;
    uint32_t * puStack_8;
  } _cfg_1c;
  int iVar1;
  uintptr_t sp;
  param_1[1] = param_3;
  param_1[2] = (int)param_4;
  param_1[3] = param_5;
  *param_4 = 0x5aa55aa5;
  *param_1 = 0;
  _cfg_1c.local_1c = 0;
  _cfg_1c.iStack_10 = param_3 << 0x10;
  _cfg_1c.iStack_c = param_5;
  _cfg_1c.pcStack_14 = ui_task_body_common;
  _cfg_1c.piStack_18 = param_1;
  _cfg_1c.puStack_8 = param_4;
  if (param_2 == 0) {
    iVar1 = __trap_allocate_kernel_task_slot_1000dac0(&_cfg_1c.local_1c);
    if (0 < iVar1) {
      *param_1 = iVar1;
      return iVar1;
    }
  }
  else {
    *param_1 = param_2;
    iVar1 = __trap_validate_and_store_task_params((int)(short)param_2,&_cfg_1c.local_1c);
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (iVar1 == -0x21) {
    iVar1 = -1;
  }
  else if (iVar1 == -0x11) {
    iVar1 = -2;
  }
  else {
    iVar1 = -3;
  }
  return iVar1;
}
