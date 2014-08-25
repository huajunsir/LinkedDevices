//*******************************************************************************
//----------------本例程仅供学习使用，未经作者允许，不得用于其他用途。-----------
//------------------------版权所有，仿冒必究！-----------------------------------
//----------------1.开发环境:Arduino IDE-----------------------------------------
//----------------2.测试使用开发板型号：Arduino Leonardo or Arduino UNO R3-------
//----------------3.单片机使用晶振：16M------------------------------------------
//----------------4.淘宝网址：Ilovemcu.taobao.com--------------------------------
//----------------------------52dpj.taobao.com-----------------------------------
//----------------------------epic-mcu.taobao.com--------------------------------
//----------------5.作者：神秘藏宝室---------------------------------------------
//*******************************************************************************/
#define LM35 A0

int val = 0;				//存放AD变量缓存
float temp = 0;			//温度值

void setup()
{
  Serial.begin(9600);		//串口波特率9600
}

void loop()
{
  val = analogRead(LM35);			//读取AD值
  temp = val * 0.48876;				//计算温度值
  //Serial.print("LM35 = ");		
  Serial.println(temp);				//串口输出温度值
  delay(1000);
}
