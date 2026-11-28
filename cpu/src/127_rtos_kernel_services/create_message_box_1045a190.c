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

int create_message_box_1045a190(int *handle_out,int task_id,int priority,uint32_t *magic_out,int stack_size)

{
  struct {
    uint32_t local_1c;
    int * piStack_18;
    code * pcStack_14;
    int iStack_10;
    int iStack_c;
    uint32_t * puStack_8;
  } task_cfg;
  int trap_ret;
  uintptr_t unused_sp;
  handle_out[1] = priority;
  handle_out[2] = (int)magic_out;
  handle_out[3] = stack_size;
  *magic_out = 0x5aa55aa5;
  *handle_out = 0;
  task_cfg.local_1c = 0;
  task_cfg.iStack_10 = priority << 0x10;
  task_cfg.iStack_c = stack_size;
  task_cfg.pcStack_14 = ui_task_body_common;
  task_cfg.piStack_18 = handle_out;
  task_cfg.puStack_8 = magic_out;
  if (task_id == 0) {
    trap_ret = __trap_allocate_kernel_task_slot_1000dac0(&task_cfg.local_1c);
    if (0 < trap_ret) {
      *handle_out = trap_ret;
      return trap_ret;
    }
  }
  else {
    *handle_out = task_id;
    trap_ret = __trap_validate_and_store_task_params((int)(short)task_id,&task_cfg.local_1c);
  }
  if (trap_ret == 0) {
    trap_ret = 0;
  }
  else if (trap_ret == -0x21) {
    trap_ret = -1;
  }
  else if (trap_ret == -0x11) {
    trap_ret = -2;
  }
  else {
    trap_ret = -3;
  }
  return trap_ret;
}
