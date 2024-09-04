//thu vien cam bien DHT11
#include <DHT.h>

// Cấu hình DHT
#define DHTPIN D4         //chan esp8266 ket noi cam bien DHT11
#define DHTTYPE DHT11     //loai cam bien
DHT dht(DHTPIN, DHTTYPE); //khai bao doi tuong dht thuoc class DHT , truyen vao 2 tham so: chan nao, loai sensor nao

//run one time khi cấp điện
void setup() {
  dht.begin();                                //khởi tạo dht : vô số lệnh trong thư viện đã làm việc với cảm biến
  Serial.begin(9600);
}

//hàm này mỗi khi chạy xong, hoặc đang chạy mà return: thì hàm này tự động được chạy lại: chạy mãi mãi mà ko cần có chỗ nào có lời gọi hàm này.
void loop() {
  int h = dht.readHumidity();     //đọc độ ẩm
  int t = dht.readTemperature();  //đọc nhiệt độ
  Serial.print("DHT11: Do am = ");
  Serial.print(h);
  Serial.print("% Nhiet do = ");
  Serial.print(t);  
  Serial.println("°C");
  delay(2000); // Đọc dữ liệu mỗi 2 giây, sau 2s hàm loop tự động đc gọi lại
}
