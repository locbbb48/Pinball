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

- [Video trình bày cấu trúc chương trình](https://drive.google.com/drive/u/0/folders/1w02Xtwy24GcA7c2UpSX1gHoPvmrJ3A4o)

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
6. [Về đồ họa của game](#6-về-đồ-họa-của-game)
7. [Về source code game](#7-về-source-code-game)
8. [Điểm khác so với game gốc](#8-điểm-khác-biệt-so-với-game-gốc)
9. [Lời tự đánh giá](#9-Lời-tự-đánh-giá-bản-thân-sau-khi-hoàn-thành-Project)

---

## 1. Cách tải game

### a. Cách 1: Không bao gồm code
- Tải bản phát hành mới nhất từ phần [Releases](https://github.com/locbbb48/Pinball/releases/tag/Public). Tệp này chỉ bao gồm trò chơi đã biên dịch và sẵn sàng để chơi.
  
![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Scr2.png)

- Tải xuống PinBall.Release.zip
- Giải nén và tìm file Pinball.exe trong tệp đã giải nén.
- Ấn vào file Pinball.exe và chơi game.

### b. Cách 2: Bao gồm code và có thể biên dịch
- Clone repository từ GitHub:
  
![image](https://github.com/locbbb48/Pinball/blob/main/Scr1)

- Biên dịch code bằng cách sử dụng môi trường phát triển có hỗ trợ SDL2 và Box2D.
## 2. Bắt đầu game
- Mở trò chơi bằng cách tìm file .exe trong file release đã tải về và bắt đầu trò chơi.
- Người chơi ban đầu sẽ có 5 quả bóng tương ứng cho 5 lượt choi.
- Đừng để lãng phí các quả bóng này và cố gắng giữ chúng tồn tại lâu nhất có thể.


## 3. Các thành phần trong game
- Ball: Bóng chính của trò chơi. Được khởi động lại bằng cách sử dụng launcher, ta cần giữ nó trên bàn chơi lâu nhất có thể.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/ball.png)

- Flippers: Các gậy giúp người chơi giữ bóng trên bàn chơi và điều khiển hướng của bóng.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/flippers.png)

- Launcher: Một cơ chế để khởi động bóng từ khu vực khởi đầu. Điều khiển bằng phím mũi tên xuống.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Launcher.png)

- Auto Kickers: Các cảm biến giúp đẩy bóng lên khỏi khi bóng chạm vào chúng.
  
	![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Auto%20Kicker.png)

- Bumpers: Khi bóng va chạm sẽ giúp tăng điểm cho người chơi.

	![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Bumper.png)

- Stars: Các ngôi sao mà bóng có thể chạm vào và phát sáng. Khi 3 ngôi sao cùng phát sáng, combo sẽ được kích hoạt

	![image](https://github.com/locbbb48/Pinball/blob/main/Assets/star.png)

- Nuggets: Các cảm biến mà bóng có thể chạm vào để ghi điểm, bóng chạm vào sẽ bị nảy ra với 1 lực.

	![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Nugget.png)

- Tornado: là một đối tượng đặc biệt trên bàn chơi, giúp tăng điểm, có khả năng hút bóng vào và đưa bóng đến 1 vị trí bất ngờ.

	![image](https://github.com/locbbb48/Pinball/blob/main/Assets/piece_tornado.png)

- Ball Eater: Khi bóng rơi vào, bóng sẽ bị giữ lại trong một thời gian nhất định trước khi được bắn ra lại với tốc độ bất ngờ.

![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Ball%20Eater.png)

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


### c. Điểm số và Combo
- Bumper ![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Bumper.png): Có ba bumper (leftBumper, midBumper, rightBumper) trên bàn chơi. Khi bóng va chạm với bất kỳ bumper nào, người chơi sẽ nhận được điểm:

	. 100 điểm nếu không có combo.
  
	. 200 điểm nếu có combo.

- Nuggets ![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Nugget.png): Có hai cảm biến nugget (right_nugget_sens, left_nugget_sens). Khi bóng chạm vào một cảm biến nugget, người chơi nhận điểm:

	. 250 điểm nếu không có combo.
  
	. 500 điểm nếu có combo.

- Tornado: Khi bóng chạm vào cảm biến tornado, người chơi nhận điểm:

 	 ![image](https://github.com/locbbb48/Pinball/blob/main/Assets/piece_tornado.png)

	. 2000 điểm nếu không có combo.
  
	. 4000 điểm nếu có combo.

- Ball Eater: Khi bóng chạm vào cảm biến ball eater:

  ![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Ball%20Eater.png)

	. 500 điểm nếu không có combo.
  
	.1000 điểm nếu có combo.

- Stars ![image](https://github.com/locbbb48/Pinball/blob/main/Assets/star.png): Có ba ngôi sao (leftStar, middleStar, rightStar). Khi bóng chạm vào một ngôi sao, nó sẽ sáng lên.

- Combo: Trong khi ba ngôi sao trên cùng sáng lên, số điểm mỗi lần bạn đạt được sẽ đều được nhân đôi.

	![image](https://github.com/locbbb48/Pinball/blob/main/Assets/Scr3.png)

## 5. Chiến thắng và thất bại
- Chiến thắng: Ghi điểm cao nhất có thể và cố gắng giữ không để bóng rơi khỏi bàn.
- Thất bại: Trò chơi kết thúc khi bóng rơi khỏi bàn 5 lần.
<video width="640" height="480" controls>
  <source src="https://github.com/locbbb48/Pinball/raw/main/Assets/Pinball_pre2.mp4" type="video/mp4">
  Your browser does not support the video tag.
</video>


---

## 6. Về đồ họa của game:
- Trò chơi sử dụng đồ họa đơn giản với màu sắc tươi sáng, mang đến cảm giác hoài cổ của pinball cổ điển.
- Đồ họa và Âm thanh của game được sưu tầm từ nhiều nguồn khác nhau, có thể là từ cắt ghép từ chính game gốc nhưng có chọn lọc và bổ sung thêm để mạng lại cảm giác chân thực nhất.

## 7. Về source code game:
- Source code của trò chơi được viết bằng C++ với sự hỗ trợ của các thư viện SDL2 và Box2D; Game được xây dựng dựa trên việc tạo ra các Module có tính kế thừa để quản lí từng phần của game.
- Thư viện:


	. SDL2: Được sử dụng để xử lý đồ họa 2D, âm thanh, và sự kiện người dùng.


	. Box2D:là một thư viện vật lý 2D mã nguồn mở, giúp mô phỏng các hành vi vật lý thực tế trong trò chơi. Box2D cung cấp các công cụ để xử lý các va chạm, trọng lực, và các lực tác động khác trong môi trường 2D.
Box2D giúp mô phỏng vật lý chính xác cho các đối tượng trên bàn pinball, bao gồm các va chạm giữa bóng và các mục tiêu, tác động của trọng lực lên bóng, và các tương tác khác. Thư viện hỗ trợ tạo ra một trải nghiệm chơi game chân thực và mượt mà.
- Mô tả chung về các Module:

  
  	. ModuleWindow: quản lý cửa sổ ứng dụng, là bước khởi đầu cho bất kỳ chương trình đồ họa nào, thực hiện các tác vụ khác như render, input, hoặc hiển thị hình ảnh.

  
	. ModuleRender: quản lý việc render nội dung lên cửa sổ. ModuleRender sẽ chịu trách nhiệm vẽ mọi thứ lên màn hình.


	. ModuleInput: quản lý các đầu vào từ người dùng, như bàn phím và chuột để điều khiển nhân vật hoặc tương tác với các thành phần khác của game.


	. ModuleTextures: quản lý việc tải và lưu trữ các hình ảnh, sprite. Các texture này sẽ được sử dụng trong quá trình render, vì vậy cần phải có trước khi render các đối tượng phức tạp.


	. ModuleAudio: xử lý âm thanh trong trò chơi, bao gồm nhạc nền và hiệu ứng âm thanh, tạo trải nghiệm đa phương tiện cho người chơi.


	. ModulePhysics: quản lý các quy luật vật lý trong trò chơi, cần thiết cho việc xử lý va chạm, trọng lực, và các động lực khác vì trò chơi có các yếu tố vật lý như di chuyển hoặc tương tác giữa các đối tượng.


	. ModuleSceneIntro: quản lý trò chơi. Module này sử dụng tất cả các module trước đó để hiển thị game.


	. ModulePlayer: ử dụng tất cả các thành phần đã được tạo ra trước đó (cửa sổ, render, input, audio, physics) để điều khiển lối chơi.
  


---


## 8. Điểm khác biệt so với game gốc:
  ```bash
	Tính năng		|		Game gốc				|		My Game
 Hiển thị điểm số	|Điểm số được hiển thị trong trò chơi.			|Điểm số được hiển thị trên tiêu đề cùng với số mạng còn lại.

 Sự xuất hiện của bóng	|Tất cả các bóng được sinh ra vào đầu trò chơi.		|Một bóng được sinh ra và được tái sinh khi người chơi mất một mạng.

 Cơn lốc (Tornado)	|Cơn lốc trên bên trái làm bóng xoay và khi bóng rơi 	|Cơn lốc chỉ sinh ra bóng ở trên cùng của bản đồ khi bóng rơi vào lỗ.
				 vào lỗ, nó sẽ được sinh ra lại ở trên cùng của bản đồ.	
 Tính năng Combo		|Không có.						|Khi ba ngôi sao trên cùng được sáng lên, điểm số bạn nhận được sẽ được nhân đôi (x2).

```

---

## 9. Lời tự đánh giá bản thân sau khi hoàn thành Project:
### Điểm tốt nổi bật:
- Project được sử dụng nhiều kĩ thuật lập trình nổi bật, trong đó áp dụng được nhiều kiến thức lí thuyết đã học trong môn LTNC:

	. Sử dụng Danh sách liên kết: Dự án sử dụng danh sách liên kết (p2List) để quản lý các module trong game. Danh sách này giúp dễ dàng thêm, xóa, hoặc duyệt qua các module mà không cần phải biết trước 		kích thước hoặc vị trí của các phần tử. Ví dụ: Trong Application::AddModule(Module* mod), các module được thêm vào danh sách liên kết để quản lý và gọi các hàm Init, Start, Update, và CleanUp theo trình 	tự.
  
	. Sử dụng con trỏ trỏ raw (new và delete) để quản lý bộ nhớ cho các module trong game. Điều này đòi hỏi lập trình viên phải cẩn thận để tránh các lỗi liên quan đến quản lý bộ nhớ như rò rỉ bộ nhớ 		(memory leak) hoặc xóa đối tượng nhiều lần. Ví dụ: Trong Application::~Application(), các module được xóa theo thứ tự ngược lại với thứ tự khởi tạo để đảm bảo mọi tài nguyên được giải phóng đúng cách.

- Sử dụng 1 số Design Pattern chuyên dụng và nổi bật cho việc làm game như:

  	. Singleton: 1 Design Patterm để đảm bảo chỉ có một instance duy nhất của lớp Application. Điều này giúp dễ dàng quản lý các tài nguyên và trạng thái toàn cục của game. Ví dụ: Application là một 		singleton, và nó được tạo và quản lý trong hàm main. Chỉ có một instance duy nhất của Application trong suốt vòng đời của chương trình.

  	. Module Pattern: Dự án tổ chức code thành các module riêng biệt, mỗi module chịu trách nhiệm cho một phần cụ thể của game như ModuleRender, ModuleWindow, ModuleInput, ModuleAudio, ModulePlayer, và 		ModulePhysics. Điều này giúp tách biệt các chức năng, giảm sự phụ thuộc giữa các thành phần, và dễ bảo trì hơn.

	.Template Method Pattern: Các phương thức Update trong các module được triển khai theo template method pattern. Mỗi module có thể triển khai riêng các phương thức PreUpdate, Update, và PostUpdate để xác 	định hành vi cụ thể của nó, trong khi thứ tự gọi các phương thức này được quản lý tập trung trong lớp Application.

- Sử dụng và tuân thủ các quy tắc của OOP: Dự án game Pinball được xây dựng dựa trên nền tảng lập trình hướng đối tượng (OOP), nơi mỗi chức năng chính của trò chơi được đóng gói trong các module khác nhau. Các module này đại diện cho các lớp (class) trong C++, mỗi module chịu trách nhiệm cho một phần cụ thể của trò chơi như âm thanh, xử lý vật lý, đồ họa, và điều khiển của người chơi.

	. Đóng gói: Mỗi module quản lý trạng thái và hành vi riêng của nó, không để lộ chi tiết triển khai ra bên ngoài. Điều này giúp mã nguồn dễ bảo trì và tránh xung đột giữa các phần khác nhau của chương 	trình.
  
  	. Kế thừa: Một số module có thể kế thừa từ các lớp cơ sở để chia sẻ các thuộc tính và phương thức chung.

  	.Đa hình: Được sử dụng để cho phép các module khác nhau có thể được xử lý theo cùng một cách thông qua con trỏ lớp cơ sở, điều này rất hữu ích trong việc quản lý vòng đời của các module và gọi các 		phương thức chung như Init(), Update(), và CleanUp().

- Sử dụng Logging: Dự án sử dụng các macro logging để ghi lại thông tin về quá trình khởi động, cập nhật, và dọn dẹp của game. Điều này rất hữu ích cho việc debug và theo dõi hoạt động của game.

- Tính mở rộng: Kiến trúc của dự án được thiết kế để dễ dàng mở rộng. Các module có thể được thêm mới hoặc sửa đổi mà không ảnh hưởng nhiều đến các phần còn lại của game.

- Tự tìm hiểu và làm việc với 1 thư viện mới là Box2D: Việc sử dụng thêm 1 thư viện về vật lí giúp em khám phá ra nhiều điều thú vị và mới mẻ về sự mô phỏng lại thế giới vật lí bằng code. Các quy luật về vật lí như va chạm, trọng lực, và động lực học của các vật thể được mô phỏng lại chi tiết theo quy luật thực tế. Khi tích hợp Box2D vào dự án game Pinball, nó mang lại nhiều cải tiến và khác biệt so với việc sử dụng các hệ thống vật lý đơn giản hoặc không có hệ thống vật lý. Vậy nên Project này với em không chỉ đơn thuần là cố gắng tạo 1 con game pinball cổ điển, mà còn là trải nghiệm thêm những gì code có thể làm được trong việc tái tạo và mô phỏng lại những gì có trong thực tế, như trong project này là vật lí cơ bản.

### 1 số hạn chế mà bản thân tự nhận ra:

- Giao diện đồ họa và âm thanh đơn giản vì chủ yếu cắt ghép từ game gốc.
  
- Chưa có nhiều điểm khác biệt về lối chơi do chủ yếu bận tâm về tìm hiểu các quy tắc vật lí.

- Thiếu thời gian để cải tiến thêm về hệ thống điểm thưởng cũng như các quy tắc khác cho game.

### Những kinh nghiệm rút ra cho bản thân sau project và Kết luận:

- Tầm quan trọng của quản lý bộ nhớ: Việc quản lý bộ nhớ thủ công với con trỏ raw trong C++ đòi hỏi lập trình viên phải cực kỳ cẩn thận để tránh các lỗi như rò rỉ bộ nhớ hoặc xóa đối tượng nhiều lần. Điều này nhấn mạnh tầm quan trọng của việc hiểu rõ về quản lý bộ nhớ trong C++.

- Tính module hóa và giảm phụ thuộc giữa các thành phần: Mặc dù đã có sự phân chia các chức năng thành các module, vẫn cần chú ý đến việc giảm sự phụ thuộc giữa các module để tăng tính linh hoạt và khả năng mở rộng của dự án. Điều này giúp dễ dàng thay đổi hoặc mở rộng các phần của game mà không ảnh hưởng đến toàn bộ hệ thống.

- Giá trị của giao diện người dùng và trải nghiệm âm thanh trong việc xây dựng 1 hệ thống: Giao diện đồ họa và âm thanh đóng vai trò quan trọng trong việc tạo ra trải nghiệm hấp dẫn cho người chơi. Một giao diện đơn giản hoặc thiếu các hiệu ứng âm thanh có thể khiến game kém hấp dẫn so với các tiêu chuẩn hiện đại. ==> Kinh nghiệm: Đầu tư vào thiết kế giao diện người dùng (UI/UX) và hệ thống âm thanh để tạo ra trải nghiệm phong phú hơn cho người chơi, đồng thời cân nhắc sử dụng các công nghệ và công cụ mới để cải thiện chất lượng đồ họa và âm thanh.

- Sự cần thiết của các hệ thống game phức tạp hơn: Hệ thống game cơ bản, như ghi điểm đơn giản, có thể chưa đủ để duy trì sự hứng thú của người chơi trong thời gian dài. Các hệ thống phức tạp hơn như combo, phần thưởng, và nâng cấp có thể làm cho game hấp dẫn và thử thách hơn.

- Hiểu sâu về tích hợp vật lý bằng code: Tích hợp Box2D giúp mang lại sự chân thực và chính xác trong việc mô phỏng vật lý trong game. Điều này có thể tạo thêm cảm hứng cho em khi muốn thiết kế các project về sau này.

==> Kết luận:
"Pinball Game" không chỉ là một bài tập lớn môn lập trình nâng cao mà còn là một cơ hội cho em để học hỏi về cách quản lý dự án phần mềm, tối ưu hóa mã nguồn, và tạo ra một sản phẩm có tính khả thi. Những bài học rút ra từ dự án này sẽ là nền tảng vững chắc cho các dự án tương lai, giúp cải thiện kỹ năng lập trình, thiết kế phần mềm, và khả năng giải quyết vấn đề trong thực tế. Sau cùng, Em cũng xin gửi cảm ơn Thầy Lê Đức Trọng và cô Hoàng Thị Ngọc Trang đã dạy bảo và giúp đỡ em trong môn LTNC để em có thể hoàn thành được project này tốt nhất có thể và rút ra những bài học quý báu cho bản thân em trong tương lai.

  
  
