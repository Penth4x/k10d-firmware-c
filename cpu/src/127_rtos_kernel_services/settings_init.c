/* @k10d settings_init @ 0x10459f5a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed create_or_wait_semaphore)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a semaphore if param_2 is zero, otherwise waits on the semaphore id in param_2,
 *   returning a normalized status code.
 * summary:
 *   The function stores param_2, param_3, and param_4 into a local structure. If param_2 is
 *   0, it calls find_free_queue_slot_1000da18 to create a semaphore object and stores the
 *   resulting id in *param_1. If param_2 is non-zero, it calls validate_and_dispatch_event
 *   with the lower halfword of param_2, likely to wait on an existing semaphore. The return
 *   value is normalized: 0 remains 0, -0x21 (E_TIMEOUT) becomes -1, and any other error
 *   becomes -3. This fits the pattern of a wrapper around µITRON semaphore primitives
 *   (cre_sem/twai_sem) within the RTOS wrappers module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int settings_init(int *sem_id_ptr, int sem_id, uint32_t sem_type, uint32_t sem_init_val)

{
  struct {
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
  } sem_cfg;
  int status;

  sem_cfg.uStack_10 = 0;
  *sem_id_ptr = sem_id;
  sem_cfg.uStack_c = sem_type;
  sem_cfg.uStack_8 = sem_init_val;

  if (sem_id == 0) {
    status = __trap_find_free_queue_slot_1000da18(&sem_cfg.uStack_10);
    if (0 < status) {
      *sem_id_ptr = status;
      return status;
    }
  }
  else {
    status = __trap_validate_and_dispatch_event((int)(short)sem_id, &sem_cfg.uStack_10);
  }

  if (status == 0) {
    status = 0;
  }
  else if (status == -0x21) {
    status = -1;
  }
  else {
    status = -3;
  }
  return status;
}
