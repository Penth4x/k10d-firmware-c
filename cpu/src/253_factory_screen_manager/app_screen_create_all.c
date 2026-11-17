/* @k10d app_screen_create_all @ 0x104e734a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed create_screen_mode_if_needed)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Creates and initializes a screen mode object if it does not already exist, returning
 *   the mode handle.
 * summary:
 *   The function checks if the screen mode at index param_2 is null. If so, and if the mode
 *   is in the range 0-2, it initializes the object structure (setting flags at 0x3d and
 *   0x3c), calls app_screen_factory_by_mode for indices 0-4 to set up sub-components, and
 *   allocates/links several pointers via invoke_three_virtual_methods and
 *   set_pointer_if_null. It finally calls release_up_to_nine_pointers to activate the mode.
 *   The function returns the pointer stored at param_1 + 0x18 + param_2*4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e737e) overlaps instruction at (ram,0x104e737c)
    */

uint32_t app_screen_create_all(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint8_t uVar3;
  void *pvVar4;
  void *pvVar5;
  uint32_t *puVar6;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x34));
  puVar6 = (uint32_t *)(param_1 + 0x18);
  if ((puVar6[param_2] == 0) && (((param_2 == 0 || (param_2 == 1)) || (param_2 == 2)))) {
    if (*(char *)(param_1 + 0x3d) == '\0') {
      *(uint8_t *)(param_1 + 0x3d) = 1;
      uVar1 = get_or_create_singleton_104ce316();
      invoke_three_virtual_methods(param_1,(void *)uVar1);
      uVar1 = get_or_create_singleton_object_104b43d6();
      invoke_three_virtual_methods(param_1,(void *)uVar1);
    }
    app_screen_factory_by_mode(param_1,0,0);
    app_screen_factory_by_mode(param_1,1,0);
    app_screen_factory_by_mode(param_1,2,0);
    app_screen_factory_by_mode(param_1,3,0);
    app_screen_factory_by_mode(param_1,4,0);
    iVar2 = get_or_init_singleton_object_104b50ec();
    invoke_three_virtual_methods(param_1,(void *)iVar2);
    pvVar5 = *(void **)(iVar2 + 4);
    if (*(int *)(param_1 + 0x28) == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)(*(int *)(param_1 + 0x28) + 4);
    }
    set_pointer_if_null(pvVar5,pvVar4);
    *(void **)(param_1 + 0x20) = pvVar5;
    uVar1 = get_or_create_singleton_object_104df02a();
    invoke_three_virtual_methods(param_1,(void *)uVar1);
    pvVar5 = (void *)read_field_at_offset_four_104df156(uVar1);
    if (*(int *)(param_1 + 0x28) == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)(*(int *)(param_1 + 0x28) + 4);
    }
    set_pointer_if_null(pvVar5,pvVar4);
    *puVar6 = (uint32_t)pvVar5;
    *(void **)(param_1 + 0x1c) = pvVar5;
    if (*(char *)(param_1 + 0x3c) == '\0') {
      uVar1 = initialize_singleton_object_1042d920();
      uVar3 = invoke_three_virtual_methods(param_1,(void *)uVar1);
      *(uint8_t *)(param_1 + 0x3c) = uVar3;
    }
    release_up_to_nine_pointers(param_1,1,(void *)0x0);
  }
  uVar1 = puVar6[param_2];
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x34));
  return uVar1;
}
