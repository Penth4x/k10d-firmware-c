/* @k10d update_camera_state_flags @ 0x1051d440
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a new value to a state array index and triggers subsystem updates for specific
 *   indices.
 * summary:
 *   The function checks if the value at param_1 + param_2*4 differs from param_3 and
 *   updates it if so. For index 0x19, it extracts a byte and short from param_3, updates
 *   fields at offsets 0x68 and 0x6a, and calls a series of functions (0x104bb1da,
 *   0x104bb1e4, etc.) to configure a subsystem. For index 0, it calls
 *   write_object_field_byte with flags 0x15 and 8 based on bits in param_3. For index 0x18,
 *   it calls write_object_field_byte with flags 0x17, 0xd, 0xc, and 0xb based on bits in
 *   param_3. The specific subsystems are not identified by the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051d458) overlaps instruction at (ram,0x1051d456)
    */

void update_camera_state_flags(void *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  bool bVar4;
  uint8_t auStack_12 [10];
  
  if ((param_2 < 0x1a) && (*(uint *)((int)param_1 + param_2 * 4) != param_3)) {
    *(uint *)((int)param_1 + param_2 * 4) = param_3;
    if (param_2 == 0x19) {
      uVar1 = (param_3 & 0x7fff0000) >> 0x10;
      if (uVar1 < 0xc9) {
        uVar1 = uVar1 & 0xff;
      }
      else {
        uVar1 = 200;
      }
      if ((*(byte *)((int)param_1 + 0x6a) != uVar1) ||
         ((uint)*(ushort *)((int)param_1 + 0x68) != (param_3 & 0xffff))) {
        *(char *)((int)param_1 + 0x6a) = (char)uVar1;
        *(short *)((int)param_1 + 0x68) = (short)param_3;
        alloc_and_zero_small_struct_104bb18e(auStack_12);
        (*(code *)0x104bb1da/*ROM*/)(auStack_12,*(uint16_t *)((int)param_1 + 0x68));
        uVar3 = 2;
        if ((param_3 & 0x80000000/*SDRAM*/) == 0) {
          uVar3 = 1;
        }
        (*(code *)0x104bb1e4/*ROM*/)(auStack_12,uVar3);
        (*(code *)0x104bb1ea/*ROM*/)(auStack_12,0);
        (*(code *)0x104bb1f0/*ROM*/)(auStack_12,1);
        (*(code *)0x104bb1f6/*ROM*/)(auStack_12,1);
        (*(code *)0x104bb1fc/*ROM*/)(auStack_12,2);
        iVar2 = get_or_create_singleton_object_104bb22a();
        configure_sensor_readout_params_104b814e(*(int *)(iVar2 + 4),(uint)*(byte *)((int)param_1 + 0x6a),auStack_12,0);
        free_if_flag_set_104bb1c2(auStack_12,2);
      }
    }
    if (param_2 == 0) {
      bVar4 = (param_3 & 2) == 0;
      if (bVar4) {
        iVar2 = initialize_singleton_object_1045d6a0();
      }
      else {
        iVar2 = initialize_singleton_object_1045d6a0();
      }
      write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(0x15),(uint)(!bVar4));
      if ((param_3 & 4) == 0) {
        iVar2 = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(8),(uint)(0));
      }
      else {
        iVar2 = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(8),(uint)(1));
      }
    }
    if (param_2 == 0x18) {
      if ((param_3 & 3) == 3) {
        iVar2 = initialize_singleton_object_1045d6a0();
        uVar3 = 2;
      }
      else if ((param_3 & 1) == 0) {
        iVar2 = initialize_singleton_object_1045d6a0();
        uVar3 = 0;
      }
      else {
        iVar2 = initialize_singleton_object_1045d6a0();
        uVar3 = 1;
      }
      write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(0x17),(uint)(uVar3));
      bVar4 = (param_3 & 4) == 0;
      if (bVar4) {
        iVar2 = initialize_singleton_object_1045d6a0();
      }
      else {
        iVar2 = initialize_singleton_object_1045d6a0();
      }
      write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(0xd),(uint)(!bVar4));
      bVar4 = (param_3 & 8) == 0;
      if (bVar4) {
        iVar2 = initialize_singleton_object_1045d6a0();
      }
      else {
        iVar2 = initialize_singleton_object_1045d6a0();
      }
      write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(0xc),(uint)(!bVar4));
      if ((param_3 & 0x10) == 0) {
        iVar2 = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(0xb),(uint)(0));
      }
      else {
        iVar2 = initialize_singleton_object_1045d6a0();
        write_object_field_byte((int *)(*(uint32_t *)(iVar2 + 8)),(int)(0xb),(uint)(1));
      }
    }
  }
  return;
}
