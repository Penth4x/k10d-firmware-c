/* @k10d run_memory_write_tests @ 0x10472b6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint run_memory_write_tests(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  void *puVar10;
  void *pvVar11;
  uint uVar12;
  uintptr_t sp;
  uint8_t *puVar13;
  uint8_t auStack_3c [12];
  
  puVar13 = auStack_3c;
  pvVar11 = (void *)(0x1001000 - _DAT_105a9824/*ROM*/);
  pvVar7 = (void *)get_system_heap();
  uVar8 = mempool_get_block(pvVar7,pvVar11,0);
  if ((uVar8 & 0xfffff) != 0) {
    uVar8 = (uVar8 & 0xfff00000) + 0x100000;
  }
  uVar12 = 7;
  uVar6 = 0;
  do {
    uVar5 = 0;
    cVar2 = (&DAT_105a988c/*ROM*/)[uVar6];
    iVar3 = 0;
    do {
      *(char *)(uVar8 + *(int *)(&DAT_105a9824/*ROM*/ + iVar3)) = cVar2;
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar5 < 0x18);
    uVar5 = 0;
    iVar3 = 0;
    do {
      if (*(char *)(uVar8 + *(int *)(&DAT_105a9824/*ROM*/ + iVar3)) != cVar2) {
        uVar12 = uVar12 & 0xfffffffe;
        break;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar5 < 0x18);
    uVar6 = uVar6 + 1;
  } while ((uVar6 < 4) && (uVar12 == 7));
  check_kernel_call_success_10459fea(0x3e8);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar13 + 2) = 5;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,0,3,&DAT_105aa018/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,2,0,&DAT_105aa028/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  if (uVar12 == 7) {
    uVar6 = 0;
    do {
      *(char *)(uVar8 + 0x1000000 + uVar6) = (char)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x1000);
    uVar6 = 0;
    do {
      if ((uint)*(byte *)(uVar8 + 0x1000000 + uVar6) != (uVar6 & 0xff)) {
        uVar12 = 6;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x1000);
  }
  check_kernel_call_success_10459fea(0x3e8);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar13 + 2) = 5;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,0,3,&DAT_105aa040/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,2,0,&DAT_105aa050/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  uVar6 = 0;
  if (uVar12 == 7) {
    iVar3 = 0;
    do {
      uVar5 = 0;
      sVar1 = *(short *)(&DAT_105a98c8/*ROM*/ + iVar3);
      iVar4 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(short *)(uVar8 + *(int *)(&DAT_105a9890/*ROM*/ + iVar4)) = sVar1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < 0xc);
      uVar5 = 0;
      iVar4 = 0;
      do {
        if (*(short *)(uVar8 + *(int *)(&DAT_105a9890/*ROM*/ + iVar4)) != sVar1) {
          uVar12 = uVar12 & 0xfffffffd;
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < 0xc);
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 2;
    } while ((uVar6 < 4) && (uVar12 == 7));
  }
  check_kernel_call_success_10459fea(0x3e8);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar13 + 2) = 5;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,0,3,&DAT_105aa064/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,2,0,&DAT_105aa074/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  if (uVar12 == 7) {
    uVar6 = 0;
    iVar3 = 0;
    do {
      *(short *)(uVar8 + 0x1000000 + iVar3) = (short)uVar6;
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 2;
    } while (uVar6 < 0x800);
    uVar6 = 0;
    iVar3 = 0;
    do {
      if ((uint)*(ushort *)(uVar8 + 0x1000000 + iVar3) != (uVar6 & 0xffff)) {
        uVar12 = 5;
        break;
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 2;
    } while (uVar6 < 0x800);
  }
  check_kernel_call_success_10459fea(0x3e8);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar13 + 2) = 5;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,0,3,&DAT_105aa08c/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,2,0,&DAT_105aa09c/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  uVar6 = 0;
  if (uVar12 == 7) {
    iVar3 = 0;
    do {
      uVar5 = 0;
      iVar9 = *(int *)(&DAT_105a9908/*ROM*/ + iVar3);
      iVar4 = 0;
      do {
        uVar5 = uVar5 + 1;
        *(int *)(uVar8 + *(int *)(&DAT_105a98d0/*ROM*/ + iVar4)) = iVar9;
        iVar4 = iVar4 + 4;
      } while (uVar5 < 0xc);
      uVar5 = 0;
      iVar4 = 0;
      do {
        if (*(int *)(uVar8 + *(int *)(&DAT_105a98d0/*ROM*/ + iVar4)) != iVar9) {
          uVar12 = uVar12 & 0xfffffffb;
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < 0xc);
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar6 < 4) && (uVar12 == 7));
  }
  check_kernel_call_success_10459fea(0x3e8);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar13 + 2) = 5;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,0,3,&DAT_105aa0b4/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,2,0,&DAT_105aa0c4/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  if (uVar12 == 7) {
    uVar6 = 0;
    iVar3 = 0;
    do {
      *(uint *)(uVar8 + 0x1000000 + iVar3) = uVar6;
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar6 < 0x400);
    uVar6 = 0;
    iVar3 = 0;
    do {
      if (*(uint *)(uVar8 + 0x1000000 + iVar3) != uVar6) {
        uVar12 = 3;
        break;
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar6 < 0x400);
  }
  check_kernel_call_success_10459fea(0x3e8);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar13 + 2) = 5;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,0,3,&DAT_105aa0dc/*ROM*/,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  if ((uVar12 & 1) == 1) {
    puVar10 = &DAT_105aa0ec/*ROM*/;
  }
  else {
    puVar10 = &DAT_105aa104/*ROM*/;
  }
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,2,1,puVar10,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  if ((uVar12 & 2) == 2) {
    puVar10 = &DAT_105aa11c/*ROM*/;
  }
  else {
    puVar10 = &DAT_105aa134/*ROM*/;
  }
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,3,1,puVar10,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  if ((uVar12 & 4) == 4) {
    puVar10 = &DAT_105aa14c/*ROM*/;
  }
  else {
    puVar10 = &DAT_105aa164/*ROM*/;
  }
  *(uint16_t *)(puVar13 + 2) = 4;
  *(uint16_t *)(puVar13 + 6) = 0xff;
  puVar13[0xb] = 0;
  dispatch_actuator_drive_command(param_1,4,1,puVar10,*(uint16_t *)(puVar13 + 2),*(uint16_t *)(puVar13 + 6),
               puVar13[0xb]);
  return uVar12;
}
