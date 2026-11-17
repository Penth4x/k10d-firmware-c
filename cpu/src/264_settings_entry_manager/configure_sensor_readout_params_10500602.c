/* @k10d configure_sensor_readout_params_10500602 @ 0x10500602
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_sensor_readout_params_10500602(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar2 = (uint)param_2[6] >> 9 & 0xffff;
  if (0x7fff < uVar2) {
    uVar2 = 0x7fff;
  }
  (*(code *)0x10453098/*ROM*/)(*(uint32_t *)(param_1 + 0x14),uVar2);
  (*(code *)0x1045302c/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*param_2);
  (*(code *)0x10453050/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[1]);
  (*(code *)0x10453074/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[2]);
  (*(code *)0x104530cc/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[3]);
  (*(code *)0x10452f92/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_2 + 4));
  (*(code *)0x10452fb4/*ROM*/)(*(uint32_t *)(param_1 + 0x14),(int)(uint)*(ushort *)(param_2 + 4) >> 1);
  (*(code *)0x10452fd6/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_2 + 4));
  (*(code *)0x10452ff8/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)((int)param_2 + 0x12));
  (*(code *)0x10453156/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,1);
  (*(code *)0x10453156/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,0);
  iVar1 = (*(code *)0x1045318c/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  while (iVar1 != 0) {
    iVar1 = (*(code *)0x1045318c/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  }
  set_bit_14_in_ram40030400(*(int *)(param_1 + 0x14) + 0x10,1);
  iVar1 = (*(code *)0x1045312e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  while (iVar1 == 0) {
    iVar1 = (*(code *)0x1045312e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  }
  (*(code *)0x104531a2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,1);
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffff1,0x80);
  (*(code *)0x104534a8/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x10453384/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  if (param_2[10] == 1) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  (*(code *)0x104532f4/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,uVar3);
  (*(code *)0x1045342e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  initialize_white_balance_tables(param_1,param_2[8]);
  (*(code *)0x104535dc/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,*(uint16_t *)(param_2 + 5));
  if (*(char *)(param_2 + 9) == '\0') {
    (*(code *)0x10453606/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,*(uint16_t *)((int)param_2 + 0x12));
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = (uint)*(ushort *)(param_2 + 4);
  }
  else {
    iVar1 = (*(code *)0x10452d50/*ROM*/)();
    if (iVar1 == 1) {
      uVar2 = 2;
    }
    else {
      iVar1 = (*(code *)0x10452d50/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
      if (iVar1 == 2) {
        uVar2 = 4;
      }
      else {
        iVar1 = (*(code *)0x10452d50/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
        uVar2 = 8;
        if (iVar1 != 3) {
          uVar2 = 1;
        }
      }
    }
    (*(code *)0x10453606/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,*(ushort *)((int)param_2 + 0x12) / uVar2);
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = *(ushort *)(param_2 + 4) / uVar2;
  }
  (*(code *)0x10453630/*ROM*/)(iVar1 + 0x11,uVar2);
  (*(code *)0x104533f4/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,*(char *)(param_2 + 0xb) != '\0');
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff2,0x2000);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff1,0x3c);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff0,0xff);
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  set_ram_flag_40030001(*(int *)(param_1 + 0x14) + 0x11,1);
  return;
}
