//thu vien cam bien DHT11
#include <DHT.h>

// Cấu hình DHT
#define DHTPIN D4         //chân esp8266 kết nối cảm bien DHT11
#define DHTTYPE DHT11     //loại cảm biến
DHT dht(DHTPIN, DHTTYPE); //khai báo đối tượng dht thuộc class DHT , truyền vào 2 tham số: chân nào, loại sensor nào

//run one time khi cấp điện
void setup() {
  dht.begin();            //khởi tạo dht : vô số lệnh trong thư viện đã làm việc với cảm biến
  Serial.begin(9600);     //khởi tạo truyền thông nối tiếp để debug
}

//hàm này mỗi khi chạy xong, hoặc đang chạy mà return: 
//thì hàm này tự động được chạy lại: chạy mãi mãi mà ko cần có chỗ nào có lời gọi hàm này.
void loop() {
  int h = dht.readHumidity();     // đọc độ ẩm
  int t = dht.readTemperature();  // đọc nhiệt độ
  Serial.print("DHT11: Do am = ");// debug h
  Serial.print(h);                // show h to uart
  Serial.print("% Nhiet do = ");  // debug t
  Serial.print(t);                // show t to uart
  Serial.println("°C");           // xuất xong dữ liệu thì xuống dòng
  delay(2000);                    // Đọc dữ liệu mỗi 2 giây, sau 2s hàm loop tự động đc gọi lại
}
