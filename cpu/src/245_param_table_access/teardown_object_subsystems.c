/* @k10d teardown_object_subsystems @ 0x104d67a2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Sequentially retrieves and destroys multiple sub-objects of a parent structure.
 * summary:
 *   The function takes a parent object pointer and calls a series of getter functions
 *   (add_offset_by_flag, adjust_pointer_by_offset, compute_struct_offset_104d6852,
 *   add_offset_0x2254) to obtain child pointers. Each child pointer is then passed to a
 *   corresponding destructor or cleanup function (clear_two_fields_at_offset_0x20,
 *   clear_struct_fields_104d7c58, initialize_seven_subobjects,
 *   clear_two_struct_fields_104d51f0). It also calls several other cleanup routines
 *   (adjust_pointer_by_flag, init_six_struct_members, add_offset_to_pointer_104d6862,
 *   zero_struct_fields_104d7aa6, initialize_struct_with_subobjects,
 *   add_offset_to_param_104d6ef6, clear_struct_fields_104d79d2) and initializes a field to
 *   0xffffffff via write_field_at_offset_0x2370. The pattern is consistent with a
 *   destructor or deinitialization routine for a complex object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void teardown_object_subsystems(uint32_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  write_field_at_offset_0x2370(param_1,0xffffffff);
  pvVar1 = (void *)add_offset_by_flag(param_1,1);
  clear_two_fields_at_offset_0x20(pvVar1);
  pvVar1 = (void *)add_offset_by_flag(param_1,0);
  clear_two_fields_at_offset_0x20(pvVar1);
  pvVar1 = (void *)adjust_pointer_by_offset(param_1,1);
  clear_struct_fields_104d7c58(pvVar1);
  adjust_pointer_by_flag(param_1,1);
  init_six_struct_members((void *)(uint32_t)param_1);
  iVar2 = compute_struct_offset_104d6852(param_1,1);
  initialize_seven_subobjects(iVar2);
  add_offset_to_pointer_104d6862(param_1);
  zero_struct_fields_104d7aa6((uint32_t *)(uint32_t)param_1);
  pvVar1 = (void *)add_offset_0x2254(param_1);
  clear_two_struct_fields_104d51f0(pvVar1);
  add_offset_to_pointer_104d6882(param_1);
  initialize_struct_with_subobjects((void *)(uint32_t)param_1);
  add_offset_to_param_104d6ef6(param_1);
  clear_struct_fields_104d79d2((uint32_t *)(uint32_t)param_1);
  return;
}
