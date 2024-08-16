# Pinball
/*	  - Code by Bui Thanh Loc -
	contact : builoc08042004@gmail.com
*/

Bài tập lập trình tại UET, dự án game sử dụng ngôn ngữ C++, thư viện SDL2 và Box2D.

Game Origin: Pepsi Max Pinball.
![image](https://github.com/user-attachments/assets/b56d714d-f158-459a-80f6-5049245e4736)

**Giảng viên hướng dẫn**: TS. Lê Đức Trọng

---

## Trò chơi không có cốt truyện phức tạp mà tập trung vào lối chơi pinball cổ điển. Người chơi điều khiển 2 que gậy để giữ bóng trên mà chơi và ghi điểm bằng cách va chạm với các mục tiêu chỉ định.
1. [Cách tải game](#1-cách-tải-game)
   - [a. Cách 1: Không bao gồm code](#a-cách-1-không-bao-gồm-code)
   - [b. Cách 2: Bao gồm code và có thể biên dịch](#b-cách-2-bao-gồm-code-và-có-thể-biên-dịch)
2. [Bắt đầu game](#2-bắt-đầu-game)
3. [Các thành phần trong game](#3-các-thành-phần-trong-game)
4. [Cách chơi](#4-cách-chơi)
   - [a. Mục tiêu](#a-mục-tiêu)
   - [b. Cách điều khiển](#b-cách-điều-khiển)
   - [c. Điểm số và Combo](#c-điểm-số-và-combo)
   - [d. Giữ bóng và Lắc bàn (Tilt)](#d-giữ-bóng-và-lắc-bàn-tilt)
5. [Chiến thắng và thất bại](#5-chiến-thắng-và-thất-bại)
6. [Về đồ họa của game](#về-đồ-họa-của-game)
7. [Về source code game](#về-source-code-game)

---

## 1. Cách tải game

### a. Cách 1: Không bao gồm code
Tải bản phát hành mới nhất từ phần [Releases](https://github.com/your-repo/releases). Tệp này chỉ bao gồm trò chơi đã biên dịch và sẵn sàng để chơi.

### b. Cách 2: Bao gồm code và có thể biên dịch
- Clone repository từ GitHub:
  ```bash
  git clone https://github.com/your-repo/pepsi-pinball.git
Biên dịch code bằng cách sử dụng môi trường phát triển có hỗ trợ SDL2 và Box2D.
## 2. Bắt đầu game
Mở trò chơi và sử dụng các phím điều khiển left và right để điều khiển các gậy, bắt đầu hành trình ghi điểm của bạn trên bàn pinball.


## 3. Các thành phần trong game
Bóng: Di chuyển tự do trên bàn và phản ứng với các va chạm.
Assets/arrow.png
Gậy: Được điều khiển bởi người chơi để giữ bóng trên bàn.

Mục tiêu: Các đối tượng trên bàn mà bóng có thể va vào để ghi điểm.


## 4. Cách chơi
### a. Mục tiêu
Mục tiêu của trò chơi là ghi càng nhiều điểm càng tốt bằng cách sử dụng các gậy để giữ bóng trong bàn chơi, đánh bóng vào các mục tiêu và tăng điểm số.

### b. Cách điều khiển
Phím Trái (Left) và Phím Phải (Right): Dùng để điều khiển các gậy trái và phải trên bàn pinball.
Phím Space: Sử dụng để bắt đầu trò chơi và bắn bóng ra khỏi khởi điểm.
Các mục tiêu: Va chạm bóng vào các mục tiêu trên bàn để ghi điểm. Các mục tiêu có thể là các bumper, ramps, và targets.
### c. Điểm số và Combo
Bumper Points: Mỗi lần bóng va chạm với bumper, bạn sẽ nhận được một lượng điểm nhất định.
Ramp Combo: Điều hướng bóng qua các đường ramp để nhận được điểm combo.
Multiplier: Ghi điểm vào một số mục tiêu đặc biệt có thể tăng hệ số nhân điểm (multiplier), giúp bạn ghi được nhiều điểm hơn cho mỗi lần va chạm tiếp theo.
### d. Giữ bóng và Lắc bàn (Tilt)
Giữ bóng: Người chơi có thể sử dụng gậy để giữ bóng, sau đó thả ra để thực hiện các cú đánh chính xác.
Lắc bàn (Tilt): Một số phiên bản có chức năng lắc bàn pinball để thay đổi quỹ đạo của bóng, nhưng hãy cẩn thận vì lạm dụng có thể dẫn đến mất kiểm soát (tilt warning).


## 5. Chiến thắng và thất bại
Chiến thắng: Ghi điểm cao nhất có thể mà không để bóng rơi khỏi bàn.
Thất bại: Trò chơi kết thúc khi bóng rơi khỏi bàn mà không thể đánh lại được.


---

## Về đồ họa của game:
Trò chơi sử dụng đồ họa đơn giản với màu sắc tươi sáng, mang đến cảm giác hoài cổ của pinball cổ điển.

## Về source code game:
Source code của trò chơi được viết bằng C++ với sự hỗ trợ của các thư viện SDL2 và Box2D.

SDL2: Được sử dụng để xử lý đồ họa 2D, âm thanh, và sự kiện người dùng.
Box2D: Thư viện vật lý 2D giúp mô phỏng các tương tác vật lý chân thực giữa các đối tượng trên bàn pinball.
Pinball là một trò chơi đơn giản và cổ điển, được phát triển để mang lại trải nghiệm chơi game thú vị và mượt mà.
