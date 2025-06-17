#include<stdio.h>
int dem_so_luong_ki_tu_space(char *chuoi) {
	int dem = 0;
	int i=0;
	while (chuoi[i] != '\0') {
		if (chuoi[i] == ' ') {
			dem++;
		}
		i++;
	}
	return dem;
}
void main() {
	int dem;
	char chuoi[] = "H o t h anh";
	dem = dem_so_luong_ki_tu_space(chuoi);
	printf("So luong ki tu space la: %d", dem);
	return 0;
}