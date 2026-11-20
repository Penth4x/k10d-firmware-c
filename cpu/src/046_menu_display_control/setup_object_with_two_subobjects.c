/* @k10d setup_object_with_two_subobjects @ 0x103a6cd8
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Configures an object by calling a setup helper and invoking virtual methods on two sub-
 *   objects, copying parameters on failure.
 * summary:
 *   The function checks a flag in the object header and branches based on a mode parameter
 *   (param_2). It calls call_with_offset_lock_1050b8de with a sub-object pointer; on
 *   success, it invokes virtual methods on sub-objects at offsets 0x13/0x14 (or 0x22/0x23)
 *   with argument 0, and calls a virtual method on the main object with constant 0x1120004.
 *   On failure, it copies several 16-bit values from a helper object (via
 *   compute_offset_from_field_0x28) into the main object, calls scale_by_lut_entry, and
 *   invokes the same virtual methods with argument 1. The code performs object
 *   initialization or state configuration without clear camera-specific indicators.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103a6cfc) overlaps instruction at (ram,0x103a6cfa)
    */

void setup_object_with_two_subobjects(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (param_2 == 0) {
      iVar1 = call_with_offset_lock_1050b8de(param_1[0xe],(void *)param_1[0xf],0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1[0x14] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x14] + (int)*(short *)(iVar1 + 8),0);
        iVar1 = *(int *)(param_1[0x13] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x13] + (int)*(short *)(iVar1 + 8),0);
        (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120004,0);
      }
      else {
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(short *)(param_1 + 0x44) = (short)((int)(uint)*(ushort *)(iVar1 + 0x10) >> 1);
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(short *)((int)param_1 + 0x112) = (short)((int)(uint)*(ushort *)(iVar1 + 0x12) >> 1);
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(uint16_t *)(param_1 + 0x46) = *(uint16_t *)(iVar1 + 0x10);
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(uint16_t *)((int)param_1 + 0x11a) = *(uint16_t *)(iVar1 + 0x12);
        *(uint16_t *)((int)param_1 + 0x116) = 0;
        uVar2 = scale_by_lut_entry(param_1,(uint)*(ushort *)(param_1 + 0x46),0x280,0);
        *(short *)(param_1 + 0x45) = (short)uVar2;
        param_1[0x3c] = *(int *)(param_1[0xf] + 4);
        param_1[0x3d] = *(int *)(param_1[0xf] + 8);
        param_1[0x3e] = *(int *)(param_1[0xf] + 0xc);
        call_helper_and_set_flag_10494b88((uint32_t *)param_1[0x14]);
        iVar1 = *(int *)(param_1[0x14] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x14] + (int)*(short *)(iVar1 + 8),1);
        iVar1 = *(int *)(param_1[0x13] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x13] + (int)*(short *)(iVar1 + 8),1);
      }
    }
    else {
      iVar1 = call_with_offset_lock_1050b8de(param_1[0xe],param_1 + 0x48,1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1[0x22] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x22] + (int)*(short *)(iVar1 + 8),0);
        iVar1 = *(int *)(param_1[0x23] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x23] + (int)*(short *)(iVar1 + 8),0);
        (((vtbl_entry*)(*param_1))[14].fn)((int)((vtbl_entry*)(*param_1))[14].adj + (int)param_1,0x1120004,0);
      }
      else {
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(short *)(param_1 + 0x44) = (short)((int)(uint)*(ushort *)(iVar1 + 0x10) >> 1);
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(short *)((int)param_1 + 0x112) = (short)((int)(uint)*(ushort *)(iVar1 + 0x12) >> 1);
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(uint16_t *)(param_1 + 0x46) = *(uint16_t *)(iVar1 + 0x10);
        iVar1 = compute_offset_from_field_0x28(param_1[0xe]);
        *(uint16_t *)((int)param_1 + 0x11a) = *(uint16_t *)(iVar1 + 0x12);
        *(uint16_t *)((int)param_1 + 0x116) = 0;
        uVar2 = scale_by_lut_entry(param_1,(uint)*(ushort *)(param_1 + 0x46),0x280,0);
        *(short *)(param_1 + 0x45) = (short)uVar2;
        param_1[0x40] = *(int *)(param_1[0xf] + 4);
        param_1[0x41] = *(int *)(param_1[0xf] + 8);
        param_1[0x42] = *(int *)(param_1[0xf] + 0xc);
        call_helper_and_set_flag_10494b88((uint32_t *)param_1[0x22]);
        iVar1 = *(int *)(param_1[0x22] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x22] + (int)*(short *)(iVar1 + 8),1);
        iVar1 = *(int *)(param_1[0x23] + 0xc);
        (((vtbl_entry*)(iVar1))[1].fn)(param_1[0x23] + (int)*(short *)(iVar1 + 8),1);
      }
    }
  }
  return;
}
