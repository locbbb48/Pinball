# Pinball
/*	  - Code by Bui Thanh Loc -
	contact : builoc08042004@gmail.com
*/

- Bài tập lập trình tại UET, dự án game sử dụng ngôn ngữ C++, thư viện SDL2 và Box2D. Trò chơi không có cốt truyện phức tạp mà tập trung vào lối chơi pinball cổ điển. Người chơi điều khiển 2 que gậy để giữ bóng trên mà chơi và ghi điểm bằng cách va chạm với các mục tiêu chỉ định.
- Theo như giấy phép đã nêu, bất kỳ ai cũng có thể xem hoặc sửa đổi mã của dự án này.
- Game Origin: Pepsi Max Pinball.
![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Map.png)

**Giảng viên hướng dẫn**: TS. Lê Đức Trọng

---

## Mục lục:
1. [Cách tải game](#1-cách-tải-game)
   - [a. Cách 1: Không bao gồm code](#a-cách-1-không-bao-gồm-code)
   - [b. Cách 2: Bao gồm code và có thể biên dịch](#b-cách-2-bao-gồm-code-và-có-thể-biên-dịch)
2. [Bắt đầu game](#2-bắt-đầu-game)
3. [Các thành phần trong game](#3-các-thành-phần-trong-game)
4. [Cách chơi](#4-cách-chơi)
   - [a. Mục tiêu](#a-mục-tiêu)
   - [b. Cách điều khiển](#b-cách-điều-khiển)
   - [c. Điểm số và Combo](#c-điểm-số-và-combo)
5. [Chiến thắng và thất bại](#5-chiến-thắng-và-thất-bại)
6. [Về đồ họa của game](#về-đồ-họa-của-game)
7. [Về source code game](#về-source-code-game)
8. 

---

## 1. Cách tải game

### a. Cách 1: Không bao gồm code
- Tải bản phát hành mới nhất từ phần [Releases](https://github.com/your-repo/releases). Tệp này chỉ bao gồm trò chơi đã biên dịch và sẵn sàng để chơi.

### b. Cách 2: Bao gồm code và có thể biên dịch
- Clone repository từ GitHub:
 
- Biên dịch code bằng cách sử dụng môi trường phát triển có hỗ trợ SDL2 và Box2D.
## 2. Bắt đầu game
- Mở trò chơi bằng cách tìm file .exe trong file release đã tải về và bắt đầu trò chơi.
- Người chơi ban đầu sẽ có 3 quả bóng chơi lần lượt. 3 quả bóng tương ứng cho 3 lượt choi.
- Đừng để lãng phí các quả bóng này và cố gắng giữ chúng tồn tại lâu nhất có thể.


## 3. Các thành phần trong game
- Bóng: Di chuyển tự do trên bàn và phản ứng với các va chạm.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/ball.png)

- Gậy: Được điều khiển bởi người chơi để giữ bóng trên bàn.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/flippers.png)

- Mục tiêu: Các đối tượng trên bàn mà bóng có thể va vào để ghi điểm.


## 4. Cách chơi
### a. Mục tiêu
- Mục tiêu của trò chơi là ghi càng nhiều điểm càng tốt bằng cách sử dụng các gậy để giữ bóng trong bàn chơi, đánh bóng vào các mục tiêu và tăng điểm số.
- Sẽ có các mục tiêu bất ngờ để tăng điểm cũng như các mục tiêu có thể khiến bạn gặp khó khăn khi chơi, hãy luôn giữ tỉnh táo.

### b. Cách điều khiển
- Phím Trái (Left) và Phím Phải (Right): Dùng để điều khiển các gậy trái và phải trên bàn pinball.


- Phím Space: Sử dụng để bắn bóng ra khỏi khởi điểm.


- Phím R: Sử dụng để bắt đầu lại trò chơi.


- F1: Tắt/Bật xử lí va chạm

- Các mục tiêu: Va chạm bóng vào các mục tiêu trên bàn để ghi điểm. Các mục tiêu có thể là các bumper, ramps, và targets.
### c. Điểm số và Combo
- Bumper Points: Mỗi lần bóng va chạm với bumper, bạn sẽ nhận được một lượng điểm nhất định.


- Ramp Combo: Điều hướng bóng qua các đường ramp để nhận được điểm combo.


- Multiplier: Trong khi ba ngôi sao trên cùng sáng lên, số điểm bạn đạt được sẽ được nhân đôi.


## 5. Chiến thắng và thất bại
- Chiến thắng: Ghi điểm cao nhất có thể và cố gắng giữ không để bóng rơi khỏi bàn.
- Thất bại: Trò chơi kết thúc khi bóng rơi khỏi bàn 3 lần.


---

## Về đồ họa của game:
- Trò chơi sử dụng đồ họa đơn giản với màu sắc tươi sáng, mang đến cảm giác hoài cổ của pinball cổ điển.

## Về source code game:
- Source code của trò chơi được viết bằng C++ với sự hỗ trợ của các thư viện SDL2 và Box2D.

SDL2: Được sử dụng để xử lý đồ họa 2D, âm thanh, và sự kiện người dùng.
Box2D: Thư viện vật lý 2D giúp mô phỏng các tương tác vật lý chân thực giữa các đối tượng trên bàn pinball.
Pinball là một trò chơi đơn giản và cổ điển, được phát triển để mang lại trải nghiệm chơi game thú vị và mượt mà.

---


## Điểm khác biệt so với game gốc:
  ```bash
	Tính năng	|		Game gốc				|		My Game
 Hiển thị điểm số	|Điểm số được hiển thị trong trò chơi.			|Điểm số được hiển thị trên tiêu đề cùng với số mạng còn lại.
			|							|								
 Sự xuất hiện của bóng	|Tất cả các bóng được sinh ra vào đầu trò chơi.		|Một bóng được sinh ra và được tái sinh khi người chơi mất một mạng.
			|							|	
 Cơn lốc (Tornado)	|Cơn lốc trên bên trái làm bóng xoay và khi bóng rơi 	|Cơn lốc chỉ sinh ra bóng ở trên cùng của bản đồ khi bóng rơi vào lỗ.
			|vào lỗ, nó sẽ được sinh ra lại ở trên cùng của bản đồ.	|
			|							|
 Tính năng Combo	|Không có.						|Khi ba ngôi sao trên cùng được sáng lên, điểm số bạn nhận được sẽ được nhân đôi (x2).
