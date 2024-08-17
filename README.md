### [ENG](https://github.com/locbbb48/Pinball/edit/main/README_en.md)
# Pinball Game
**- Code by Bui Thanh Loc - contact : builoc08042004@gmail.com**

---

- Bài tập lập trình tại UET, dự án game sử dụng ngôn ngữ C++, thư viện SDL2 và Box2D.
- Theo như giấy phép đã nêu, bất kỳ ai cũng có thể xem hoặc sửa đổi mã của dự án này.
- Trò chơi không có cốt truyện phức tạp mà tập trung vào lối chơi pinball cổ điển. Người chơi điều khiển 2 que gậy để giữ bóng trên mà chơi và ghi điểm bằng cách va chạm với các mục tiêu chỉ định.
- Game Origin: Pepsi Max Pinball.
- **Giảng viên hướng dẫn**: TS. Lê Đức Trọng

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Map.png)


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
8. [Điểm khác so với game gốc](#8-điểm-khác-biệt-so-với-game-gốc)

---

## 1. Cách tải game

### a. Cách 1: Không bao gồm code
- Tải bản phát hành mới nhất từ phần [Releases](https://github.com/locbbb48/Pinball/tags). Tệp này chỉ bao gồm trò chơi đã biên dịch và sẵn sàng để chơi.
- Tải xuống PinBall.Release.zip
- Giải nén và tìm file Pinball.exe trong tệp đã giải nén.
- Ấn vào file Pinball.exe và chơi game.

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


- F1: Tắt/Bật hiển thị những phần có va chạm.

  ![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Collision.png)


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
- Source code của trò chơi được viết bằng C++ với sự hỗ trợ của các thư viện SDL2 và Box2D; Game được xây dựng dựa trên việc tạo ra các Module có tính kế thừa để quản lí từng phần của game.
- Thư viện:


	SDL2: Được sử dụng để xử lý đồ họa 2D, âm thanh, và sự kiện người dùng.


	Box2D:là một thư viện vật lý 2D mã nguồn mở, giúp mô phỏng các hành vi vật lý thực tế trong trò chơi. Box2D cung cấp các công cụ để xử lý các va chạm, trọng lực, và các lực tác động khác trong môi trường 2D.
Box2D giúp mô phỏng vật lý chính xác cho các đối tượng trên bàn pinball, bao gồm các va chạm giữa bóng và các mục tiêu, tác động của trọng lực lên bóng, và các tương tác khác. Thư viện hỗ trợ tạo ra một trải nghiệm chơi game chân thực và mượt mà.
- Mô tả chung về các Module:

  
  	ModuleWindow: quản lý cửa sổ ứng dụng, là bước khởi đầu cho bất kỳ chương trình đồ họa nào. Cửa sổ cần phải được khởi tạo trước khi có thể thực hiện các tác vụ khác như render, input, hoặc hiển thị hình ảnh.

  
	ModuleRender: quản lý việc render nội dung lên cửa sổ. ModuleRender sẽ chịu trách nhiệm vẽ mọi thứ lên màn hình.


	ModuleInput: quản lý các đầu vào từ người dùng, như bàn phím và chuột. Điều này rất quan trọng để điều khiển nhân vật hoặc tương tác với các thành phần khác của game.


	ModuleTextures: quản lý việc tải và lưu trữ các hình ảnh, sprite. Các texture này sẽ được sử dụng trong quá trình render, vì vậy cần phải có trước khi render các đối tượng phức tạp.


	ModuleAudio: xử lý âm thanh trong trò chơi, bao gồm nhạc nền và hiệu ứng âm thanh. Bạn cần khởi tạo âm thanh để tạo trải nghiệm đa phương tiện cho người chơi.


	ModulePhysics: quản lý các quy luật vật lý trong trò chơi, cần thiết cho việc xử lý va chạm, trọng lực, và các động lực khác. Điều này rất quan trọng nếu trò chơi có các yếu tố vật lý như di chuyển hoặc tương tác giữa các đối tượng.


	ModuleSceneIntro: quản lý cảnh đầu tiên của trò chơi. Module này sử dụng tất cả các module trước đó để hiển thị cảnh đầu tiên.


	ModulePlayer: ử dụng tất cả các thành phần đã được tạo ra trước đó (cửa sổ, render, input, audio, physics) để điều khiển lối chơi.
  


---


## 8. Điểm khác biệt so với game gốc:
  ```bash
	Tính năng		|		Game gốc				|		My Game
 Hiển thị điểm số	|Điểm số được hiển thị trong trò chơi.			|Điểm số được hiển thị trên tiêu đề cùng với số mạng còn lại.

 Sự xuất hiện của bóng	|Tất cả các bóng được sinh ra vào đầu trò chơi.		|Một bóng được sinh ra và được tái sinh khi người chơi mất một mạng.

 Cơn lốc (Tornado)	|Cơn lốc trên bên trái làm bóng xoay và khi bóng rơi 	|Cơn lốc chỉ sinh ra bóng ở trên cùng của bản đồ khi bóng rơi vào lỗ.
				 vào lỗ, nó sẽ được sinh ra lại ở trên cùng của bản đồ.	
 Tính năng Combo		|Không có.						|Khi ba ngôi sao trên cùng được sáng lên, điểm số bạn nhận được sẽ được nhân đôi (x2).
