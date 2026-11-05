#include <stdio.h>

int main(){
dtb = float(input())
drl = float(input())

if dtb >= 9.0:
   hoc_luc = "XUAT_SAC"
elif dtb >= 8.0:
   hoc_luc = "GIOI"
elif dtb >= 7.0:
  hoc_luc = "KHA" 
else
  hoc_luc = "KHONG_DAT"
if drl >= 90:
  ren_luyen = "XUAT_SAC"
elif drl >= 80:
  ren_luyen = "TOT"
elif drl >=70:
  ren_luyen = "KHA"
else
  ren_luyen = "KHONG_DAT"


if hoc_luc=="XUAT_SAC" and ren_luyen == "XUAT_SAC":
  printf("HOC_BONG_XUAT_SAC")
elif (hoc_luc == "GIOI" and (ren_luyen == "TOT or ren_luyen == "XUAT_SAC")) or (hoc_luc == "XUAT_SAC" and ren_luyen == "TOT"):
  printf("HOC_BONG_GIOI")
else:
  printf("KHONG_DUOC_HOC_BONG")
  return 0;
}