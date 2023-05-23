// A6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdlib.h>
#include<time.h>	

/*int main()
{
	srand(time(NULL)); rand();//圓周率
	float n = 0;
	for (int i = 0; i < 1000000; i++){
		float x=rand()*1.0/RAND_MAX;
		float y=rand() * 1.0 / RAND_MAX;
		if ( x * x + y * y < 1)n++;
	}
	std::cout << n / 1000000 * 0.4 <<"\n";
}*/
float z()//隨機數
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += rand() * 1.0 / RAND_MAX;
	return sum - 6.0;
}
/*int main() {
	srand(time(NULL)); rand();	//平均身高
	int n = 0;
	for (int i = 0; i < 1000000; i++) {
		float x = 170 + z() * 5.0;
		if (x > 175 && x < 180)n++;
	}
	std::cout << n / 1000000.0 << "\n";
}*/

/*int main() {
	srand(time(NULL)); rand();	//平均身高比較
	int n = 0;
	for (int i = 0; i < 1000000; i++) {
		float x = 170 + z() * 6.0;
		float y = 165 + z() * 5.0;
		if (x<y )n++;
	}
	std::cout << n / 1000000.0 << "\n";
}*/
int main() {
	srand(time(NULL)); rand();	//範圍內平均數最大值比較
	int n = 0;
	for (int i = 0; i < 100000; i++) {
		float max_x=0;
		for (int j=0;j<10;j++)
		{
			float x = 120 + z()  * 15.0;
			if (x > max_x) max_x=x ;
		}
		float max_y = 0;
		for (int j = 0; j < 10; j++)
		{
			float y = 110 + z()  * 20.0;
			if (y > max_y)max_y = y;
		}
		if (max_x > max_y) n++;
	}
	std::cout << n / 100000.0 << "\n";
}
/*float f(float x) { //面積
	return 2 * x + 1;
}
int main() { //圖形面積隨機數 必考!
	srand(time(NULL)); rand();
	float a=1.0;
	float b=3.0;
	int n = 0;
	for (int i=0; i < 1000000; i++) {
		float x =rand()*(b-a)/RAND_MAX;
		float y=rand()*8.0/RAND_MAX;
		if (y > f(x))n++;
	}
	std::cout << n /1000000.0 * 8.0 * (b-a) << "\n";//底2 高8 平均數 約 10+-
}*/

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
