/* @k10d read_two_config_values @ 0x104d94e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two named values from a source object and invokes callbacks with the results.
 * summary:
 *   The function constructs a temporary object (cls_105bb0b8) and uses
 *   check_two_conditions_and_return_flag to look up a value associated with the string at
 *   0x105ba4d4. If found, it retrieves a second value via get_upper_half_of_result and, if
 *   that is also valid, calls two virtual methods (at 0x104d7eb8 and 0x104d7efc) with data
 *   derived from param_3. It then attempts to look up a second value associated with the
 *   string at 0x105ba4dc using check_and_process_two_params. The function cleans up the
 *   temporary objects via reset_vtable_and_free_if_flagged_104ddfe6 and returns 1 if the
 *   second lookup succeeds, otherwise 0. The specific meaning of the strings and the
 *   virtual methods is not clear from the pseudocode alone, but the mechanical behavior is
 *   a two-step lookup-and-callback sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_two_config_values(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar3;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105ba4d4/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar3 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar3) {
      uVar2 = add_offset_by_flag(param_3,1);
      (*(code *)0x104d7eb8/*ROM*/)(uVar2,uStack_c);
      uVar2 = add_offset_by_flag(param_3,1);
      (*(code *)0x104d7efc/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_2c);
      iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105ba4dc/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
