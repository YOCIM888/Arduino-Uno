MorseRun库

简介：
MorseRun 是一个简单易用的莫尔斯电码库，可通过串口接收文本并自动转换为莫尔斯电码信号。
特性
自动从串口读取文本
支持字母A-Z和数字0-9
高电平触发蜂鸣器输出
简单易用的API

安装
1. 下载 MorseRun 库
2. 将库文件夹放置到 Arduino 的 libraries 目录
3. 重启 Arduino IDE

使用方法
基本示例
#include <MorseRun.h>

void setup() {
  Morse.begin(8);//设置数字引脚
  }

void loop() {
  Morse.run(); //处理串口的数据
}

连接方式
将蜂鸣器正极连接到指定数字引脚
蜂鸣器负极连接到GND
打开串口监视器，发送文本

API 参考
begin(int pin, long baud)

初始化莫尔斯电码库
pin：蜂鸣器连接引脚（默认7）
baud：串口波特率（默认9600）

run()

处理串口数据并发送莫尔斯电码

示例

通过串口监视器发送 "SOS"，蜂鸣器将发出三短三长三短的莫尔斯码信号。

支持平台

· 所有 Arduino 平台

许可证

版本

当前版本：2.0.0

项目作者 YOCIM 
项目维护者 YOCIM