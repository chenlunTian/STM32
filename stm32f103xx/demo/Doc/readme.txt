1、所有外設初始化均在SYSTEM.C的void HardWave_Init(void)裏。
2、本套程序中斷優先級為第2組，(2個搶占，2個響應)數字越小對應優先級越高
3、采用前後臺系統，輪詢調度（中小型項目用的好的話堪比實時操作系統）
4、串口的接收采用環形隊列緩衝區，添加了山外虛擬示波器的支持
5、串口重定向為串口1，即串口1可使用printf()函數直接打印