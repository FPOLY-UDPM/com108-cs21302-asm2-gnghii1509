#include <stdio.h>

int main() {
    int chonChucNang;

    do {
        printf("Chon chuc nang:\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chonChucNang);

        switch (chonChucNang) {
            case 1:
                // Gọi hàm kiểm tra số nguyên
                printf("DA CHON CHUC NANG 1: KIEM TRA SO NGUYEN\n");
                float soDuocnhap;
                printf("Nhap so can kiem tra: ");
                scanf("%f", &soDuocnhap);
                if (soDuocnhap == (int)soDuocnhap) {
                    printf("%.2f la so nguyen.\n", soDuocnhap);
                } else {
                    printf("%.2f khong phai la so nguyen.\n", soDuocnhap);
                }
                break;
            case 2:
                // Gọi hàm tìm Ước số chung và bội số chung
                printf("DA CHON CHUC NANG 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO\n");
                break;
                float so1, so2;
                printf("Nhap so thu nhat: ");
                scanf("%f", &so1);
                printf("Nhap so thu hai: ");
                scanf("%f", &so2);
                if (so1 == (int)so1 && so2 == (int)so2) {
                    int a = (int)so1;
                    int b = (int)so2;
                    int uocSoChung = 1;
                    for (int i = 1; i <= (a < b ? a : b); i++) {
                        if (a % i == 0 && b % i == 0) {
                            uocSoChung = i;
                        }
                    }
                    int boiSoChung = (a * b) / uocSoChung;
                    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, uocSoChung);
                    printf("Boi so chung nho nhat cua %d va %d la: %d\n", a, b, boiSoChung);
                } else {
                    printf("Vui long nhap hai so nguyen.\n");
                }
            case 3:
                // Gọi hàm tính tiền cho quán Karaoke
                printf("DA CHON CHUC NANG 3: TINH TIEN CHO QUAN KARAOKE\n");
                float soGio;
                printf("Nhap so gio thue phong: ");
                scanf("%f", &soGio);
                float tienThue;
                if (soGio <= 3) {
                    tienThue = soGio * 30000;
                } else {
                    tienThue = 3 * 30000 + (soGio - 3) * 50000;
                }
                break;
            case 4:
                // Gọi hàm tính tiền điện
                printf("DA CHON CHUC NANG 4: TINH TIEN DIEN\n");
                float soDien;
                printf("Nhap so dien tieu thu trong thang: ");
                scanf("%f", &soDien);
                float tienDien;
                if (soDien <= 50) {
                    tienDien = soDien * 1000;
                } else {
                    tienDien = 50 * 1000 + (soDien - 50) * 1200;
                }
                break;
            case 5:
                // Gọi hàm đổi tiền
                printf("DA CHON CHUC NANG 5: DOI TIEN\n");
                float soTienUSD;
                printf("Nhap so tien can doi (USD): ");
                scanf("%f", &soTienUSD);
                float tyGia = 23000; // Giả sử tỷ giá là 1 USD = 23,000 VND
                float soTienVND = soTienUSD * tyGia;
                printf("So tien sau khi doi: %.2f VND\n", soTienVND);

                break;
            case 6:
                // Gọi hàm tính lãi suất vay ngân hàng
                printf("DA CHON CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP\n");
                float soTienVay, laiSuatNam, thoiGianVay;
                printf("Nhap so tien vay (VND): ");
                scanf("%f", &soTienVay);
                printf("Nhap lai suat nam (%%): ");
                scanf("%f", &laiSuatNam);
                printf("Nhap thoi gian vay (nam): ");
                scanf("%f", &thoiGianVay);
                float tienLai = soTienVay * (laiSuatNam / 100) * thoiGianVay;
                float tongSoTienPhaiTra = soTienVay + tienLai;
                printf("Tong so tien phai tra sau %.2f nam la: %.2f VND\n", thoiGianVay, tongSoTienPhaiTra);

                break;
            case 7:
                // Gọi hàm vay tiền mua xe
                printf("DA CHON CHUC NANG 7: VAY TIEN MUA XE\n");
                float giaXe, soThangVay;
                printf("Nhap gia xe (VND): ");
                scanf("%f", &giaXe);
                printf("Nhap so thang vay: ");
                scanf("%f", &soThangVay);
                float tienLaiXe = giaXe * 0.05; // Giả sử lãi suất cố định 5%
                float tongTienPhaiTraXe = giaXe + tienLaiXe;
                float tienTraHangThang = tongTienPhaiTraXe / soThangVay;
                printf("Tien phai tra hang thang: %.2f VND\n", tienTraHangThang);

                break;
            case 8:
                // Gọi hàm sắp xếp thông tin sinh viên
                printf("DA CHON CHUC NANG 8: SAP XEP THONG TIN SINH VIEN\n");
                float diemSinhVien[3];
                for (int i = 0; i < 3; i++) {
                    printf("Nhap diem sinh vien thu %d: ", i + 1);
                    scanf("%f", &diemSinhVien[i]);
                }
                // Sắp xếp điểm sinh viên theo thứ tự tăng dần
                for (int i = 0; i < 2; i++) {
                    for (int j = i + 1; j < 3; j++) {
                        if (diemSinhVien[i] > diemSinhVien[j]) {
                            float temp = diemSinhVien[i];
                            diemSinhVien[i] = diemSinhVien[j];
                            diemSinhVien[j] = temp;
                        }
                    }
                }
                break;
            case 9:
                // Gọi hàm game FPOLY-LOTT
                printf("DA CHON CHUC NANG 9: GAME FPOLY-LOTT\n");
                float soChon;
                printf("Nhap so ban chon (tu 1 den 10): ");
                scanf("%f", &soChon);
                printf("Ban da chon so: %.2f\n", soChon);
                
                break;
            case 10:
                // Gọi hàm tính toán phân số
                printf("DA CHON CHUC NANG 10: TINH TOAN PHAN SO\n");
                float tuSo1, mauSo1, tuSo2, mauSo2;
                printf("Nhap tu so va mau so phan so thu nhat: ");
                scanf("%f %f", &tuSo1, &mauSo1);
                printf("Nhap tu so va mau so phan so thu hai: ");
                scanf("%f %f", &tuSo2, &mauSo2);
                float tongTuSo = tuSo1 * mauSo2 + tuSo2 * mauSo1;
                float tongMauSo = mauSo1 * mauSo2;
                printf("Tong hai phan so la: %.2f/%.2f\n", tongTuSo, tongMauSo);
                
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chonChucNang != 0);

    return 0;
}