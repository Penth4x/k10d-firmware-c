/* @k10d extract_and_send_four_bytes @ 0x104a5970
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Extracts four bytes from a structure pointed to by param_1 and passes them to a callee.
 * summary:
 *   The function reads four specific byte offsets from a memory block located at *(param_1
 *   + 8). It performs some arithmetic on these bytes (subtraction) before storing them in a
 *   local stack buffer. Finally, it calls copy_bytes_to_struct_field with param_2 and the
 *   address of this 4-byte buffer. The role of copy_bytes_to_struct_field is unknown, so
 *   the specific subsystem (e.g., lens comm, sensor) cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_and_send_four_bytes(int param_1,int param_2)

{
  uintptr_t sp;
  char cStack_c;
  char cStack_b;
  char cStack_a;
  char cStack_9;
  
  cStack_c = (char)*(uint32_t *)(*(int *)(param_1 + 8) + 0xc);
  cStack_b = (char)*(uint32_t *)(*(int *)(param_1 + 8) + 4) -
             (cStack_c + (char)*(uint32_t *)(*(int *)(param_1 + 8) + 0x14));
  cStack_a = (char)*(uint32_t *)(*(int *)(param_1 + 8) + 8);
  cStack_9 = (char)**(uint32_t **)(param_1 + 8) -
             (cStack_a + (char)(*(uint32_t **)(param_1 + 8))[4]);
  copy_bytes_to_struct_field(param_2,&cStack_c,4);
  return;
}
