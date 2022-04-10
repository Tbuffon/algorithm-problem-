/*
从键盘输入一行字符，长度小于1000，统计其中单词的个数，个单词以空格分隔，且空格数可以是多个。
输入一行句子，仅有空格和英文字母构成。
输入格式：
输入只有一行句子。仅有空格和英文字母构成。（如含有逗号或者其他符号，即添加一个if即可，如果逗号连接在两个单词之间，在if中统计逗号的数量，输出时加上即可（默认不出现两个逗号之间只存在一个单词的情况和逗号单独出现的情况））

输出格式：
单词的个数
输入样例：
To be or not to be        This is a question
输出样例：
10
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char a[1001];
	cin.getline(a,1001);
	int len = strlen(a);
	int count = 0;
	
	for (int i = 0; i < len; i++){
//		cout<<a[i]<<endl;
		while(a[i]>='a'&&a[i]<='z' || a[i] >= 'A'&&a[i]<='Z'){
			i++;
		}
		count++;
		while(a[i] == ' '){
			i++;
		}
	}
	
	cout<< count <<endl;
	
	return 0;
}
