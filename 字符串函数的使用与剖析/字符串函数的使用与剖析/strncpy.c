//strncpy的实现与分析 char * strncat(char * destination, const char * source, size_t num);
//Copies the first num characters of source to destination.If the end of the source C string(which is
//	signaled by a null - character) is found before num characters have been copied, destination is padded
//	with zeros until a total of num characters have been written to it.
//	拷贝num个字符从源字符串到目标空间。
//	如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个。
//#include<stdio.h>
//#include<assert.h>
//int main()
//{
//	char 
//	return 0;
//}