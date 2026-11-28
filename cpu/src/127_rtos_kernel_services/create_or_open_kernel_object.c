/* @k10d create_or_open_kernel_object @ 0x10459da2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a new kernel object or opens an existing one based on the object ID in param_2.
 * summary:
 *   Validates the object type (param_3) and stores the object ID (param_2) and flags
 *   (param_4) into the structure pointed to by param_1. If param_2 is 0, it calls
 *   find_free_queue_slot_1000d978 to create a new object; otherwise, it calls
 *   validate_task_request to open an existing one. Returns the object ID on success or an
 *   error code (-2 for invalid type, -3 for kernel call failure).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int create_or_open_kernel_object(int *obj_ptr,int obj_id,int obj_type,uint16_t obj_flags)

{
  int kret;
  int retval;
  uint16_t kdesc[2];

  if (obj_type == 1) {
    kdesc[0] = 0;
  }
  else if (obj_type == 2) {
    kdesc[0] = 1;
  }
  else if (obj_type == 3) {
    kdesc[0] = 2;
  }
  else {
    if (obj_type != 4) {
      return -2;
    }
    kdesc[0] = 3;
  }
  *obj_ptr = obj_id;
  kdesc[1] = obj_flags;
  if (obj_id == 0) {
    kret = __trap_find_free_queue_slot_1000d978(kdesc);
    if (0 < kret) {
      *obj_ptr = kret;
      return kret;
    }
  }
  else {
    kret = __trap_validate_task_request((int)(short)obj_id,kdesc);
  }
  retval = 0;
  if (kret != 0) {
    retval = -3;
  }
  return retval;
}
