#include <stdio.h>

int main() {
  float so_km;
  int phi_ship = 0;

  printf("nhap so km giao hang: ");
  scanf("%f", &so_km
       
/ tinh phi dua tren khoang cach
f (so_km <= 0){
  printf("khoang cach khong hop le!\");
  return 0;  
}
  else if (so_km <= 2){
    phi_ship =1500; // duoi 2km: 15k
  } else if (so_km <= 5){
    phi_ship = 2500; // tu 2km den 5km: 25k
  } else if (so_km <= 10){
    phi_ship = 40000; // tu 5km den 10 km: 40k
  }else{
    // tren 10 km: 40k + 5k cho moi km phat sinh
    phi_ship 40000 + (so_km-10) * 5000
  }
  printf("phi giao hang cua ban la: %d VND\n", phi_ship);

  return 0;
}