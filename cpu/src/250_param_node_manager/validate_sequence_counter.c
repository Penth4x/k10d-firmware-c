/* @k10d validate_sequence_counter @ 0x104dfa0c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Checks a global flag and compares an object field against an expected counter,
 *   incrementing the counter on success.
 * summary:
 *   The function reads a global flag at DAT_8001090c. If the flag is zero, it calls
 *   initialize_linked_struct_fields with code 0x2013 and returns 0. If the flag is non-
 *   zero, it compares the field at offset 0xc of the object pointed to by param_1 against
 *   the value in _DAT_80010908 + 1. On mismatch, it calls initialize_linked_struct_fields
 *   with code 0x2004 and returns 0. On success, it increments _DAT_80010908 and returns 1.
 *   The function acts as a state machine guard or sequence validator.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t validate_sequence_counter(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  if (DAT_8001090c/*SDRAM*/ == '\0') {
    initialize_linked_struct_fields(param_1,0x2013);
    uVar2 = 0;
    iVar1 = _DAT_80010908/*SDRAM*/;
  }
  else {
    iVar1 = _DAT_80010908/*SDRAM*/ + 1;
    if (*(int *)(*param_1 + 0xc) != _DAT_80010908/*SDRAM*/ + 1) {
      initialize_linked_struct_fields(param_1,0x2004);
      uVar2 = 0;
      iVar1 = _DAT_80010908/*SDRAM*/;
    }
  }
  _DAT_80010908/*SDRAM*/ = iVar1;
  return uVar2;
}
